# ft_printf

*This project is part of the 42 curriculum by helabiad.*

## Description

The **ft_printf** project consists of recreating the standard C library function `printf()`.

The goal is to understand and implement variadic functions in C using `va_list`, `va_start`, `va_arg`, and `va_end`.

The function handles different format specifiers, prints the corresponding arguments, and returns the total number of characters printed.

## Supported Conversions

The mandatory part supports the following conversions:

| Specifier | Description                                     |
| :-------: | ----------------------------------------------- |
|    `%c`   | Prints a single character.                      |
|    `%s`   | Prints a string.                                |
|    `%p`   | Prints a pointer address in hexadecimal format. |
|    `%d`   | Prints a decimal number.                        |
|    `%i`   | Prints an integer in base 10.                   |
|    `%u`   | Prints an unsigned decimal number.              |
|    `%x`   | Prints a hexadecimal number in lowercase.       |
|    `%X`   | Prints a hexadecimal number in uppercase.       |
|    `%%`   | Prints a percent sign.                          |

## Instructions

### Compilation

The project includes a Makefile with the following rules:

- `make` – Compiles the source files and creates the static library `libftprintf.a`.
- `make clean` – Removes object files.
- `make fclean` – Removes object files and the library.
- `make re` – Recompiles the project from scratch.

### Usage

To use `ft_printf` in your project:

1. Include the header file:

   ```c
   #include "ft_printf.h"
   ```

2. Compile your source files with the library:

   ```bash
   cc main.c -L. -lftprintf
   ```

3. Run your executable:

   ```bash
   ./a.out
   ```

## Project Structure

```text
ft_printf/
│
├── ft_printf.c
├── ft_printf.h
├── ft_format.c
│
├── ft_putchar.c
├── ft_putstr.c
├── ft_strlen.c
├── ft_putnbr.c
├── ft_put_unsigned_nbr.c
├── ft_put_hex.c
├── ft_put_hex_lower.c
├── ft_put_hex_upper.c
├── ft_put_pointer.c
│
├── Makefile
└── README.md
```

## Resources

- [42 ft_printf Subject](https://cdn.intra.42.fr/pdf/pdf/139550/en.subject.pdf)
- [printf — Linux Manual](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic Functions — C Reference](https://en.cppreference.com/w/c/variadic.html)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)

## AI Usage

AI tools were used to help understand programming concepts and clarify how variadic functions work. They were also used to suggest clearer and more meaningful variable names to improve code readability.

All implementation, testing, and debugging were done by me.


## Author

**Login:** helabiad

**School:** 42