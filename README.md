# _printf 💻 💼
<img src="https://img.shields.io/badge/C-FFA500?logo=c&logoColor=white&style=for-the-badge" alt="C badge">
<img src="https://img.shields.io/badge/HOLBERTON-F50548?logo=holberton%20school&logoColor=white&style=for-the-badge" alt="HOLBERTON badge">


##  📋 Description
_printf est un exercice Holberton School que nous avons dû faire dans un délai de 15 jours en binome.
Ce projet à pour but de reproduire la commande printf en C, en traitant les cas suivant : %s, %c, %%, %d, %i et également les cas d'erreurs.
##  ⚙️ Prototype
```
int _printf(const char *format, ...);
```
## 🧑🏽‍💻 Usage
Pour utiliser cette commande il suffit de compiler avec ce compilateur :
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
Si une aide se fait sentir sur le fonctionnement de cette commande se fait sentir, tapez cette commande dans le terminal pour ouvrir le manuel : 
```
man ./man_3_printf.txt
```

## 👀 Exemples
Voici quelques exemple de la commande :
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

## 📂 Fichiers
- _printf.c -> Fonction principal de _printf 
- print_char.c -> Fichier qui va servir à afficher chaque caractère
- print_number.c -> Fichier permettant de traiter les nombres
- handler.c -> Fichier qui traite les specifiers (%s, %%, %d...)
- main.h -> Rassemble tous les prototypes de fonction utilisés

## ℹ️ Contraintes
Pour ce projet nous n'avons eu le droit d'utiliser que certaine commande :
- write
- malloc 
- free
- va_start 
- va_end 
- va_copy
- va_arg

## ✍️ Auteurs
Yoann et Noham 
C29 Holberton School Toulouse