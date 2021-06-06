# Entrainement C

## Compilation :
```powershell  
$  gcc <fichiers sources(.c)> -Wall -pedantic -std=c99
```

## Execution :
```powershell  
$  ./a.out
```

## Verification mémoire (sous linux) :
```powershell 
$  valgrind ./a.out 
```

## EXERCICE 1 (arbre binaire)

### 1) Créer le type d'un arbre binaire d'entier
### 2) L'arbre binaire pouvant répondre à ces opérations:
- creation
- ajout à gauche
- ajout à droite
- ajout
- supression de l'arbre
- affichage prefixe (ou postfixe, infixe ...)

### 3) Enfin des fonctions/acceseurs permettant d'accéder:
- fils gauche
- fils droit
- valeur

## EXERCICE 2 (Liste)
### 1) Créer le type d'une liste chainé d'entier
### 2) La liste chainé doit pouvoir effectuer ces opérations:
- creation
- ajout au début
- ajout à la fin
- supression de la liste
- affichage 
- savoir si la liste est vide

### 3) Enfin des fonctions/acceseurs permettant d'accéder:
- suivant
- valeur

## EXERCICE 3 (List vers arbre binaire)
### Ecrire une fonction qui prend en entré une liste et renvoie un arbre binaire "filaire"
```
[1,2,3,4] ->       1
                  /
                 2
                /
               3
              /
             4
```

Bonus :
Pas très dure techniquement si il y a bien eu une séparation entre le code client ('.h') et le code d'implémentation. 
## EXERCICE 4 (réecriture des listes par des arbres binaire)
## EXERCICE 5 (réecriture des arbres biniares par tableau) 