#ifndef CLASSE_H
#define CLASSE_H

#define MAX_ELEVE 100


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
    int coefficient ;
} Mathematiques ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
    int coefficient ;
} Pct ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
    int coefficient ;
} Français ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
    int coefficient ;
} Histgeo ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
    int coefficient ;
} Sport ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
    int coefficient ;
} Philosophie ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
    int coefficient ;
} Svt ;


typedef struct {
    double note_1 ;
    double note_2 ;
    double note_3 ;
    double note_4 ;
    int coefficient ;
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

void ajoutnote (Eleve eleve[]) ;

void affichalleleve (Eleve eleve[]) ;

void searcheleve (Eleve eleve[]) ;

void suppeleve(Eleve eleve[]) ;

void suppalleleve(Eleve eleve[]) ;

void affichmoyinterro(Eleve eleve[]) ;

void affichmoymat(Eleve eleve[]) ;

void affichmoygen(Eleve eleve[]) ;

void classer(Eleve eleve[]) ;

void affichnbreleve(Eleve eleve[]) ;

double moyinterro(Eleve eleve[]) ;

double moymat(Eleve eleve[]) ;

double moygen(Eleve eleve[] , int a) ;

int searchid(Eleve eleve[] , int a) ;

int compteleve(Eleve eleve[]) ;

int recheleve(Eleve eleve[]) ;

void viderbuffer(void) ;




















#endif