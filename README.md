# Module CPP 01

Ce module de la piscine C++ de l'école 42 introduit plusieurs concepts fondamentaux du langage C++ : l'allocation dynamique de mémoire, les pointeurs vs les références, l'utilisation des flux de fichiers, ainsi que les pointeurs sur fonctions membres.

## Contenu des exercices

### Exercice 00 : BraiiiiiiinnnzzzZ
Introduction à l'allocation de mémoire en C++ :
- **Stack (Pile)** : Création d'objets locaux (temporaires) avec une durée de vie limitée à leur bloc de code (ex: `randomChump`).
- **Heap (Tas)** : Allocation dynamique d'objets via `new` (ex: `newZombie`). Ces objets persistent jusqu'à ce qu'ils soient explicitement détruits avec `delete`.

### Exercice 01 : Moar brainz!
Manipulation des tableaux alloués dynamiquement :
- Utilisation de `new Zombie[N]` pour instancier un tableau d'objets consécutifs.
- Importance de l'opérateur `delete[]` pour détruire correctement chaque élément du tableau et éviter les fuites de mémoire.

### Exercice 02 : HI THIS IS BRAIN
Comprendre la différence entre un pointeur et une référence en C++ :
- Un pointeur (`*`) stocke une adresse et peut être réassigné ou valoir `NULL`.
- Une référence (`&`) agit comme un alias constant vers une variable existante et ne peut pas être nulle.

### Exercice 03 : Unnecessary violence
Mise en pratique des références et des pointeurs dans l'association de classes :
- `HumanA` utilise une **référence** pour son arme, car il est armé dès sa création et ne changera jamais le fait d'avoir une arme.
- `HumanB` utilise un **pointeur** pour son arme, car il peut être désarmé (pointeur `NULL`) au moment de sa création et s'équiper plus tard.

### Exercice 04 : Sed is for losers
Manipulation des flux de fichiers et des chaînes de caractères :
- Utilisation de `std::ifstream` pour lire le contenu d'un fichier et `std::ofstream` pour écrire dans un fichier `.replace`.
- Remplacement d'occurrences de texte (`s1` par `s2`) à l'aide des méthodes de la classe `std::string` (`find`, `length`, `substr`).

### Exercice 05 : Harl 2.0
Découverte des **pointeurs sur fonctions membres** :
- Utilisation d'un tableau de pointeurs sur méthodes (ex: `void (Harl::*levels[4])(void)`) pour remplacer une forêt de `if/else` par un routage dynamique des plaintes de Harl.

### Exercice 06 : Harl filter
Maîtrise de l'instruction `switch` :
- Utilisation du concept de *fall-through* du `switch` (omission volontaire des `break`) pour afficher tous les messages de gravité égale ou supérieure au niveau filtré.

## Compilation

Chaque exercice dispose de son propre `Makefile`. Vous pouvez compiler n'importe quel exercice en vous déplaçant dans son dossier et en exécutant `make` :

```bash
cd ex00
make
./zombie
```
