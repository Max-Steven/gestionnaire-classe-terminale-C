#include <stdio.h>
#include "classe.h"
#include "save.h"






void saveclasse(Eleve eleve[], int nombre) {

    FILE *fichier = fopen("data/eleve.dat", "wb");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    fwrite(&nombre, sizeof(int), 1, fichier);

    fwrite(eleve, sizeof(Eleve), nombre, fichier);

    fclose(fichier);


}





int chargeclasse(Eleve eleve[]) {

    FILE *fichier = fopen("data/eleve.dat", "rb");

    int nombre = 0;

    if (fichier == NULL) {
        return 0;
    }

    if (fread(&nombre, sizeof(int), 1, fichier) != 1) {
        fclose(fichier);
        return 0;
    }

    if (nombre < 0 || nombre > MAX_ELEVE) {
        fclose(fichier);
        return 0;
    }

    if (fread(eleve, sizeof(Eleve), nombre, fichier) != (size_t)nombre) {
        fclose(fichier);
        return 0;
    }

    fclose(fichier);

    return nombre;


    
}












