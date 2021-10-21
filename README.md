# Arduino-String-Split-with-index
Recibe dato via comunicacion serial, 
realiza el corte de una cadena de texto 
y guarda cada parte de la cadena de texto en variable separada.

Se uso para este caso una tarjeta Teensy++ 2.0,
la cual lleva consigo un uC AT90USB1286 a 26MHz.

El programa esta diseñado para enviar una cadena de texto a la tarjeta
via terminal, y regresa la cadena separada asignada a sus variables.

Por ejemplo:

	PC send: "Hola mundo"

Regresa el uC:

	stringSplit[0]: hola 
	stringSplit[1]: mundo 




Jasa.

