#ifndef CLASSE_H
#define CLASSE_H

#define MAX_ELEVE 100

#define COEFF_MATH 6
#define COEFF_PCT 5
#define COEFF_SVT 2
#define COEFF_FRANCAIS 2
#define COEFF_HISTGEO 2
#define COEFF_ANGLAIS 2
#define COEFF_PHILOSOPHIE 2
#define COEFF_SPORT 1


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
} Mathematiques ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
} Pct ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
} Français ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
} Histgeo ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
} Sport ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
} Philosophie ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
} Svt ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
} Anglais ;





typedef struct {
    int id ;
    char nom[100] ;
    char prenom[200] ;

    Anglais anglais ;
    Mathematiques mathematiques ;
    Svt svt ;
    Sport sport ;
    Pct pct ;
    Français français ;
    Philosophie philosophie ;
    Histgeo histgeo ;

} Eleve ;




void ajouteleve (Eleve eleve[]) ;

void ajoutnote (Eleve eleve[] , int a) ;   /*utilise rech*/

void affichalleleve (Eleve eleve[]) ;

void searcheleve (Eleve eleve[]) ;

void suppeleve(Eleve eleve[] , int a) ;  /*utilise rech*/

void suppalleleve(Eleve eleve[]) ;

void affichmoyinterro(Eleve eleve[] , int b) ;

void affichmoymat(Eleve eleve[] , int b) ;

void affichmoygen(Eleve eleve[] , int b) ;

void classer(Eleve eleve[]) ;

void affichnbreleve(Eleve eleve[]) ;

double moyinterro(Eleve eleve[] , int a) ;  /*utilise rech*/

double moymat(Eleve eleve[] , int a) ;   /*utilise rech*/

double moygen(Eleve eleve[] , int a) ;  /*utilise rech*/

int searchid(Eleve eleve[] , int a) ;

int compteleve(Eleve eleve[]) ;

int recheleve(Eleve eleve[]) ;

void viderbuffer(void) ;




















#endif