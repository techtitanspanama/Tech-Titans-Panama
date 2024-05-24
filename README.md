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

The hull parts were printed, glued and painted with waterproofing to prevent water ingress, we began to look for all the necessary electronic parts, including 

• Arduino Mega- central control part
• GPS module and 1-Sheeld magnetic compass, for the navigation part 
• 2 Citron 10 amp motor controllers 
• 2 12 volt motors for the propellers
• 1 electrical distribution box

Parts were assembled in a waterproof box, to prevent water damage

![IMG_20231216_092738 (1)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/5f296a9a-ce37-465e-84a7-7ab8991762b7)


Para mayor seguridad se utilizo una caja de conexión DC Marina


![IMG_20231216_092745](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/e4618872-30d2-4804-a683-55f7db1b9a1f)



Vista de sistema electrónico

![IMG_20231216_092752](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/610efba8-92bc-459f-b092-48f9d8f58bda)

Programacion

El Arduino Mega se programo en Mind+ y luego se convirtio a IDE de Arduino, se utilizo una camara Huskilens con programas de IA, se utilizo el programa de seguimiento de objetos, la camara utiliza coordenadas horizontales y verticales para ver la posición del objeto, utilizamos la posisión en X y la altura del objeto para hacer el programa de seguimiento de objeto, segun la posicion en el eje x el dron se mueve a la izquierda y derecha, segun la altura hacia atras y adelante, si el objeto es pequeño indica que esta lejos, si es mas grande indica que esta cerca

![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/fd964ffc-6a25-4de6-a4e9-99d7b0ee587c)

Diagrama de funcionamiento del programa del dron Delfin

![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/5f8d63fd-1946-4489-941b-fd391c064930)

Para mayor control del movimiento se trabajo en la velocidad de los motores y ademas se añadieron ruedas omnidireccionales lo que mejoro el desplazamiento del dron

![IMG_20240430_173657 (1)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/b24909ca-a85f-4958-9688-e16458891688)


15/9/2023

Diseño de sistema de deteccion de gases

En diseño original se propuso un sistema de deteccion de diversos tipos de gases, como metano, butano, GLP, se escogio el sensor MQ-2, se instalo en una estructura impresa en 3D, se escogio la salida digital, con el control para detectar pequeñas concentraciones

![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/b252c638-326d-4f34-9ba5-6d0bc0758476)


Etapas de Construccion del Dron Delfín




![IMG_20240306_115409](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/c3ea9fb1-a4cc-4355-93e4-c97194273c73)


![IMG_20240207_111225 (1)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/ef650fcb-bb67-449a-8c82-47b2b3c94c79)


Cerebro

Sistema Robotico formado por 3 partes principales, una Laptop con Google MediaPipe, con el modulo de reconocimiento de gestos, se conecta con un Arduino Mega por comunicacion serial, este recibe los comandos y se conecta a los drivers de motores y a los servos

![cerebro](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/12044e90-5427-4442-91a4-696b56b2f829)


Base 

La base se construyo con piezas de Lego Tetrix y REV, se imprimieron cajas en 3D para instalar los circuitos 

![IMG_20240309_102558](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/023aa2f4-381e-4918-a83c-2e61a3ce990c)


![IMG_20240309_102606](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/3aac8238-1fcc-40cd-9594-3a10b2b8b2da)


![IMG_20240321_133938](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/be936a84-0adc-4825-ae88-3d43033dc534)


El Arduino Mega se conecta con un puerto USB , tambien se usan controladores de motor de alta potencia, un regulador de voltaje para alimentacion de los servomotores 


![IMG_20240309_102611](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/387ff779-2e38-4828-a623-cabdf13b4d7c)

![IMG_20240420_093317](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/d846f3e4-cd4c-4eca-8fca-8cfa32229685)

La Cabeza

Esta fue la parte que mas llevo trabajo, se armo de multiples piezas impresas en 3D, se inicio con el movimiento del cuello y los ojos, se utilizaron 2 mini servos para los ojos y un servo Hs-65 para el cuello, la colacacion de las piezas y mecanismos deben ser muy exactos para que los movimientos se puedan hacer.


![IMG_20240228_125716](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/d940323f-bdff-4d0c-b4e4-d6274d236c7a)


![IMG_20240228_125819](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/b430ef3f-740a-47bd-a63b-195ec2ca98fb)


![IMG_20240304_154845](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/02d85496-4eab-4d3d-8ff0-aaca30a27c83)




![IMG_20240304_160218](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/84a15120-084c-4a0e-a5f1-3ad668867837)


El ultimo movimiento que se construyo fue la mandibula, por el espacio presento algo de dificultad, se le añadio el complemento de Phyton Pyglet para poder ejecutar archivos de audio para simular voz

![IMG_20240327_132501](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/6ca3e867-fecb-4804-bffa-5dbacd1b0ea2)

![IMG_20240327_132507](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/79adade5-e8b1-4da9-b1cf-e5df01ecb0a3)

![IMG_20240228_125808](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/f40efbcf-52ea-4382-ae3b-65d470a09884)



Coquete

Robot Humanoide, compuesto de una base con 2 motores DC de 12v, la estructura fue construida por tubos de PVC de 1/2", se trabajo en el diseño de los hombros, ya que tienen que soportar peso, se imprimieron en 3D piezas para sostener los servos, se utilizaron servo blocks de aluminio para aumentar el peso que puede mover un servo standar

![IMG_20240124_111320](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/0c8c47a5-7778-43bb-be5b-284c3c06d30d)

![IMG_20240124_111346](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/c11e0816-4a69-454f-a3e1-cce0aacb4b2a)

![IMG_20240131_103745](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/c655dd61-9cfc-45cd-95f5-0e510472af2f)

![IMG_20240131_103800](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/41483d81-e1ff-49fc-8e14-9c0c8770ead4)

Se trabajo en el algoritmo de seguimiento, para que los movimientos fueran mas exactos, se cambiaron los motores originales de 120 rpm, por motores de mas velocidad, de 300 rpm, de modifico el programa para abrir el rango de deteccion y minimizar los puntos ciegos en la deteccion.


![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/32429288-458f-47a9-8ebc-83611e40185d)

La estructura del robot se termino de construir in madera de 3mm, algunas partes fueron cortadas en una cortadora Laser


![IMG_20240315_094525](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/d0baa3c5-9c45-4f13-84ce-f7cb63ca1467)

![IMG_20240306_115434](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/6ebc6e88-73a4-469b-867a-42ce66cd67f5)

![IMG_20240308_145613](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/4cf2ea08-b040-4ffc-af5e-2c0144d5d96c)

El controlador Arduino Mega y los controladores de motor se colocaron en la espalda del robot, en una caja impresa en 3D, la camara Huskilens se coloco en la parte superior de la cabeza, al principio mirando hacia el frente, tras algunas pruebas y con la experiencia en las presentaciones se decidio instalarla mirando hacia atras , por lo que se puede observar mejor los movimientos del robot

![IMG_20240315_095644](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/29d66781-3162-4b2d-9c23-004a462d385b)

![IMG_20240502_143038](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/e49c79ab-a2aa-49b6-8c4e-0ad450802a3e)


Otro detalle que se añadio fue los ojos hechos con una matriz de Leds, se programo con el app CoolLed, que permite hacer los diseños y cargarlos en la matriz de Leds, como ultimo detalle se procedio a la pintura y decoracion del robot.

![IMG_20240315_112411](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/dc035fbd-59ec-4aae-a560-c5ae6d1cf477)

La programacion se hizo como base en Mind+ , un lenguaje de programacion en bloques y se paso a Arduino IDE, utilizando Mind+ podemos visualizar mejor la programacion para luego hacer modificaciones en el IDE de Arduino  

![image](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/b14a6c8f-8a1f-4d4b-8667-782568becce1)



El Robot Letrero

El Robot Letrero inicio como una matriz de Leds Neopixels programables, se compro una instalacion de 50 leds Neopixel de 12 voltios, se utilizo un Arduino Nano Every para manejar los Leds, se uso la libreria Fast Led para controlar los leds atravez de un puerto digital, En la impresora 3D se fabrico los separadores de los Leds, esta para que la luz no se mezclara con los leds que se ecuentran al lado, esta cuadricula es de 7 x 7 , 7 cuadros de altura por 7 cuadros de anchura, para un total de 49 leds, la base se hizo en madera cortada con la laser

![IMG_20240316_090201](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/df25fe40-f0c0-42ce-9857-53fdd0ddb71b)

![IMG_20240316_093046](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/43bf622d-c276-499a-98a9-4ad70eed3eb1)

![IMG_20240316_093110](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/346432fc-3b03-4b3b-b9f0-c35c10990726)

La libreria FastLed permite controlar color, encendido, apagado, intensidad de los Leds, todo controlado por el Arduino, se necesito un regulador de 5v para alimentar el Nano, ademas de un pequeño circuito de proteccion formado por resistencias y un capacitor, para mantener el voltaje estable, ya que los Neopixels son muy sensibles a los cambios de voltaje.

![IMG_20240316_100432](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/7032f69f-3d6f-46d6-942e-da96e18d160f)

Al principio se penso en mantener el letrero en una posicion fija, y que recibiera datos mediante un Xbee de los otros robots


![IMG_20240430_173649](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/ab9a33d0-c796-4e37-88ba-d30179276860)


Se decidio hacer un robot movil con el letrero, montandolo en una base omnidireccional de tres ruedas, controlada por un sensor de gestos, se necesito otro Arduino Mega, y 3 controladores de motor, se utilizo un tubo de PVC para montar el letrero a la base con  las ruedas los soportes fueron impresos con 3D


![IMG_20240327_110759](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/c0051c94-d9b7-41bf-a1ac-864a9d931c39)

![IMG_20240331_152453](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/075a93dd-62f6-4de4-9000-75f775818cff)

![IMG_20240331_152459](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/06a039ee-a465-4c3d-ac4b-10c7bab3152e)


![IMG_20240503_153231](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/81baed55-24f3-411e-ba93-2b43bfa7457a)


