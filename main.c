#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Alias signature
typedef struct TypeChaine80 TypeChaine80;
typedef struct TypeCellule* TypePtrListe;
typedef struct TypeCellule TypeCellule;

//Alias corps
struct TypeChaine80{
    char chaineCaratere[80];
};

/*struct TypePtrListe{
    TypeCellule *tete;
};*/

struct TypeCellule{
    /*TypeChaine80 nom;
    char nom2[80];*/
    int info;
    TypeCellule *suivant;
};

TypePtrListe *initialisation()
{
    TypePtrListe *tete = malloc(sizeof(*TypePtrListe));
    TypeCellule *cellule1 = malloc(sizeof(*TypeCellule));

    if (tete == NULL || cellule1 == NULL)
    {
        return(1);
    }
    //strcpy(cellule1->nom2,"");
    cellule1->info = 0;
    cellule1->suivant = NULL;
    tete = cellule1;

    return tete;
}

void inserer_en_tete(TypePtrListe *tete, int info)
{
    /* Création du nouvel élément */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}


void insérer_liste_pos_k(TypeListe, info, position){
    TypePtrListe p_prec=NULL, p=, p_nouv;
    int i=1;

    if (p==)
}

int main()
{
    TypeListe tete=NULL, ptr2=NULL, ptr1=NULL;

    tete=(TypeListe)malloc(sizeof(TypeCellule));

    if (tete==NULL)exit(1);

    strcpy(tete->coucou,"Zoé");
    tete->suivant=NULL;
    tete->nombre=0;

    free(tete);

    /*TypeCellule cellule1, cellule2, cellule3;
    strcpy(cellule3.nom,"Zoe");
    cellule3.suivant=NULL;
    strcpy(cellule2.nom,"Marie");
    cellule2.suivant=&cellule3;*/
    cellule2.suivant=&cellule3;*/
    return 0;
}


