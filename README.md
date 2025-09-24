

TP de Structures de Données II - INF 231_EC2

📋 Informations générales

Matière : Structures de Données II
Code : INF 231_EC2
Responsable : PR Metatagia
Type : Travaux Pratiques en groupe

👥 Composition du groupe

Groupe de TP1 
Membres (6) :

1. Nongni Temgoua Channelle Bryana 
2. NGUEAGHO KRYS DE HUGO
3. MELONG TSAWA ROSVEL
4 Sibeufo nguembu jordanelle
5.pola wachie Élisabeth reine
6. NGUIMDJOU DEFORD DAINA ANASTASIE 

🎯 Objectifs du TP

Ce TP a pour objectif de mettre en pratique les concepts fondamentaux de manipulation de données à travers la programmation en langage C. Les compétences visées sont :

· Manipulation de tableaux et matrices
· Implémentation d'algorithmes de base
· Gestion de la complexité algorithmique
· Travail collaboratif en programmation

📁 Structure du projet

```
tp_structures_donnees/
│
├── src/
│   ├── main.c                 # Programme principal avec menu
│   ├── matrices.c             # Opérations sur les matrices
│   ├── matrices.h             # Headers des fonctions matrices
│   ├── tableaux.c             # Opérations sur les tableaux
│   ├── tableaux.h             # Headers des fonctions tableaux
│   ├── vecteurs.c             # Opérations vectorielles
│   └── vecteurs.h             # Headers des fonctions vecteurs
│
├── include/                   # Headers supplémentaires
├── docs/                      # Documentation
├── tests/                     # Fichiers de test
├── Makefile                   # Script de compilation
└── README.md                  # Ce fichier
```

📝 Exercices implémentés

1. Somme de matrices

Fichier : somme.c
Fonction : sommeMatrices()
Description : Calcule la somme de deux matrices de mêmes dimensions.

2. Produit de matrices

Fichier : produit.c
Fonction : produitMatrices()
Description : Calcule le produit de deux matrices compatibles.

3. Recherche séquentielle

Fichier : seq.c
Fonction : rechercheSequentielle()
Description : Recherche un élément dans un tableau non trié.

4. Multiplication 

Fichier : tableaux.c
Fonction : multiplicationAddition()
Description : Implémente la multiplication en utilisant uniquement l'addition.

5. Test de tableau trié

Fichier : tableaux.c
Fonction : estTableauTrie()
Description : Vérifie si un tableau est trié par ordre croissant.

6. Médian d'un tableau

Fichier : median.c
Fonction : mediane()
Description : Calcule la valeur médiane d'un tableau.

7. Inversion de tableau

Fichier : inversion.c
Fonction : inverserTableau()
Description : Inverse l'ordre des éléments d'un tableau.

8. Produit vectoriel

Fichier : v.c
Fonction : produitVectoriel()
Description : Calcule le produit vectoriel de deux vecteurs 3D.

9. Produit vecteur × matrice

Fichier : produitVect×matrice.c
Fonction : produitVecteurMatrice()
Description : Calcule le produit d'un vecteur par une matrice.

🛠️ Compilation et exécution

Compilation manuelle

```bash
gcc -o tp src/main.c src/matrices.c src/tableaux.c src/vecteurs.c -Iinclude
```

Utilisation du Makefile

```bash
make        # Compilation
make run    # Compilation + exécution
make clean  # Nettoyage des fichiers compilés
make test   # Exécution des tests
```

Exécution

```bash
./tp
```

🎮 Utilisation du programme

Le programme propose un menu interactif :

```
=== TP STRUCTURES DE DONNEES II ===
1. Somme de matrices
2. Produit de matrices
3. Recherche séquentielle
4. Multiplication par addition
5. Test tableau trié
6. Médian d'un tableau
7. Inverser un tableau
8. Produit vectoriel
9. Produit vecteur × matrice
0. Quitter

Votre choix : 
```

📊 Jeux de test fournis

Matrices de test

· Matrices 2x2 : {{1,2},{3,4}} et {{5,6},{7,8}}
· Matrices 3x3 : {{1,2,3},{4,5,6},{7,8,9}}

Tableaux de test

· Tableau trié : {1,2,3,4,5}
· Tableau non trié : {5,2,8,1,3}
· Tableau pour médiane : {7,3,1,9,5,2,8,4,6}

Vecteurs de test

· Vecteurs 3D : {1,2,3} et {4,5,6}

🔧 Répartition des tâches

Membre Tâches principales Exercices

Nongni Temgoua Channelle Gestion: programme 7,9
Sibeufo nguembu jordanelle,: programme,6
pola wachie Élisabeth reine  : programme, 5
Melong stawa rosveld : programme 1 et tests 
NGUEAGHO KRYS DE HUGO :programme 2,8,4
NGUIMDJOU DEFORD DAINA ANASTASIe :programme 3et test 
📈 Complexités algorithmiques

Exercice Complexité temporelle Complexité spatiale
Somme matrices O(n²) O(1)
Produit matrices O(n³) O(1)
Recherche séquentielle O(n) O(1)
Multiplication addition O(b) O(1)
Test tableau trié O(n) O(1)
Médian O(n log n) O(n)
Inversion tableau O(n) O(1)
Produit vectoriel O(1) O(1)
Vecteur × Matrice O(n²) O(1)

🧪 Tests et validation

Chaque fonction inclut des tests unitaires vérifiant :

· Cas normaux
· Cas limites
· Gestion d'erreurs
· Validation des résultats



📚 Bibliographie et références

· "Algorithmes en langage C" - Robert Sedgewick
· "The C Programming Language" - Kernighan & Ritchie
· Cours INF 231_EC2 - PR Metatagia
· Documentation GNU C Library

✨ Améliorations possibles

· Interface graphique
· Gestion des fichiers pour les données d'entrée
· Optimisation des algorithmes
· Tests unitaires automatisés
· Parallelisation avec OpenMP

📞 Support et contact




· Responsable matière : PR Metatagia

---

Date de réalisation : [24 septembre2025]
Dernière modification : [24 septembre 2025]


---
  <em>Réalisé avec ❤️ par le groupe [NUMÉRO] - INF 231_EC2</em>
</div>

📋 Checklist de validation

· Tous les exercices implémentés
· Code compilable sans erreurs
· Tests fonctionnels validés
· Documentation complète
· Répartition équitable des tâches
· Code commenté et lisible
· Gestion d'erreurs implémentée
