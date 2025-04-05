# Aprendiendo operadores bitwise en C

🔗 [Read in 🇬🇧](./README.en.md)

Este repositorio contiene una serie de ejercicios prácticos para aprender el funcionamiento de los operadores bitwise (a nivel de bits) en el lenguaje C. Está orientado a estudiantes, desarrolladores o entusiastas que quieran mejorar su comprensión de cómo manipular datos a nivel binario, especialmente útil en programación de sistemas, microcontroladores y optimización de bajo nivel.

## Propósito

Los operadores bitwise son herramientas potentes para trabajar con bits de forma directa. Son especialmente relevantes cuando se desarrollan aplicaciones con restricciones de memoria o tiempo de ejecución, como sucede en sistemas embebidos, firmware o dispositivos como drones.

Este repositorio sirve como complemento a un artículo técnico donde se explican los conceptos teóricos detrás de los bits, bytes y operadores a bajo nivel.

## Artículo relacionado

[Bits, bytes y operadores bitwise – guía práctica en C (dev.to)](https://dev.to/djsurgeon/bits-bytes-y-los-operadores-bitwise-42m)

## Ejercicios incluidos

Cada ejercicio está documentado con explicaciones claras y ejemplos de uso.

- [`bit_is_on.c`](./bit_is_on.c)  
  Comprueba si un bit específico está activo (1) en un número de 16 bits.

- [`even_bit.c`](./even_bit.c)  
  Verifica si un número de 16 bits es par usando operaciones bitwise.

- [`put_bit_on.c`](./put_bit_on.c)  
  Activa (pone a 1) un bit concreto en un número de 16 bits.

## Compilación

Puedes compilar cada archivo por separado con `cc`:

```bash
cc -Wall -Wextra -Werror -o bit_is_on bit_is_on.c
./bit_is_on
cc -Wall -Wextra -Werror -o even_bit even_bit.c
./even_bit
cc -Wall -Wextra -Werror -o put_bit_on put_bit_on.c
./put_bit_on
```

## Contribuciones

Este repositorio está pensado como un espacio de aprendizaje. Se aceptan mejoras, nuevos ejercicios o sugerencias. ¡Toda aportación es bienvenida!

## Autor

Sergio Jiménez de la Cruz

- [Github](https://github.com/DjSurgeon)
- [Linkedin](https://www.linkedin.com/in/sergiojimenez42dev/)
- [Email](djsurgeon83@gmail.com)