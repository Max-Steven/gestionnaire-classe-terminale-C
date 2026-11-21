#include<stdio.h>
#include"classe.h"
#include"menu.h"





void menueleve(Eleve eleve[]) {

    int a ;

    do {
        printf("\n\n\n1. Ajouter un élève \n");
        printf("2. Compter les élèves \n");
        printf("3. Rechercher un élève \n");
        printf("4. Afficher tous les élèves \n");
        printf("5. Quitter \n\n\n");

        printf("Tapez le numéro de l'action à effectuer \n");
        scanf("%d",&a);
        viderbuffer() ;


        switch (a) {
        
            case 1:
                ajouteleve(eleve) ;
                break;


            case 2:
                affichnbreleve(eleve) ;
                break ;


            case 3:
                searcheleve(eleve) ;
                break ;


            case 4:
                affichalleleve(eleve) ;
                break ;


            case 5:
                printf("Aurevoir \n\n\n");
                break;

    
            default:
                printf("Saisie invalide \n\n");
                break;



        }


    } while(a != 5) ;


}





void menunote(Eleve eleve[]) {
    int a, b ;


    b = recheleve(eleve) ;



    if(b != -1) {



        do {
            printf("\n\n\n1. Ajouter une note \n");
            printf("2. Afficher la moyenne des interrogations \n");
            printf("3. Afficher la moyenne dans la matière \n");
            printf("4. Afficher la moyenne générale \n");
            printf("5. Quitter \n");


            

            printf("Tapez le numéro de l'action à effectuer \n");
            scanf("%d",&a);
            viderbuffer() ;


            switch (a) {
            
                case 1:
                    ajoutnote(eleve , b) ;
                    break;


                case 2:
                    affichmoyinterro(eleve , b) ;
                    break ;


                case 3:
                    affichmoymat(eleve , b) ;
                    break ;


                case 4:
                    affichmoygen(eleve , b) ;
                    break ;


                case 5:
                    printf("Aurevoir \n\n\n");
                    break ;


        
                default:
                    printf("Saisie invalide \n\n\n");
                    break;




            } 


        } while(a != 5) ;


    }



}





void menusupp(Eleve eleve[]) {
    
    int a, b ;

    do {

        printf("\n\n\n1. Supprimer un élève \n");
        printf("2. Supprimer tous les élèves \n");
        printf("3. Quitter \n\n\n");

        printf("Tapez le numéro de l'action à effectuer \n");
        scanf("%d",&a);
        viderbuffer() ;


        switch (a) {
        
            case 1:
                b = recheleve(eleve) ;
                if(b != -1) {
                    suppeleve(eleve , b) ;
                }
                break;


            case 2:
                suppalleleve(eleve) ;
                break ;


            case 3:
                printf("Aurevoir \n\n\n") ;
                break ;


            
            default:
                printf("Saisie invalide \n");
                break;



        }


    } while(a != 3) ;


}


        
        
        