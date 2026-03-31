# _printf 💻 💼
<img src="https://img.shields.io/badge/C-FFA500?logo=c&logoColor=white&style=for-the-badge" alt="C badge">
<img src="https://img.shields.io/badge/HOLBERTON-F50548?logo=holberton%20school&logoColor=white&style=for-the-badge" alt="HOLBERTON badge">


##  📋 Description
_printf is a Holberton School assignment that we had to complete in pairs within 15 days.
This project aims to reproduce the printf command in C, handling the following cases: %s, %c, %%, %d, %i, and also error cases.
##  ⚙️ Prototype
```
int _printf(const char *format, ...);
```
## 🧑🏽‍💻 Usage

To use this command, simply compile with this compiler:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
If you need help understanding how this command works, type this command in the terminal to open the manual:
```
man ./man_3_printf.txt
```

## 👀 Examples
Here are some examples of the command:
```
int age = 24;
printf("J'ai %d ans\n", age);
-> compilation et execution
J'ai 24 ans
```
```
char *string = "Mon sac est fait !";
int age = 24;
printf("J'ai %d ans !\n%s\n", age, string);
-> compilation et execution
J'ai 24 ans !
Mon sac est fait !
```

## 📂 Files
- _printf.c -> Main function of _printf
- print_char.c -> File used to print each character
- print_number.c -> File used to process numbers
- handler.c -> File that handles specifiers (%s, %%, %d...)
- main.h -> Contains all the function prototypes used

## ℹ️ Requierments
For this project we were only allowed to use certain commands:
- write
- malloc 
- free
- va_start 
- va_end 
- va_copy
- va_arg
You will found the flowchart below : \
[Flowchart](https://i.postimg.cc/fyk6Jnbp/flowchart-printf.png)

## ✍️ Authors
Yoann and Noham 
C29 Holberton School Toulouse