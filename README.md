# _printf 💻 💼 <img src="https://img.shields.io/badge/HOLBERTON-F50548?logo=holberton%20school&logoColor=white&style=for-the-badge" alt="HOLBERTON badge">

Welcome to our ```_printf``` project

##  📋 Description
```_printf``` is a Holberton School assignment that we had to complete in pairs within 15 days.
This project aims to reproduce the printf command in C, handling the following cases: ```%s```, ```%c```, ```%%```, ```%d```, ```%i``` and also error cases.
##  ⚙️ Prototype
```
int _printf(const char *format, ...);
```
## Technologies used
<img src="https://img.shields.io/badge/C-1A386E?logo=c&logoColor=white&style=for-the-badge" alt="C badge">
<img src="https://img.shields.io/badge/LINUX-050100?logo=linux&logoColor=white&style=for-the-badge" alt="LINUX badge">
<img src="https://img.shields.io/badge/GIT-E3650B?logo=git&logoColor=white&style=for-the-badge" alt="GIT badge">
<img src="https://img.shields.io/badge/VS%20CODE-4FB5F0?logo=vs%20code&logoColor=white&style=for-the-badge" alt="VS CODE badge">


## 🧑🏽‍💻 Usage

To use this command, simply compile with this compiler:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
If you need help understanding how this command works, type this command in the terminal to open the manual:
```
man ./man_3_printf.txt
```
| **Specifier** | **print** |
| ------------ | ------------ | 
| %s        | It's a string !     | 
| %%        |% |
| %c        | H       | 
| %d        | print a decimal in base 10        |
| %i        | print a integer in base 10        | 
| Other        | Not supported       | 

## 👀 Examples
Here are some examples of the command:
```
#include "main.h"
#include <stdio.h>

int main(void);
{
int age = 24;

printf("J'ai %d ans\n", age);
}
Puis dans le terminal de commande :
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
./name_executable
J'ai 24 ans
```
```
#include "main.h"
#include <stdio.h>

int main void
{
char *string = "Mon sac est fait !";
int age = 24;
printf("J'ai %d ans !\n%s\n", age, string);
}
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
./name_executable
J'ai 24 ans !
Mon sac est fait !
```

## 📂 Files
``` _printf.c``` -> Fonction principal de _printf 

```print_char.c```-> Fichier qui va servir à afficher chaque caractère

```print_number.c``` -> Fichier permettant de traiter les nombres

```handler.c``` -> Fichier qui traite les specifiers (%s, %%, %d...)

```main.h``` -> Rassemble tous les prototypes de fonction utilisés

## ℹ️ Requierments
For this project we were only allowed to use certain commands:

```- write```

```- malloc``` 

```- free```

```- va_start``` 

```- va_end``` 

```- va_copy```

```- va_arg``` 

You will found the flowchart below : \
[Flowchart](https://i.postimg.cc/fyk6Jnbp/flowchart-printf.png)

## ✍️ Authors
[Yoann](https://github.com/Yo13038/)
\
[Noham](https://github.com/Yo13038/)
C29 Holberton School Toulouse