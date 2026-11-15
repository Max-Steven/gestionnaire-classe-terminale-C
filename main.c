#include<stdio.h>
#include"classe.h"
#include"menu.h"
#include"save.h"






int main() {

    int a, b, c, d ;

    Eleve eleve[MAX_ELEVE] ;

    for(a = 0 ; a < MAX_ELEVE ; a++) {
        eleve[a].id = 0 ;
        eleve[a].mathematiques.coefficient = 6 ;
        eleve[a].pct.coefficient = 5 ;
        eleve[a].svt.coefficient = 2 ;
        eleve[a].français.coefficient = 2 ;
        eleve[a].histgeo.coefficient = 2 ;
        eleve[a].anglais.coefficient = 2 ;
        eleve[a].philosophie.coefficient = 2 ;
        eleve[a].sport.coefficient = 1 ;
        
    }



    c = chargeclasse(eleve) ;


    do {


        printf("===================================================================== \n");
        printf("CLASSE DE TERMINALE SÉRIE C \n");
        printf("===================================================================== \n\n\n");


        printf("1. Gérer les élèves \n");
        printf("2. Gérer les notes et moyennes \n");
        printf("3. Classement des élèves \n");
        printf("4. Suppression \n");
        printf("5. Quitter \n\n\n");

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