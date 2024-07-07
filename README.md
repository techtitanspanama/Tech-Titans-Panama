# Tech-Titans-Panama

Robocup 2024 project Tech-Titans IPT Arnulfo Arias 

Team members


Isabelle Martinez
XII level, Information Technology

Programming, Mechanical design

![IMG_20230712_100846 (3)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/2e9ed67a-2384-490e-a029-7c5ada6c4275)


Jamir Navarrete
XII level, Information Technology

Role in the team: Programming, mechanical design, electronics


![IMG_20230712_100904](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/060ceaea-19e5-497d-811d-3a7cdd9f1e7a)


Juan Gonzalez
XII level, Information Technology
Role in the team: Mechanical Design Programming, 3D Printing


# Technical Documents

31/5/2023

Beginning of the project, the aim is to develop an autonomous marine drone, with several sensors, which allows monitoring marine areas, searching for oil stains and, with air quality sensors, measuring the concentrations of dangerous substances.

For this, the first task was to choose a platform where all the necessary equipment, batteries and accessories could be mounted, for this reason a catamaran design with two hulls was decided, on the top you can place a base where all the electronics and sensors, batteries can go in the spaces of the helmet.

The parts of the catamaran were printed in 3D, PLA filament was used, almost 2 KG of filament was needed, due to the size the hull was divided into 3 parts, which would then be joined together, these parts required up to 20 hours of printing, it required almost a month of work to print all the parts of the catamaran.

![IMG_20230531_162139 (2)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/091c1e92-f210-4c51-9294-a762c268aa44)


15/6/2023

Electronics

The hull parts were printed, glued and painted with waterproof paint to prevent water ingress, we began to look for all the necessary electronic parts, including 

• Arduino Mega- central control part

- 1 HuskyLens IA vision sensor

• GPS module and 1-Sheeld magnetic compass, for the navigation part 

• 2 Citron 10 amp motor controllers 

• 2 12 volt motors for the propellers

• 1 electrical distribution box

Parts were assembled in a waterproof box, to prevent water damage

![IMG_20231216_092738 (1)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/5f296a9a-ce37-465e-84a7-7ab8991762b7)


For greater security, a DC Marine electrical connection box was used.

![IMG_20231216_092745](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/e4618872-30d2-4804-a683-55f7db1b9a1f)


Electronic system view


![IMG_20231216_092752](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/610efba8-92bc-459f-b092-48f9d8f58bda)

Programming

The Arduino Mega was programmed in Mind+ and then converted to Arduino IDE, a Huskilens camera with AI programs was used, the object tracking program was used, the camera uses horizontal and vertical coordinates to see the position of the object, the program takes the position on the X axis and the height of the object, the position in x defines whether the object is to the right or left, Height defines whether the object is close or far away.

![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/fd964ffc-6a25-4de6-a4e9-99d7b0ee587c)

Delfin drone program operation diagram

![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/5f8d63fd-1946-4489-941b-fd391c064930)

Conversion for Robocup

Changes were made to the design to be able to use it in Robocup, a base was built with aluminum bars, with motors and wheels so that it could be used on the ground, to improve mobility omnidirectional wheels were included that improve the movement of the system.

Some systems such as GPS, Wi-fi were removed, since due to regulations they cannot be used, but these can be installed again



![IMG_20240430_173657 (1)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/b24909ca-a85f-4958-9688-e16458891688)


15/9/2023

Gas detection system design

In the original design, a detection system for various types of gases was proposed, such as methane, butane, LPG, the MQ-2 sensor was chosen, it was installed in a 3D printed structure, 

![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/b252c638-326d-4f34-9ba5-6d0bc0758476)

The MQ2 gas sensor is simple to use and has two different outputs. It not only provides a binary indication of the presence of combustible gasses, but also an analog representation of their concentration in air.The sensor’s analog output voltage  varies in proportion to the concentration of smoke/gas. The higher the concentration, the higher the output voltage; the lower the concentration, the lower the output voltage. The analog signal is conected to a analog input of the Arduino.To determine whether the gas concentration is within acceptable limits, we need to record the values your sensor outputs when exposed to various amounts of smoke/gas to find a  threshold value.


Construction Stages of the Delfín Drone




![IMG_20240306_115409](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/c3ea9fb1-a4cc-4355-93e4-c97194273c73)


![IMG_20240207_111225 (1)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/ef650fcb-bb67-449a-8c82-47b2b3c94c79)


![IMG-20240620-WA0010](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/c3b69674-c072-4f52-8ee3-a8407acb622c)



Communication

An Xbee transmitter was added, which communicates with the sign robot, in the programming commands were established to show the direction of movement of the Delfin drone,
left, right, forward and backward, also when the gas alert signal is activated it sends a warning signal, which shows the alert symbol on the screen, and shows the chemical formula of the detected gas, butane

![xbee (2)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/2ea504b6-38cc-48c7-ba78-9afb236b81ee)



Brain

Robotic System made up of 3 main parts, a Laptop with Google MediaPipe, with the gesture recognition module, connects with an Arduino Mega by serial communication, it receives the commands and connects to the motor drivers and the servos

![cerebro](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/12044e90-5427-4442-91a4-696b56b2f829)


Base

The base was built with Lego Tetrix and REV pieces, boxes were 3D printed to install the circuits

![IMG_20240309_102558](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/023aa2f4-381e-4918-a83c-2e61a3ce990c)


![IMG_20240309_102606](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/3aac8238-1fcc-40cd-9594-3a10b2b8b2da)


![IMG_20240321_133938](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/be936a84-0adc-4825-ae88-3d43033dc534)

Electronic Parts

- 1 Arduino Mega
- 1 Cytron dual high power motor driver
- 2 12 volts REV motors
- 3 SG92R mini servos
- 1- HS442 standard servo

The Arduino Mega connects with a USB port, high-power motor drivers and a voltage regulator are also used to power the servomotors.

![IMG_20240309_102611](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/387ff779-2e38-4828-a623-cabdf13b4d7c)

![IMG_20240420_093317](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/d846f3e4-cd4c-4eca-8fca-8cfa32229685)

Head

This was the part that took the most work, it was made up of multiple 3D printed pieces, it started with the movement of the neck and eyes, 2 mini servos were used for the eyes and an Hs-65 servo for the neck, the collation of The parts and mechanisms must be very exact so that the movements can be made.


![IMG_20240228_125716](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/d940323f-bdff-4d0c-b4e4-d6274d236c7a)


![IMG_20240228_125819](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/b430ef3f-740a-47bd-a63b-195ec2ca98fb)


![IMG_20240304_154845](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/02d85496-4eab-4d3d-8ff0-aaca30a27c83)




![IMG_20240304_160218](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/84a15120-084c-4a0e-a5f1-3ad668867837)


The last movement that was built was the jaw, due to the space it presented some difficulty, the Python Pyglet plugin was added to be able to execute audio files to simulate voice

![IMG_20240327_132501](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/6ca3e867-fecb-4804-bffa-5dbacd1b0ea2)

![IMG_20240327_132507](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/79adade5-e8b1-4da9-b1cf-e5df01ecb0a3)

![IMG_20240228_125808](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/f40efbcf-52ea-4382-ae3b-65d470a09884)

Coquete

Humanoid Robot, composed of a base with 2 12v DC motors, the structure was built with 1/2" PVC tubes, work was done on the design of the shoulders, since they have to support weight, pieces were 3D printed to To support the servos, aluminum servo blocks were used to increase the weight that a standard servo can move


![IMG_20240124_111320](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/0c8c47a5-7778-43bb-be5b-284c3c06d30d)

![IMG_20240124_111346](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/c11e0816-4a69-454f-a3e1-cce0aacb4b2a)

![IMG_20240131_103745](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/c655dd61-9cfc-45cd-95f5-0e510472af2f)

![IMG_20240131_103800](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/41483d81-e1ff-49fc-8e14-9c0c8770ead4)

Work was done on the tracking algorithm, so that the movements were more exact, the original 120 rpm motors were changed for higher speed motors, 300 rpm, the program was modified to open the detection range and minimize blind spots in detection.

![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/32429288-458f-47a9-8ebc-83611e40185d)

The structure of the robot was finished built in 3mm wood, some parts were cut on a Laser cutter.


![IMG_20240315_094525](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/d0baa3c5-9c45-4f13-84ce-f7cb63ca1467)

![IMG_20240306_115434](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/6ebc6e88-73a4-469b-867a-42ce66cd67f5)

![IMG_20240308_145613](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/4cf2ea08-b040-4ffc-af5e-2c0144d5d96c)

The Arduino Mega controller and motor controllers were placed on the back of the robot, in a 3D printed box, the Huskilens camera was placed on top of the head, at first facing forward, after some testing and with the experience in presentations, it was decided to install it facing backwards, so you can better observe the robot's movements

![IMG_20240315_095644](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/29d66781-3162-4b2d-9c23-004a462d385b)

![IMG_20240502_143038](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/e49c79ab-a2aa-49b6-8c4e-0ad450802a3e)

Another detail that was added was the eyes made with an LED matrix, it was programmed with the CoolLed app, which allows the designs to be made and loaded into the LED matrix. As the last detail, the robot was painted and decorated.

![IMG_20240315_112411](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/dc035fbd-59ec-4aae-a560-c5ae6d1cf477)

The programming was done as a base in Mind+, a block programming language and was transferred to Arduino IDE, using Mind+ we can better visualize the programming and then make modifications in the Arduino IDE.

![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/b14a6c8f-8a1f-4d4b-8667-782568becce1)


The Robot Sign

The Sign Robot started as a matrix of programmable Neopixel LEDs, an installation of 50 12 volt Neopixel LEDs was purchased, an Arduino Nano Every was used to manage the LEDs, the Fast Led library was used to control the LEDs through a digital port.  The LED separators were manufactured in a 3D printer , this grid is 7 x 7, 7 squares high by 7 squares wide, for a total of 49 LEDs, the base was made of laser cut wood


![IMG_20240316_090201](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/df25fe40-f0c0-42ce-9857-53fdd0ddb71b)

![IMG_20240316_093046](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/43bf622d-c276-499a-98a9-4ad70eed3eb1)

![IMG_20240316_093110](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/346432fc-3b03-4b3b-b9f0-c35c10990726)

The FastLed library allows you to control color, on, off, intensity of the LEDs, all controlled by the Arduino, a 5v regulator is needed to power the Nano, in addition to a small protection circuit made up of resistors and a capacitor, to maintain the stable voltage, as Neopixels are very sensitive to voltage changes.

![IMG_20240316_100432](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/7032f69f-3d6f-46d6-942e-da96e18d160f)

At first it was thought to keep the sign in a fixed position, and that it would receive data through an Xbee from the other robots.

![IMG_20240430_173649](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/ab9a33d0-c796-4e37-88ba-d30179276860)


It was decided to make a mobile robot with the sign, mounting it on a three-wheeled omnidirectional base, controlled by a gesture sensor, another Arduino Mega was needed, and 3 motor controllers, a PVC pipe was used to mount the sign to the base with wheels the supports were 3D printed

![IMG_20240327_110759](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/c0051c94-d9b7-41bf-a1ac-864a9d931c39)

![IMG_20240331_152453](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/075a93dd-62f6-4de4-9000-75f775818cff)

![IMG_20240331_152459](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/06a039ee-a465-4c3d-ac4b-10c7bab3152e)


![IMG_20240503_153231](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/81baed55-24f3-411e-ba93-2b43bfa7457a)


