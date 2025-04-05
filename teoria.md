# ¿Qué son los bit, bytes y los operadores bitwise?

## ¿Qué son los bits?

Un **bit**, abreviatura de _binary digit_, es la unidad más básica de información en computación. Representa un estado lógico con dos valores posibles: **0** o **1**, que pueden interpretarse como falso/verdadero, apagado/encendido, etc. En informática, toda la información, desde números hasta imágenes, se representa en binario usando bits.

![image](/bit/image1.png)

## ¿Qué son los bytes?

Un **byte** es un grupo de 8 **bits**, y es la unidad estándar para almacenar datos en muchas arquitecturas de computadoras. Con 8 bits, un byte puede representar 256 valores diferentes (de 0 a 255), ya que 2^8 = 256.

En C, el tipo de dato `char` típicamente ocupa 1 byte, y se usa para almacenar caracteres.

## El sistema binario o cómo relacionar los bits y los bytes

El **sistema binario** es un método de numeración de base 2, donde solo se utilizan dos dígitos: 0 y 1. Cada posición en un número binario representa una potencia de 2, a diferencia del **sistema decimal**, en el que cada posición representa una potencia de 10.

![image2](/bit/image2.png)

## ¿Por qué las computadoras usan binario?

Las computadoras usan el sistema binario porque están construidas con **transistores**, componentes electrónicos que actúan como interruptores: pueden estar abiertos (0) o cerrados (1). Esta simplicidad garantiza una mayor fiabilidad. Con billones de transistores trabajando en conjunto, las computadoras procesan datos ejecutando operaciones lógicas y aritméticas mediante combinaciones de estos bits.

Los bytes, compuestos por bits, son fundamentales para representar la información en la memoria. Por ejemplo:

- El byte `01000001` representa la letra **A** en el estándar ASCII.
- El número decimal **255** se escribe en binario como `11111111` (8 bits).

Los bytes permiten manejar información más compleja:

- **Números enteros**: Usando múltiples bytes (ej. 4 bytes para un int en C).

- **Caracteres**: Codificados mediante tablas como ASCII o Unicode.

- **Imágenes, sonido, programas**: Todo se reduce a secuencias de bits organizadas en bytes.

El sistema binario no solo sirve para almacenar números. Es la base de:

- **Operaciones lógicas**: Puertas AND, OR, NOT (fundamentales en circuitos).

- **Máscaras de bits**: Para manipular configuraciones de hardware o permisos.

- **Algoritmos eficientes**: Compresión de datos, cifrado, gráficos.

- **Redes**: Las direcciones IP y protocolos usan bits para enrutar información.

## ¿Qué son los operadores bitwise?

Los operadores **bit a bit** (o _bitwise_) permiten manipular datos a nivel de bits. Son muy útiles para operaciones de bajo nivel, optimización y cuando se trabaja con datos en bruto (como en protocolos o hardware).

### Operador de desplazamiento a la izquierda `<<`

Desplaza todos los bits de un número hacia la izquierda. Cada desplazamiento equivale a multiplicar el número por 2.

Si tienes el **número 3** `00000011`, al desplazarlo 1 posición a la izquierda se obtiene el **número 6** `00000110`.

```c
#include <stdio.h>

int main(void)
{
	unsigned char c;

	c = 3;	//	00000011 en binario
	printf("%u << 1 = %u\n", c, c << 1);	//	00000110 en binario
	// se imprime "3 << 1 = 6"
	return (0);
}
```

### Operador de desplazamiento a la derecha `>>`

Desplaza todos los bits de un número hacia la derecha. Cada desplazamiento equivale a dividir el número por 2, descartando el residuo (o módulo).

Si tienes el **número 7** `00000111` desplazándolo a la derecha se obtiene el **número 3** `00000011`, ya que se pierde la parte fraccional.

```c
#include <stdio.h>

int main(void)
{
	unsigned char c;

	c = 7;	//	00000110 en binario
	printf("%u >> 1 = %u\n", c, c >> 1);	//	00000011 en binario
	// se imprime "7 >> 1 = 3"
	return (0);
}
```

### Operador AND bit a bit `&`

Compara cada bit de dos números y devuelve 1 solo si ambos bits correspondientes son 1; de lo contrario, devuelve 0.

Si tienes el **número 96** `01100000` y lo quieres comparar con el **número 32** `00100000`, obtendras el **número 32**, ya que solo devolverá **1** en la tercera posición `00100000`.

```c
#include <stdio.h>

int main(void) {
	unsigned char a;
	unsigned char b;
	unsigned char result;

	a = 96;				//	01100000 en binario
	b = 32;				//	00100000 en binario
	//						--&-----
	result = a & b;		//	00100000 en binario
	printf("%u & %u = %u\n", a, b, result);
	// se imprime "96 & 32 = 32"
	return (0);
}
```
### Operador NOT bit a bit `~`

Invierte cada bit del operando, convirtiendo los 1 en 0 y viceversa.

Si tienes el **número 15** `00001111` y usas el operador *NOT*, obtendras el **número 240** `11110000` ya que donde hubiera un 0 ahora habrá un 1 y viceversa.

```c
#include <stdio.h>

int main(void) {
	unsigned char a;
	unsigned char result;

	a = 15;				//	00001111 en binario
	//						~~~~~~~~
	result = ~a;		//	11110000 en binario
	printf("~%u = %u\n", a, result);
	// se imprime " ~15 = 240"
	return (0);
}
```

### Operador OR bit a bit `|`

Compara cada bit de dos números y devuelve 1 si al menos uno de los bits correspondientes es 1; en caso contrario, devuelve 0.

Si tienes el **número 178** `10110010` y lo quieres comparar con el **número 94** `01011110`, obtendras el **número 254** `11111110`, ya que solo devolverá 0 en la última posición.

```c
#include <stdio.h>

int main(void) {
	unsigned char a;
	unsigned char b;
	unsigned char result;

	a = 178;			//	10110010 en binario
	b = 94;				//	01011110 en binario
	//						|||||||-
	result = a | b;		//	11111110 en binario
	printf("%u | %u = %u\n", a, b, result);
	// se imprime "178 | 94 = 254"
	return (0);
}
```

### Operador XOR bit a bit `^`

Compara cada bit de dos números y devuelve 1 si los bits correspondientes son diferentes, y 0 si son iguales.

Si tienes el **número 20** `00010100` y lo quieres comparar con el **número 5** `00000101`, obtendras el **número 17** `00010001`, ya que devolverá 1 en la posicion 4 y 8 que son los unicos bits diferentes.

```c
#include <stdio.h>

int main(void) {
	unsigned char a;
	unsigned char b;
	unsigned char result;

	a = 20;				//	00010100 en binario
	b = 5;				//	00000101 en binario
	//						---^---^
	result = a ^ b;		//	00010001 en binario
	printf("%u ^ %u = %u\n", a, b, result);
	// se imprime "20 ^ 5 = 17"
	return (0);
}
```
