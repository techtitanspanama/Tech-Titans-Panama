/*!
 * MindPlus
 * mega2560
 *
 */
#include <DFRobot_HuskyLens.h>

// Dynamic variables
volatile float mind_n_velmax, mind_n_velmin, mind_n_x, mind_n_h;
// Function declaration
void DF_adelante();
void DF_atras();
void DF_seguir();
void DF_parar();
void DF_izquierda();
void DF_derecha();
// Create an object
DFRobot_HuskyLens huskylens;


// Main program start
void setup() {
	Serial.begin(9600);
	huskylens.beginI2CUntilSuccess();
	huskylens.writeAlgorithm(ALGORITHM_OBJECT_RECOGNITION);
	mind_n_velmax = 150;
	mind_n_velmin = 50;
}
void loop() {
	huskylens.request();
	if (huskylens.isLearned(1)) {
		if (huskylens.isAppear(1,HUSKYLENSResultBlock)) {
			mind_n_x = huskylens.readBlockParameter(1).xCenter;
			mind_n_h = huskylens.readBlockParameter(1).height;
			DF_seguir();
		}
		else {
			DF_parar();
		}
	}
	else {
		DF_parar();
	}
	if ((digitalRead(10)==0)) {
		Serial.write(5);
		digitalWrite(11, HIGH);
		delay(3000);
		digitalWrite(11, LOW);
	}
	else {
		digitalWrite(11, LOW);
	}
}


// Custom function
void DF_adelante() {
	digitalWrite(3, HIGH);
	analogWrite(2, mind_n_velmax);
	digitalWrite(5, LOW);
	analogWrite(4, mind_n_velmax);
	delay(1000);
}
void DF_atras() {
	digitalWrite(3, LOW);
	analogWrite(2, mind_n_velmax);
	digitalWrite(5, HIGH);
	analogWrite(4, mind_n_velmax);
	delay(1000);
}
void DF_seguir() {
	if ((((mind_n_x>=150) && (mind_n_x<=170)) && ((mind_n_h>=70) && (mind_n_h<=90)))) {
		DF_parar();
	}
	else if (((mind_n_h>0) && (mind_n_h<70))) {
		Serial.write(1);
		DF_adelante();
	}
	else if (((mind_n_h>90) && (mind_n_h<240))) {
		Serial.write(2);
		DF_atras();
	}
	else if (((mind_n_x>0) && (mind_n_x<150))) {
		Serial.write(3);
		DF_izquierda();
	}
	else if (((mind_n_x>170) && (mind_n_x<320))) {
		Serial.write(4);
		DF_derecha();
	}
}
void DF_parar() {
	analogWrite(2, 0);
	analogWrite(4, 0);
}
void DF_izquierda() {
	digitalWrite(3, HIGH);
	analogWrite(2, mind_n_velmin);
	digitalWrite(5, HIGH);
	analogWrite(4, mind_n_velmin);
	delay(1000);
}
void DF_derecha() {
	digitalWrite(3, LOW);
	analogWrite(2, mind_n_velmin);
	digitalWrite(5, LOW);
	analogWrite(4, mind_n_velmin);
	delay(1000);
}
