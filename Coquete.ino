
#include <DFRobot_Servo.h>
#include <DFRobot_HuskyLens.h>

volatile float mind_n_velmax, mind_n_velmin, mind_n_x, mind_n_h
void DF_adelante();
void DF_atras();
void DF_seguir();
void DF_parar();
void DF_derecha();
void DF_izquierda();
// Create an object
Servo             servo_6;
Servo             servo_7;
DFRobot_HuskyLens huskylens;
Servo             servo_9;
Servo             servo_8;


// Main program start
void setup() {
	huskylens.beginI2CUntilSuccess();
	huskylens.writeAlgorithm(ALGORITHM_OBJECT_RECOGNITION);
	mind_n_velmax = 180;
	mind_n_velmin = 180;
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
}


// Custom function
void DF_adelante() {
	servo_6.angle(6, abs(90));
	servo_7.angle(7, abs(90));
	digitalWrite(2, HIGH);
	analogWrite(3, mind_n_velmax);
	digitalWrite(4, HIGH);
	analogWrite(5, mind_n_velmax);
	delay(1000);
	servo_6.angle(6, abs(180));
	servo_7.angle(7, abs(0));
}
void DF_atras() {
	digitalWrite(2, LOW);
	analogWrite(3, mind_n_velmax);
	digitalWrite(4, LOW);
	analogWrite(5, mind_n_velmax);
	delay(1000);
}
void DF_seguir() {
	if ((((mind_n_x>=150) && (mind_n_x<=170)) && ((mind_n_h>=70) && (mind_n_h<=90)))) {
		DF_parar();
	}
	else if (((mind_n_h>0) && (mind_n_h<70))) {
		DF_atras();
	}
	else if (((mind_n_h>90) && (mind_n_h<240))) {
		DF_adelante();
	}
	else if (((mind_n_x>0) && (mind_n_x<150))) {
		DF_izquierda();
	}
	else if (((mind_n_x>170) && (mind_n_x<320))) {
		DF_derecha();
	}
}
void DF_parar() {
	analogWrite(3, 0);
	analogWrite(5, 0);
}
void DF_derecha() {
	servo_9.angle(9, abs(90));
	digitalWrite(2, LOW);
	analogWrite(3, mind_n_velmin);
	digitalWrite(4, HIGH);
	analogWrite(5, mind_n_velmin);
	delay(1000);
	servo_9.angle(9, abs(0));
}
void DF_izquierda() {
	servo_8.angle(8, abs(90));
	digitalWrite(2, HIGH);
	analogWrite(3, mind_n_velmin);
	digitalWrite(4, LOW);
	analogWrite(5, mind_n_velmin);
	delay(1000);
	servo_8.angle(8, abs(180));
}

