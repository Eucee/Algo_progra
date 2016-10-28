#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Alias signature
typedef struct TypeChaine80 TypeChaine80;
typedef struct TypeCellule* TypeListe;
typedef struct TypeCellule TypeCellule;

//Alias corps
struct TypeChaine80{
    char chaineCaratere[80];
};

/*struct TypeListe{
    TypeCellule *tete;
};*/

struct TypeCellule{
    TypeChaine80 nom;
    char coucou[80];
    int nombre;
    TypeCellule *suivant;
};

int main()

{
    TypeListe ptr3=NULL, ptr2=NULL, ptr1=NULL;
    ptr3=malloc(sizeof(TypeCellule));
    if (ptr3==NULL)exit(1);
    strcpy(ptr3->coucou,"Zoé");
    ptr3->suivant=NULL;
    ptr3->nombre=13;

//printf("char : %d octets\n", sizeof(TypeListe));
    /*int coucou;
    coucou=sizeof(TypeCellule);
    printf(coucou);
    ;



    printf("Coucou");
    TypeCellule cellule1, cellule2, cellule3;
    strcpy(cellule3.nom,"Zoe");
    cellule3.suivant=NULL;
    strcpy(cellule2.nom,"Marie");
    cellule2.suivant=&cellule3;*/
    return 0;
}


