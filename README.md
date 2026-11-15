GESTIONNAIRE D'UNE CLASSE DE TERMINALE SÉRIE SCIENTIFIQUE (SÉRIE C) BÉNINOISE

Ce projet est une application de langage C permettant de gérer les notes d'une classe béninoise de terminale série C




FONCTIONNALITÉS

- Gestion des élèves
- Ajout de notes
- Calcul de moyennes
- Classement des élèves
- Sauvegarde des données




TECHNOLOGIES UTILISÉES

- Langage C
- GCC
- Fichiers binaires pour le stockage des données




INSTALLATION ET EXÉCUTION

- Compilation : gcc *.c -o classe
- Exécution : ./classe




INFORMATIONS ET RECOMMANDATIONS

- La limite des élèves que l'on peut enregistrer est de 100
- L'identifiant d'un élève ne doit pas etre égal à zéro
- Il est possible d'enregistrer 4 notes : deux notes d'interrogation, une note de semi-devoir et une note de devoir
- Aucune note enregistrée ne doit etre égale à zéro. Si une note est égale à zéro lors d'un affichage, cela signifie qu'elle n'a pas encore été ajoutée
- La moyenne des interrogations est égale à la somme des notes d'interrogation divisée par 2
- La moyenne pour une matière est égale à la somme de la note du devoir et de la moyenne partielle divisée par 2. La moyenne partielle est égale à la somme de la note du semi-devoir et de la moyenne des interrogations divisée pae 2
- La moyenne générale est égale au quotient de la somme des moyennes par matiére, chacune multipliée par son coefficient, par la somme des coefficients (ici égale à 22)
- Le classement des élèves se fait par rapport à la moyenne générale
- La recherche par identifiant donne le nom, les prénoms et les notes de l'élève
- La recherche par nom donne l'identifiant de l'élève
- Les coefficients pour les matières sont :
    - Mathématiques : 6
    - Physique, Chimie et Technologie : 5
    - Sciences de la Vie et de la Terre : 2
    - Français : 2
    - Histoire-Géographie : 2
    - Anglais : 2
    - Philosophie : 2
    - Sport : 1




    AUTEUR

    LOKONHOUNDE Max-Steven Mahuna