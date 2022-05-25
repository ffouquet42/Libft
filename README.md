# Libft

*Version: 15*

## Grade - 125/100

`screen`  
Mandatory Part : 100/100  
Bonus Part : 25/25

## Description

This first project as a student of 42 consists of recoding a certain number of functions from the standard C library, as well as other utility functions that we will be able to reuse throughout our course. You will find the English and French subjects in the "subjects" folder.

## What's in this project

This project contains several functions from the C library and other functions. It was realized with all the bonus.  
All the files are normed following the standard of 42. Here is the complete list below.

### Mandatory Part 1 - Libc Functions

* isalpha
* isdigit
* isalnum
* isascii
* isprint
* strlen
* memset
* bzero
* memcpy
* memmove
* strlcpy
* strlcat
* toupper
* tolower
* strchr
* strrchr
* strncmp
* memchr
* memcmp
* strnstr
* atoi
* calloc
* strdup

### Mandatory Part 2 - Additional functions

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_striteri
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

### Bonus Part

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

### Additional files

* main.c

This file is only used to test all functions. It is not requested and it should not be returned with the project.

## How to use it

First of all you need to clone this repository with one of the following commands.

HTTPS :
```bash
git clone https://github.com/ffouquet42/libft.git
```

or

SSH :
```bash
git clone git@github.com:ffouquet42/libft.git
```

For compile this project use the Makefile with one of the following rules.

`make` : Compile all the mandatory part in a `libft.a`  
`make bonus` : Compile the bonus part in a `libft.a`  
`make clean` : Delete the `*.o`  
`make fclean` : Delete the `*.o` and `libft.a`  
`make re` : Run `make fclean` then `make`  

For testing it, run `gcc *.c && ./a.out`

## Testing

This project respects the norm of 42 and has been tested with the norminette.  
`screen`  

This project has also been tested with two testers from github. All the tests carried out return OK / MOK.

* [libftTester](https://github.com/Tripouille/libftTester) from Tripouille  
`screen`  
* [Libftest](https://github.com/jtoty/Libftest) (libft-war-machine) from jtoty  
`screen`  

## Credit

Project made by [ffouquet42](https://github.com/ffouquet42)