

# TP de STRUCTURE DE DONNEES II-INF 231_EC2

## Informations générales

Matière : Structures de Données II  Code : INF 231_EC2  Responsable : PR Metatagia  Type : Travaux Pratiques en groupe

👥 Composition du groupe

Groupe de TP1 
Membres (6) :

1. NONGNI TEMGOUA CHANNELLE BRYANA 
2. NGUEAGHO KRYS DE HUGO
3. MELONG TSAWA ROSVEL
4. SIBEUFO NGUEMBU JORDANELLE
5. POLA WACHIE ÉLISABETH REINE
6. NGUIMDJOU DEFORD DAINA ANASTASIE 

## Objectifs du TP

Ce TP a pour objectif de mettre en pratique les concepts fondamentaux de manipulation de données à travers la programmation en langage C. Les compétences visées sont :

· Manipulation de tableaux et matrices
· Implémentation d'algorithmes de base
· Gestion de la complexité algorithmique
· Travail collaboratif en programmation

## Structure du projet


tp_structures_donnees/
│
├── src/ <br>
│   ├── seq.c <br>
│   ├── Produitmat.c <br>   
│   ├── PRODUIT vectoriel.c <br>
│   ├── inverse.c <br>
│   ├── median.c <br>
│   ├── produitvectxmatrice.c <br>
│   ├── produit.c <br>
│   ├── produitmat.c <br>
│   ├──trie.c <br>         

## Exercices implémentés

**1. Somme de matrices**

Fichier : addition_matrice.c  /n Description : Calcule la somme de deux matrices de mêmes dimensions.

2. Produit de matrices

Fichier : Produitmat.c  /n
Description : Calcule le produit de deux matrices compatibles c'est-à-dire dont le nombre de colonnes de la premiere matrice est egale au nombe de ligne de la deuxieme

3. Recherche séquentielle

Fichier : seq.c /n
Description : Recherche un élément dans un tableau non trié.

4. Multiplication 

Fichier : tableaux.c /n
Fonction : multiplicationAddition()
Description : Implémente la multiplication en utilisant uniquement l'addition.

5. Test de tableau trié

Fichier : tableaux.c /n
Fonction : estTableauTrie() /n
Description : Vérifie si un tableau est trié par ordre croissant ou décroissant selon le choix de l'utilisateur 

6. Médian d'un tableau

Fichier : médian.c
Fonction : mediane()
Description : Calcule la valeur médiane d'un tableau.

7. Inversion de tableau

Fichier : inverse.c
Fonction : inverserTableau()
Description : Inverse l'ordre des éléments d'un tableau.

8. Produit vectoriel

Fichier :PRODUIT vectoriel.c
Fonction : produitVectoriel()
Description : Calcule le produit vectoriel de deux vecteurs 3D.

9. Produit vecteur × matrice

Fichier : produitVect×matrice.c
Fonction : produitVecteurMatrice()
Description : Calcule le produit d'un vecteur par une matrice.

## 🛠️ Compilation et exécution

### Compilation manuelle

bash
gcc  nomfichier -o executable



### Exécution

```bash
./executable
```



## 🔧 Répartition des tâches

Membre Tâches principales Exercices

-NONGNI TEMGOUA CHANNELLE BRYANA: programme 7,9
-SIBEUFO NGUEMBU JORDANELLE : programme 6,3 et test
-POLA WACHIE ÉLISABETH REINE  : programme 5 et test
-MELONG TSAWA ROSVEL: programme 1 et tests 
-NGUEAGHO KRYS DE HUGO :programme 2,8
-NGUIMDJOU DEFORD DAINA ANASTASIE :programme 4 et test 

## 📈 Complexités algorithmiques


Exercice Complexité temporelle Complexité spatiale

. Somme matrices O(n²) O(1)
. Produit matrices O(n³) O(1)
. Recherche séquentielle O(n) O(1)
. Multiplication addition O(b) O(1)
. Test tableau trié O(n) O(1)
. Médian O(n log n) O(n)
. Inversion tableau O(n) O(1)
. Produit vectoriel O(1) O(1)
. Vecteur × Matrice O


📚 Bibliographie et références

· "Algorithmes en langage C" - Robert Sedgewick
· "The C Programming Language" - Kernighan & Ritchie
· Cours INF 231_EC2 - PR Metatagia
· Documentation GNU C Library

## ✨ Améliorations possibles

· Interface graphique
· Gestion des fichiers pour les données d'entrée
· Optimisation des algorithmes



## Responsable matière : PR Metatagia


### Date de réalisation : [22 septembre2025]
### Dernière modification : [24 septembre 2025]



 

 ## Checklist de validation

· Tous les exercices implémentés  
· Code compilable sans erreurs  
· Tests fonctionnels validés  
· Répartition équitable des tâches  
· Code commenté et lisible  
· Gestion d'erreurs implémentée

 ### Réalisé avec ❤️ par le groupe [NUMÉRO] - INF 231_EC2
