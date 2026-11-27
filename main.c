#include<stdio.h>
#include"classe.h"
#include"menu.h"
#include"save.h"






int main() {

    int b, c, d ;

    Eleve eleve[MAX_ELEVE] ;

    for(d = 0 ; d < MAX_ELEVE ; d++) {
        eleve[d].id = 0 ;
    }



    c = chargeclasse(eleve) ;


    do {


        printf("\n\n\n\033[32m===================================================================== \n");
        printf("                  CLASSE DE TERMINALE SÉRIE C \n");
        printf("===================================================================== \033[0m\n\n\n");


        printf("\033[34m1. Gérer les élèves \n");
        printf("2. Gérer les notes et moyennes \n");
        printf("3. Classement des élèves \033[0m \n");
        printf("\033[31m4. Suppression \n");
        printf("\033[33m5. Quitter \033[0m \n\n\n");

        printf("Tapez le numéro de l'action à effectuer \n");
        scanf("%d",&b);
        viderbuffer() ;

        switch (b) {
        
            case 1:
                menueleve(eleve) ;
                break;


            case 2:
                menunote(eleve) ;
                break ;


            case 3:
                classer(eleve) ;
                break ;


            case 4:
                menusupp(eleve) ;
                break ;

                
            case 5:
                printf("Aurevoir \n\n\n");
                saveclasse(eleve , compteleve(eleve)) ;
                break ;

            
            default:
                printf("Saisie invalide \n");
                break;



        }
        


    } while(b != 5) ;








    return 0 ;


}