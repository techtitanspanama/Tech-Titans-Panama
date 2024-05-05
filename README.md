# Tech-Titans-Panama

Proyecto Robocup 2024 equipo Tech-Titans IPT Arnulfo Arias

Integrantes del Equipo


Isabelle Martinez
XII nivel, Tecnología Informatica

Programacion, Diseño mecanico

![IMG_20230712_100846 (3)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/2e9ed67a-2384-490e-a029-7c5ada6c4275)


Jamir Navarrete
XII nivel, Tecnología Informatica

Rol en el equipo: Programacion, Diseño mecanico, electrónica

![IMG_20230712_100904](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/060ceaea-19e5-497d-811d-3a7cdd9f1e7a)


Juan Gonzalez
XII nivel, Tecnología Informatica
Rol en el equipo: Programación Diseño Mecanico , Impresion 3d


Bitacora

31/5/2023

Inicio del proyecto, se quiere desarrollar un dron marino autónomo, con varios sensores, que permite vigilar áreas marinas, buscar manchas de petróleo y con sensores de calidad de aire medir las concentraciones de sustancias peligrosas.

Para esto la primera tarea fue escoger una plataforma donde se pudiera montar todos los equipos, baterías y accesorios necesarios, por esto se decidió un diseño de catamarán con dos cascos, en la parte de arriba se puede colocar una base donde estaría toda la electrónica y sensores, en los espacios del casco pueden ir las baterías.

Las partes del catamarán se imprimieron en 3D, se utilizo filamento PLA, se necesito casi 2 KG de filamento, por el tamaño el casco se dividió en 3 partes, que luego se unirían, estas piezas requerían hasta 20 horas de impresión , requirió casi un mes de trabajo imprimir todas las partes del catamarán.

![IMG_20230531_162139 (2)](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/091c1e92-f210-4c51-9294-a762c268aa44)


15/6/2023

Electrónica

Las partes del casco se imprimieron, se pegaron y se pintaron con impermeabilizante para evitar entradas de agua, se comenzó a buscar todas las partes electrónicas necesarias entre ellas
•	Arduino Mega- parte central de control
•	Modulo de GPS y compas magnético 1-Sheeld, para la parte de navegación
•	 2 controladores de motor de 10 amperios Citron
•	2 motores de 12 voltios 
•	1 caja para distribución eléctrica

Las piezas se montaron en una caja impermeable, para evitar daños por agua

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

Esta fue la parte que mas llevo trabajo, se armo de multiples piezas impresas en 3D, se inicio con el movimiento del cuello y los ojos, se utilizaron 2 mini servos para los ojos y un servo Hs-65 para el cuello, la colacacion de las piezas y mecanismos deben ser muy exactos para que los mvimientos se puedan hacer.


![IMG_20240228_125716](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/d940323f-bdff-4d0c-b4e4-d6274d236c7a)


![IMG_20240228_125819](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/b430ef3f-740a-47bd-a63b-195ec2ca98fb)


![IMG_20240304_154845](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/02d85496-4eab-4d3d-8ff0-aaca30a27c83)




![IMG_20240304_160218](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/84a15120-084c-4a0e-a5f1-3ad668867837)


El ultimo movimiento que se construyo fue la mandibula, por el espacio presento algo de dificultad, se le añadio el complemento de Phyton Pyglet para poder ejecutar archivos de audio para simular voz

![IMG_20240327_132501](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/6ca3e867-fecb-4804-bffa-5dbacd1b0ea2)

![IMG_20240327_132507](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/79adade5-e8b1-4da9-b1cf-e5df01ecb0a3)

![IMG_20240228_125808](https://github.com/techtitanspanama/Tech-Titans-Panama/assets/160556403/f40efbcf-52ea-4382-ae3b-65d470a09884)





