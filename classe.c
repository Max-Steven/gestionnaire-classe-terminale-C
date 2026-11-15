#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "classe.h"





void viderbuffer(void) {
    int c ;
    while((c=getchar()) != '\n' && c != EOF) ;
}





int searchid(Eleve eleve[] , int a) {
    int b ;
    int c = 0 ;

    for(b = 0 ; b < MAX_ELEVE ; b++) {
        if(eleve[b].id == a && a != 0) {
            c = 1 ;
            break ;
        }

    }

return c ;

}





int compteleve(Eleve eleve[]) {
    int a ;
    int b = 0 ;

    for(a = 0 ; a < MAX_ELEVE ; a++) {
        if(eleve[a].id != 0) {
            b++ ;
        }

    }

    return b ;

}





void affichnbreleve (Eleve eleve[]) {
    int a = compteleve(eleve) ;

    printf("Il y a %d élèves enregistrés dans le système \n",a);

}





void ajouteleve(Eleve eleve[]) {
    int a ;
    char b[100] ;
    char c[200] ;

    int d = compteleve(eleve) ;


    if(d == MAX_ELEVE) {
        printf("Impossible d'ajouter un autre élève en raison d'un espace insuffisant \n");

    }

    else {

        printf("Veuillez entrer l'identifiant de l'élève \n");
        scanf("%d",&a) ;
        viderbuffer() ;

        if(searchid(eleve , a) == 1  || a == 0) {
            do {
                printf("Cet identifiant existe déjà ou ne peut pas être utilisé \n");
                printf("Veuillez entrer l'identifiant de l'élève \n");
                scanf("%d",&a) ;
                viderbuffer() ;

            } while(searchid(eleve , a) == 0) ;
        } 

        printf("Veuillez entrer le nom de l'élève \n");
        fgets(b , sizeof(b) , stdin) ;
        b[strcspn(b,"\n")] = '\0' ;

        printf("Veuillez entrer les prénoms de l'élève \n");
        fgets(c , sizeof(c) , stdin) ;
        c[strcspn(c,"\n")] = '\0' ;


        eleve[d].id = a ;
        strcpy(eleve[d].nom , b) ;
        strcpy(eleve[d].prenom , c) ;



    }



}





void suppeleve(Eleve eleve[]) {

    int a, b, d ;
    int c = compteleve(eleve) ;

    a = recheleve(eleve) ;

    eleve[a].id = 0 ;

    for(b = a+1 ; b < MAX_ELEVE ; b++) {
        eleve[b-1] = eleve[b] ;
    } 

    eleve[MAX_ELEVE - 1].id = 0 ;


    printf("La suppression a bien été effectuée \n");


}





void ajoutnote(Eleve eleve[]) {
    int a, e ;

    int f, g, h, i, j, k, l, m ;
    double f1, f2, f3, f4 ;
    double g1, g2, g3, g4 ;
    double h1, h2, h3, h4 ;
    double i1, i2, i3, i4 ;
    double j1, j2, j3, j4 ;
    double k1, k2, k3, k4 ;
    double l1, l2, l3, l4 ;
    double m1, m2, m3, m4 ;
    
    
    a = recheleve(eleve) ;


        

    printf("\n\n1. Mathématiques \n");
    printf("2. Physique, Chimie et Technologie \n");
    printf("3. Sciences de la Vie et de la Terre \n");
    printf("4. Français \n");
    printf("5. Histoire et Géographie \n");
    printf("6. Anglais \n");
    printf("7. Philosophie \n");
    printf("8. Sport \n\n\n");
        

    printf("Tapez le numéro de la matière dont vous souhaitez ajouter une note \n");
    printf("Pour quitter, tapez n'importe quelle autre touche \n");
    scanf("%d",&e);
    viderbuffer() ;


    switch (e) {

    
        case 1: /*mathematiques*/
            printf("1. Note de l'interrogation 1 \n");
            printf("2. Note de l'interrogation 2 \n");
            printf("3. Note du semi-devoir \n");
            printf("4. Note du devoir \n");

            printf("Tapez le numéro de l'action à effectuer \n");
            printf("Pour quitter, tapez n'importe quelle autre touche \n");
            scanf("%d",&f);
            viderbuffer() ;


            switch (f) {
            
                case 1:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&f1);
                    viderbuffer() ;

                    if(f1 < 0 || f1 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].mathematiques.note_1 = f1 ;
                    }
                
                    break;



                case 2:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&f2);
                    viderbuffer() ;

                    if(f2 < 0 || f2 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].mathematiques.note_2 = f2 ;
                    }
            
                    break;


                case 3:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&f3);
                    viderbuffer() ;

                    if(f3 < 0 || f3 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].mathematiques.note_3 = f3 ;
                    }
            
                    break;


                case 4:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&f4);
                    viderbuffer() ;

                    if(f4 < 0 || f4 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].mathematiques.note_4 = f4 ;
                    }
            
                    break;


                default:
                    printf("Aurevoir \n");
                    break ;


            }

            break ;
                    




        case 2: /*pct*/
            printf("1. Note de l'interrogation 1 \n");
            printf("2. Note de l'interrogation 2 \n");
            printf("3. Note du semi-devoir \n");
            printf("4. Note du devoir \n");

            printf("Tapez le numéro de l'action à effectuer \n");
            printf("Pour quitter, tapez n'importe quelle autre touche \n");
            scanf("%d",&g);
            viderbuffer() ;


            switch (g) {
            
                case 1:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&g1);
                    viderbuffer() ;

                    if(g1 < 0 || g1 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].pct.note_1 = g1 ;
                    }
                
                    break;



                case 2:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&g2);
                    viderbuffer() ;

                    if(g2 < 0 || g2 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].pct.note_2 = g2 ;
                    }
            
                    break;


                case 3:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&g3);
                    viderbuffer() ;

                    if(g3 < 0 || g3 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].pct.note_3 = g3 ;
                    }
            
                    break;


                case 4:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&g4);
                    viderbuffer() ;

                    if(g4 < 0 || g4 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].pct.note_4 = g4 ;
                    }
            
                    break;


                default:
                    printf("Aurevoir \n");
                    break ;


            }

            break ;






        case 3: /*svt*/
            printf("1. Note de l'interrogation 1 \n");
            printf("2. Note de l'interrogation 2 \n");
            printf("3. Note du semi-devoir \n");
            printf("4. Note du devoir \n");

            printf("Tapez le numéro de l'action à effectuer \n");
            printf("Pour quitter, tapez n'importe quelle autre touche \n");
            scanf("%d",&h);
            viderbuffer() ;


            switch (h) {
            
                case 1:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&h1);
                    viderbuffer() ;

                    if(h1 < 0 || h1 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].svt.note_1 = h1 ;
                    }
                
                    break;



                case 2:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&h2);
                    viderbuffer() ;

                    if(h2 < 0 || h2 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].svt.note_2 = h2 ;
                    }
            
                    break;


                case 3:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&h3);
                    viderbuffer() ;

                    if(h3 < 0 || h3 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].svt.note_3 = h3 ;
                    }
            
                    break;


                case 4:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&h4);
                    viderbuffer() ;

                    if(h4 < 0 || h4 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].svt.note_4 = h4 ;
                    }
            
                    break;


                default:
                    printf("Aurevoir \n");
                    break ;


            }

            break ;





        case 4: /*français*/
            printf("1. Note de l'interrogation 1 \n");
            printf("2. Note de l'interrogation 2 \n");
            printf("3. Note du semi-devoir \n");
            printf("4. Note du devoir \n");

            printf("Tapez le numéro de l'action à effectuer \n");
            printf("Pour quitter, tapez n'importe quelle autre touche \n");
            scanf("%d",&i);
            viderbuffer() ;


            switch (i) {
            
                case 1:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&i1);
                    viderbuffer() ;

                    if(i1 < 0 || i1 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].français.note_1 = i1 ;
                    }
                
                    break;



                case 2:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&i2);
                    viderbuffer() ;

                    if(i2 < 0 || i2 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].français.note_2 = i2 ;
                    }
            
                    break;


                case 3:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&i3);
                    viderbuffer() ;

                    if(i3 < 0 || i3 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].français.note_3 = i3 ;
                    }
            
                    break;


                case 4:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&i4);
                    viderbuffer() ;

                    if(i4 < 0 || i4 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].français.note_4 = i4 ;
                    }
            
                    break;


                default:
                    printf("Aurevoir \n");
                    break ;


            }

            break ;





        case 5: /*histgeo*/
            printf("1. Note de l'interrogation 1 \n");
            printf("2. Note de l'interrogation 2 \n");
            printf("3. Note du semi-devoir \n");
            printf("4. Note du devoir \n");

            printf("Tapez le numéro de l'action à effectuer \n");
            printf("Pour quitter, tapez n'importe quelle autre touche \n");
            scanf("%d",&j);
            viderbuffer() ;


            switch (j) {
            
                case 1:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&j1);
                    viderbuffer() ;

                    if(j1 < 0 || j1 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].histgeo.note_1 = j1 ;
                    }
                
                    break;



                case 2:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&j2);
                    viderbuffer() ;

                    if(j2 < 0 || j2 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].histgeo.note_2 = j2 ;
                    }
            
                    break;


                case 3:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&j3);
                    viderbuffer() ;

                    if(j3 < 0 || j3 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].histgeo.note_3 = j3 ;
                    }
            
                    break;


                case 4:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&j4);
                    viderbuffer() ;

                    if(j4 < 0 || j4 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].histgeo.note_4 = j4 ;
                    }
            
                    break;


                default:
                    printf("Aurevoir \n");
                    break ;


            }

            break ;





        case 6: /*anglais*/
            printf("1. Note de l'interrogation 1 \n");
            printf("2. Note de l'interrogation 2 \n");
            printf("3. Note du semi-devoir \n");
            printf("4. Note du devoir \n");

            printf("Tapez le numéro de l'action à effectuer \n");
            printf("Pour quitter, tapez n'importe quelle autre touche \n");
            scanf("%d",&k);
            viderbuffer() ;


            switch (k) {
            
                case 1:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&k1);
                    viderbuffer() ;

                    if(k1 < 0 || k1 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].anglais.note_1 = k1 ;
                    }
                
                    break;



                case 2:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&k2);
                    viderbuffer() ;

                    if(k2 < 0 || k2 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].anglais.note_2 = k2 ;
                    }
            
                    break;


                case 3:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&k3);
                    viderbuffer() ;

                    if(k3 < 0 || k3 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].anglais.note_3 = k3 ;
                    }
            
                    break;


                case 4:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&k4);
                    viderbuffer() ;

                    if(k4 < 0 || k4 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].anglais.note_4 = k4 ;
                    }
            
                    break;


                default:
                    printf("Aurevoir \n");
                    break ;


            }

            break ;





            
        case 7: /*philosophie*/
            printf("1. Note de l'interrogation 1 \n");
            printf("2. Note de l'interrogation 2 \n");
            printf("3. Note du semi-devoir \n");
            printf("4. Note du devoir \n");

            printf("Tapez le numéro de l'action à effectuer \n");
            printf("Pour quitter, tapez n'importe quelle autre touche \n");
            scanf("%d",&l);
            viderbuffer() ;


            switch (l) {
            
                case 1:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&l1);
                    viderbuffer() ;

                    if(l1 < 0 || l1 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].philosophie.note_1 = l1 ;
                    }
                
                    break;



                case 2:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&l2);
                    viderbuffer() ;

                    if(l2 < 0 || l2 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].philosophie.note_2 = l2 ;
                    }
            
                    break;


                case 3:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&l3);
                    viderbuffer() ;

                    if(l3 < 0 || l3 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].philosophie.note_3 = l3 ;
                    }
            
                    break;


                case 4:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&l4);
                    viderbuffer() ;

                    if(l4 < 0 || l4 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].philosophie.note_4 = l4 ;
                    }
            
                    break;


                default:
                    printf("Aurevoir \n");
                    break ;


            }

            break ;





        case 8: /*sport*/
            printf("1. Note de l'interrogation 1 \n");
            printf("2. Note de l'interrogation 2 \n");
            printf("3. Note du semi-devoir \n");
            printf("4. Note du devoir \n");

            printf("Tapez le numéro de l'action à effectuer \n");
            printf("Pour quitter, tapez n'importe quelle autre touche \n");
            scanf("%d",&m);
            viderbuffer() ;


            switch (m) {
            
                case 1:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&m1);
                    viderbuffer() ;

                    if(m1 < 0 || m1 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].sport.note_1 = m1 ;
                    }
                
                    break;



                case 2:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&m2);
                    viderbuffer() ;

                    if(m2 < 0 || m2 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].sport.note_2 = m2 ;
                    }
            
                    break;


                case 3:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&m3);
                    viderbuffer() ;

                    if(m3 < 0 || m3 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].sport.note_3 = m3 ;
                    }
            
                    break;


                case 4:
                    printf("Veuillez entrer la note \n");
                    scanf("%lf",&m4);
                    viderbuffer() ;

                    if(m4 < 0 || m4 > 20) {
                        printf("Vous ne pouvez pas ajouter cette note \n");
                    }

                    else {
                        eleve[a].sport.note_4 = m4 ;
                    }
            
                    break;


                default:
                    printf("Aurevoir \n");
                    break ;


            }

            break ;






        default: /*quitter*/
            printf("Aurevoir \n\n\n");
            break;




    }



    


}





void affichalleleve (Eleve eleve[]) {
    int a, b ;
    a = compteleve(eleve) ;

    if(a == 0) {
        printf("Il n'y a aucun élève à afficher \n");
    }


    else {

        for(b = 0 ; b < a ; b++) {

            printf("Identifiant : %d \n", eleve[b].id);
            printf("Nom et prénoms : %s %s \n\n\n", eleve[b].nom, eleve[b].prenom);


            printf("Notes \n\n");

            printf("Mathématiques \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].mathematiques.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].mathematiques.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].mathematiques.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].mathematiques.note_4);

            printf("Physique, Chimie et Technologie \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].pct.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].pct.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].pct.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].pct.note_4);

            printf("Sciences de la Vie et de la Terre \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].svt.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].svt.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].svt.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].svt.note_4);

            printf("Français \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].français.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].français.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].français.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].français.note_4);

            printf("Histoire et Géographie \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].histgeo.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].histgeo.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].histgeo.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].histgeo.note_4);

            printf("Anglais \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].anglais.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].anglais.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].anglais.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].anglais.note_4);

            printf("Philosophie \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].philosophie.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].philosophie.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].philosophie.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].philosophie.note_4);

            printf("Sport \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].sport.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].sport.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].sport.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].sport.note_4);

            printf("_______________________________________________________\n\n\n");

            
        }

    }


}





void suppalleleve(Eleve eleve[]) {
    int a, b ;
    char c[10] ;
    a = compteleve(eleve) ;

    printf("Souhaitez-vous vraiment supprimer tous les élèves enregistrés ? \n");
    printf("Répondez par \"Oui\" ou par \"Non\" \n");
    fgets(c,sizeof(c) ,stdin);
    c[strcspn(c,"\n")] = '\0' ;

    if(strcasecmp(c , "Oui") == 0) {
        for(b = 0 ; b < a ; b++) {
            eleve[b].id = 0 ;
        }

        printf("La suppression a bien été effectuée \n");
        
    }


    else {
        printf("Aucune suppression n'a été effectuée \n") ;
    }

    








}





void searcheleve(Eleve eleve[]) {
    int a, b, d ;
    int e = compteleve(eleve) ;
    char c[100] ;

    printf("1. Recherche par identifiant \n");
    printf("2. Recherche par nom \n\n");

    printf("Tapez le numéro de l'action à effectuer \n");
    printf("Tapez n'importe quelle autre touche pour quitter \n");
    scanf("%d",&a);
    viderbuffer() ;

    switch (a) {

        case 1:
            b = recheleve(eleve) ;
            printf("Identifiant : %d \n",eleve[b].id);
            printf("Nom et prénoms : %s %s \n\n\n",eleve[b].nom, eleve[b].prenom);


            printf("Notes \n\n");

            printf("Mathématiques \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].mathematiques.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].mathematiques.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].mathematiques.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].mathematiques.note_4);

            printf("Physique, Chimie et Technologie \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].pct.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].pct.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].pct.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].pct.note_4);

            printf("Sciences de la Vie et de la Terre \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].svt.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].svt.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].svt.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].svt.note_4);

            printf("Français \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].français.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].français.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].français.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].français.note_4);

            printf("Histoire et Géographie \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].histgeo.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].histgeo.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].histgeo.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].histgeo.note_4);

            printf("Anglais \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].anglais.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].anglais.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].anglais.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].anglais.note_4);

            printf("Philosophie \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].philosophie.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].philosophie.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].philosophie.note_3);
            printf("Note du devoir : %.2lf \n\n", eleve[b].philosophie.note_4);

            printf("Sport \n");
            printf("Note de l'interrogation 1 : %.2lf \n", eleve[b].sport.note_1);
            printf("Note de l'interrogation 2 : %.2lf \n", eleve[b].sport.note_2);
            printf("Note du semi-devoir : %.2lf \n", eleve[b].sport.note_3);
            printf("Note du devoir : %.2lf \n\n\n", eleve[b].sport.note_4);

            break;





        case 2:

            printf("Tapez le nom de l'élève que vous recherchez \n");
            fgets(c , sizeof(c) , stdin) ;
            c[strcspn(c,"\n")] = '\0' ;

            for(d = 0 ; d < e ; d++) {
                if(strcasecmp(c , eleve[d].nom) == 0) {
                    printf("Nom et prénoms : %s %s \n",eleve[d].nom, eleve[d].prenom);
                    printf("Identifiant : %d \n",eleve[d].id);
                    printf("______________________________________________\n\n");

                }
            }

            break ;

    


        default:

            printf("Aurevoir \n");
            break;


    }




}





int recheleve(Eleve eleve[]) {
    int a, b ;
    int c = compteleve(eleve) ;

    printf("Veuillez entrer l'identifiant de l'élève \n");
    scanf("%d",&a);
    viderbuffer() ;

    if(searchid(eleve , a) == 0) {
        do{
            printf("Cet identifiant n'existe pas \n");
            printf("Veuillez entrer l'identifiant de l'élève \n");
            scanf("%d",&a);
            viderbuffer() ;
            
        } while (searchid(eleve , a) == 0) ;

    }

    
    for(b = 0 ; b < c ; b++) {
        if(eleve[b].id == a) {
            printf("Identifiant : %d \n",eleve[a].id);
            printf("Nom et prénoms : %s %s \n", eleve[b].nom, eleve[b].prenom);
            break ;
        }
    }


    return b ;
    

}





double moyinterro(Eleve eleve[]) {
    int a, b ;
    double c ;
    a = recheleve(eleve) ;

    printf("1. Mathématiques \n");
    printf("2. Physique, Chimie et Technologie \n");
    printf("3. Sciences de la Vie et de la Terre \n");
    printf("4. Français \n");
    printf("5. Histoire et Géographie \n");
    printf("6. Anglais \n");
    printf("7. Philosophie \n");
    printf("8. Sport \n\n\n");
        

    printf("Tapez le numéro de la matière dont vous souhaitez avoir la moyenne interro \n");
    printf("Pour quitter, tapez n'importe quelle autre touche \n");
    scanf("%d",&b);
    viderbuffer() ;
    

    switch (b) {

        case 1:

            if((eleve[a].mathematiques.note_1 == 0) || (eleve[a].mathematiques.note_2 == 0)) {
                printf("Toutes les notes d'interrogation de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].mathematiques.note_1 + eleve[a].mathematiques.note_2 ) / 2 ;
                return c ;
            }

            break;



        case 2:

            if((eleve[a].pct.note_1 == 0) || (eleve[a].pct.note_2 == 0)) {
                printf("Toutes les notes d'interrogation de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].pct.note_1 + eleve[a].pct.note_2 ) / 2 ;
                
            }
            break;


        case 3:

            if((eleve[a].svt.note_1 == 0) || (eleve[a].svt.note_2 == 0)) {
                printf("Toutes les notes d'interrogation de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].svt.note_1 + eleve[a].svt.note_2 ) / 2 ;
                return c ;
            }

            break;


        case 4:

            if((eleve[a].français.note_1 == 0) || (eleve[a].français.note_2 == 0)) {
                printf("Toutes les notes d'interrogation de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].français.note_1 + eleve[a].français.note_2 ) / 2 ;
                return c ;
            }

            break;


        case 5:

            if((eleve[a].histgeo.note_1 == 0) || (eleve[a].histgeo.note_2 == 0)) {
                printf("Toutes les notes d'interrogation de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].histgeo.note_1 + eleve[a].histgeo.note_2 ) / 2 ;
                return c ;
            }

            break;


        case 6:

            if((eleve[a].anglais.note_1 == 0) || (eleve[a].anglais.note_2 == 0)) {
                printf("Toutes les notes d'interrogation de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].anglais.note_1 + eleve[a].anglais.note_2 ) / 2 ;
                return c ;
            }

            break;


        case 7:

            if((eleve[a].philosophie.note_1 == 0) || (eleve[a].philosophie.note_2 == 0)) {
                printf("Toutes les notes d'interrogation de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].philosophie.note_1 + eleve[a].philosophie.note_2 ) / 2 ;
                return c ;
            }

            break;



        case 8:

            if((eleve[a].sport.note_1 == 0) || (eleve[a].sport.note_2 == 0)) {
                printf("Toutes les notes d'interrogation de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].sport.note_1 + eleve[a].sport.note_2 ) / 2 ;
                return c ;
            }

            break;


        
        default:
            printf("Aurevoir \n\n\n");
            break;




    }

    return 0 ;

}





void affichmoyinterro(Eleve eleve[]) {
    double a ;
    a = moyinterro(eleve) ;

    if(a != 0) {
        printf("La moyenne des interrogations dans la matière pour cet élève est %.2lf", a) ;
    }

}





double moymat(Eleve eleve[]) {
    int a, b ;
    double c, d, e ;
    a = recheleve(eleve) ;

    printf("1. Mathématiques \n");
    printf("2. Physique, Chimie et Technologie \n");
    printf("3. Sciences de la Vie et de la Terre \n");
    printf("4. Français \n");
    printf("5. Histoire et Géographie \n");
    printf("6. Anglais \n");
    printf("7. Philosophie \n");
    printf("8. Sport \n\n\n");
        

    printf("Tapez le numéro de la matière dont vous souhaitez avoir la moyenne \n");
    printf("Pour quitter, tapez n'importe quelle autre touche \n");
    scanf("%d",&b);
    viderbuffer() ;
    

    switch (b) {

        case 1:

            if((eleve[a].mathematiques.note_1 == 0) || (eleve[a].mathematiques.note_2 == 0) || (eleve[a].mathematiques.note_3 == 0) || (eleve[a].mathematiques.note_4 == 0)) {
                printf("Toutes les notes de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].mathematiques.note_1 + eleve[a].mathematiques.note_2 ) / 2 ;
                d = (c + eleve[a].mathematiques.note_3) / 2 ;
                e = (d + eleve[a].mathematiques.note_4) / 2 ;
                return e ;
            }

            break;


        case 2:

            if((eleve[a].pct.note_1 == 0) || (eleve[a].pct.note_2 == 0) || (eleve[a].pct.note_3 == 0) || (eleve[a].pct.note_4 == 0)) {
                printf("Toutes les notes de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].pct.note_1 + eleve[a].pct.note_2 ) / 2 ;
                d = (c + eleve[a].pct.note_3) / 2 ;
                e = (d + eleve[a].pct.note_4) / 2 ;
                return e ;
            }

            break;


        case 3:

            if((eleve[a].svt.note_1 == 0) || (eleve[a].svt.note_2 == 0) || (eleve[a].svt.note_3 == 0) || (eleve[a].svt.note_4 == 0)) {
                printf("Toutes les notes de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].svt.note_1 + eleve[a].svt.note_2 ) / 2 ;
                d = (c + eleve[a].svt.note_3) / 2 ;
                e = (d + eleve[a].svt.note_4) / 2 ;
                return e ;
            }

            break;


        case 4:

            if((eleve[a].français.note_1 == 0) || (eleve[a].français.note_2 == 0) || (eleve[a].français.note_3 == 0) || (eleve[a].français.note_4 == 0)) {
                printf("Toutes les notes de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].français.note_1 + eleve[a].français.note_2 ) / 2 ;
                d = (c + eleve[a].français.note_3) / 2 ;
                e = (d + eleve[a].français.note_4) / 2 ;
                return e ;
            }

            break;


        case 5:

            if((eleve[a].histgeo.note_1 == 0) || (eleve[a].histgeo.note_2 == 0) || (eleve[a].histgeo.note_3 == 0) || (eleve[a].histgeo.note_4 == 0)) {
                printf("Toutes les notes de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].histgeo.note_1 + eleve[a].histgeo.note_2 ) / 2 ;
                d = (c + eleve[a].histgeo.note_3) / 2 ;
                e = (d + eleve[a].histgeo.note_4) / 2 ;
                return e ;
            }

            break;


        case 6:

            if((eleve[a].anglais.note_1 == 0) || (eleve[a].anglais.note_2 == 0) || (eleve[a].anglais.note_3 == 0) || (eleve[a].anglais.note_4 == 0)) {
                printf("Toutes les notes de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].anglais.note_1 + eleve[a].anglais.note_2 ) / 2 ;
                d = (c + eleve[a].anglais.note_3) / 2 ;
                e = (d + eleve[a].anglais.note_4) / 2 ;
                return e ;
            }

            break;


        case 7:

            if((eleve[a].philosophie.note_1 == 0) || (eleve[a].philosophie.note_2 == 0) || (eleve[a].philosophie.note_3 == 0) || (eleve[a].philosophie.note_4 == 0)) {
                printf("Toutes les notes de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].philosophie.note_1 + eleve[a].philosophie.note_2 ) / 2 ;
                d = (c + eleve[a].philosophie.note_3) / 2 ;
                e = (d + eleve[a].philosophie.note_4) / 2 ;
                return e ;
            }

            break;


        case 8:

            if((eleve[a].sport.note_1 == 0) || (eleve[a].sport.note_2 == 0) || (eleve[a].sport.note_3 == 0) || (eleve[a].sport.note_4 == 0)) {
                printf("Toutes les notes de cet elève n'ont pas encore été enregistrées \n");
            }

            else {
                c = ( eleve[a].sport.note_1 + eleve[a].sport.note_2 ) / 2 ;
                d = (c + eleve[a].sport.note_3) / 2 ;
                e = (d + eleve[a].sport.note_4) / 2 ;
                return e ;
            }

            break;


        default:
            printf("Aurevoir \n\n\n");
            break ;


    }



    return 0 ;



}





void affichmoymat(Eleve eleve[]) {
    double a ;
    a = moymat(eleve) ;

    if(a != 0) {
        printf("La moyenne de cet élève dans la matiére est : %.2lf \n " ,a);
    }

}





double moygen(Eleve eleve[] , int a) {

    int j ;
    double k, l, m, n, o, p, q, r ;
    double s, t, u, v ;

    double x ;

    int b = 0 ;
    int c = 0 ;
    int d = 0 ;
    int e = 0 ;
    int f = 0 ;
    int g = 0 ;
    int h = 0 ;
    int i = 0 ;
    

    
    if((eleve[a].mathematiques.note_1 == 0) || (eleve[a].mathematiques.note_2 == 0) || (eleve[a].mathematiques.note_3 == 0) || (eleve[a].mathematiques.note_4 == 0)) {
        b++ ;
    }

    if((eleve[a].pct.note_1 == 0) || (eleve[a].pct.note_2 == 0) || (eleve[a].pct.note_3 == 0) || (eleve[a].pct.note_4 == 0)) {
        c++ ;
    }

    if((eleve[a].svt.note_1 == 0) || (eleve[a].svt.note_2 == 0) || (eleve[a].svt.note_3 == 0) || (eleve[a].svt.note_4 == 0)) {
        d++ ;
    }

    if((eleve[a].français.note_1 == 0) || (eleve[a].français.note_2 == 0) || (eleve[a].français.note_3 == 0) || (eleve[a].français.note_4 == 0)) {
        e++ ;
    }

    if((eleve[a].histgeo.note_1 == 0) || (eleve[a].histgeo.note_2 == 0) || (eleve[a].histgeo.note_3 == 0) || (eleve[a].histgeo.note_4 == 0)) {
        f++ ;
    }

    if((eleve[a].anglais.note_1 == 0) || (eleve[a].anglais.note_2 == 0) || (eleve[a].anglais.note_3 == 0) || (eleve[a].anglais.note_4 == 0)) {
        g++ ;
    }

    if((eleve[a].philosophie.note_1 == 0) || (eleve[a].philosophie.note_2 == 0) || (eleve[a].philosophie.note_3 == 0) || (eleve[a].philosophie.note_4 == 0)) {
        h++ ;
    }

    if((eleve[a].sport.note_1 == 0) || (eleve[a].sport.note_2 == 0) || (eleve[a].sport.note_3 == 0) || (eleve[a].sport.note_4 == 0)) {
        i++ ;
    }





    j = b + c + d + e + f + g + h + i ;




    if(j == 0) {

        k = ( ( ( ( ( ( (eleve[a].mathematiques.note_1 + eleve[a].mathematiques.note_2) / 2 ) + eleve[a].mathematiques.note_3 ) / 2) + eleve[a].mathematiques.note_4 ) / 2 ) ) ;

        l = ( ( ( ( ( ( (eleve[a].pct.note_1 + eleve[a].pct.note_2) / 2 ) + eleve[a].pct.note_3 ) / 2) + eleve[a].pct.note_4 ) / 2 ) ) ;

        m = ( ( ( ( ( ( (eleve[a].svt.note_1 + eleve[a].svt.note_2) / 2 ) + eleve[a].svt.note_3 ) / 2) + eleve[a].svt.note_4 ) / 2 ) ) ;

        n = ( ( ( ( ( ( (eleve[a].français.note_1 + eleve[a].français.note_2) / 2 ) + eleve[a].français.note_3 ) / 2) + eleve[a].français.note_4 ) / 2 ) ) ;

        o = ( ( ( ( ( ( (eleve[a].histgeo.note_1 + eleve[a].histgeo.note_2) / 2 ) + eleve[a].histgeo.note_3 ) / 2) + eleve[a].histgeo.note_4 ) / 2 ) ) ;

        p = ( ( ( ( ( ( (eleve[a].anglais.note_1 + eleve[a].anglais.note_2) / 2 ) + eleve[a].anglais.note_3 ) / 2) + eleve[a].anglais.note_4 ) / 2 ) ) ;

        q = ( ( ( ( ( ( (eleve[a].philosophie.note_1 + eleve[a].philosophie.note_2) / 2 ) + eleve[a].philosophie.note_3 ) / 2) + eleve[a].philosophie.note_4 ) / 2 ) ) ;

        r = ( ( ( ( ( ( (eleve[a].sport.note_1 + eleve[a].sport.note_2) / 2 ) + eleve[a].sport.note_3 ) / 2) + eleve[a].sport.note_4 ) / 2 ) ) ;



        s = k*eleve[a].mathematiques.coefficient + l*eleve[a].pct.coefficient + m*eleve[a].svt.coefficient + n*eleve[a].français.coefficient ;
        t = o*eleve[a].histgeo.coefficient + p*eleve[a].anglais.coefficient + q*eleve[a].philosophie.coefficient + r*eleve[a].sport.coefficient ;

        u = eleve[a].mathematiques.coefficient + eleve[a].pct.coefficient + eleve[a].svt.coefficient + eleve[a].français.coefficient ;
        v = eleve[a].histgeo.coefficient + eleve[a].anglais.coefficient + eleve[a].philosophie.coefficient + eleve[a].sport.coefficient ;

        x = ( (s + t) / (u + v) ) ;



        return x ;



    }


    return 0 ;


}





void affichmoygen(Eleve eleve[]) {

    double a ;
    int b ;

    b = recheleve(eleve) ;

    a = moygen(eleve , b) ;

    if(a != 0) {
        printf("La moyenne générale de cet élève est %.2lf \n", a);
    }

    else {
        printf("Toutes les notes de cet élève n'ont pas encore été enregistrées \n\n");
    }


}





void classer(Eleve eleve[]) {
    int a, c, e, f ;
    int max ;
    int d = 0 ;
    int b = 0 ;

    Eleve classe[MAX_ELEVE] ;
    Eleve bon ;
    

    for(a = 0 ; a < MAX_ELEVE ; a++) {
        if(moygen(eleve , a) == 0) {
            b++ ;
        }
    }


    if(b >= 1) {
        printf("Les notes de tous les élèves n'ont pas encore été enregistrées \n");
    }



    else {

        for(c = 0 ; c < MAX_ELEVE ; c++) {
            classe[c] = eleve[c] ;

        }


        for(d = 0 ; d < MAX_ELEVE-1 ; d++) {

            max = d ;

            for(e = d+1 ; e < MAX_ELEVE ; e++) {
                if(moygen(classe , e) >= moygen(classe , max)) {
                    max = e ;
                }
            }

            bon = classe[d] ;
            classe[d] = classe[max] ;
            classe[max] = bon ;

        }


        printf("Classement des élèves \n\n\n");

        for(f = 0 ; f < MAX_ELEVE ; f++) {
            printf("Nom et prénoms : %s %s \n", classe[f].nom, classe[f].prenom);
            printf("Moyenne générale : %.2lf \n", moygen(classe , f));
            printf("Rang : %d \n\n", f+1);

        }



    }     

}

























































































