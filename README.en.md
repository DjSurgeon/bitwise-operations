# Learning Bitwise Operators in C

🔗 [Leer en 🇪🇸](./README.md)

This repository contains a series of practical exercises to learn and understand how bitwise operators work in the C programming language. It is aimed at students, developers, or enthusiasts who want to deepen their understanding of binary-level data manipulation — especially useful in systems programming, microcontrollers, and low-level optimization.

## Purpose

Bitwise operators are powerful tools for working directly with bits. They are especially useful when developing applications with memory or performance constraints, such as in embedded systems, firmware, or devices like drones.

This repository complements a technical article that explains the theoretical concepts behind bits, bytes, and low-level operators in C.

## Related article

[Bits, bytes and bitwise operators – a practical guide in C (dev.to)](https://dev.to/djsurgeon/bits-bytes-y-los-operadores-bitwise-42m)

## Included exercises

Each exercise is well-documented with clear explanations and usage examples.

- [`bit_is_on.c`](./bit_is_on.c)  
  Checks whether a specific bit is active (1) in a 16-bit number.

- [`even_bit.c`](./even_bit.c)  
  Determines whether a 16-bit number is even using bitwise operations.

- [`put_bit_on.c`](./put_bit_on.c)  
  Sets a specific bit to 1 in a 16-bit number.

## Compilation

You can compile each file individually using `cc`:

```bash
cc -Wall -Wextra -Werror -o bit_is_on bit_is_on.c
./bit_is_on
cc -Wall -Wextra -Werror -o even_bit even_bit.c
./even_bit
cc -Wall -Wextra -Werror -o put_bit_on put_bit_on.c
./put_bit_on
```

## Contributions

This repository is intended as a learning space. Improvements, new exercises, or suggestions are more than welcome!

##  Author

Sergio Jiménez de la Cruz

- [Github](https://github.com/DjSurgeon)
- [Linkedin](https://www.linkedin.com/in/sergiojimenez42dev/)
- [Email](djsurgeon83@gmail.com)
