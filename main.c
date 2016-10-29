#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Alias signature
typedef struct TypeChaine80 TypeChaine80;
typedef struct TypeCell* TypePtrListe;
typedef struct TypeCell TypeCell;

//Alias corps
struct TypeChaine80{
    char chaineCaratere[80];
};

/*struct TypePtrListe{
    TypeCell *tete;
};*/

struct TypeCell{
    /*TypeChaine80 nom;
    char nom2[80];*/
    int info;
    TypeCell *suivant;
};

void affichier_erreur(){
        printf("Erreur d'allocation memoire");
        return;
}

void inserer_en_tete(TypePtrListe *adr_tete, int val)
{
    // Creation du nouvel element
    TypeListe p_nouv;

    if (liste == NULL || p_nouv == NULL)
    {
        affichier_erreur();
    }

    // Insertion de l'element au debut de la liste
    p_nouv = (TypeCell*)malloc(sizeof(TypeCell))
    p_nouv->info = val;
    p_nouv->suivant = *adr_tete;
    *adr_tete = p_nouv;
}


void inserer_pos_k(TypePtrListe *adr_tete, int val, int pos){
    TypePtrListe p_prec=NULL, p=*adr_tete;
    TypeListe p_nouv = (TypeCell*)malloc(sizeof(TypeCell));
    p_nouv->info = val;
    int i=1;
    while(p!=NULL && i<k){
        prec=p;
        p=p->suivant;
        i++;
    }
    if (p==NULL){
        if(k!=i){
            free(p_nouv);
            affichier_erreur();
        }
        if(k==1){
            inserer_en_tete(adr_tete,val);
        return;
        }

    }
}

int main()
{
    TypeListe tete=NULL, ptr2=NULL, ptr1=NULL;

    tete=(TypeListe)malloc(sizeof(TypeCell));

    if (tete==NULL)exit(1);

    strcpy(tete->coucou,"Zoé");
    tete->suivant=NULL;
    tete->nombre=0;

    free(tete);

    /*TypeCell cellule1, cellule2, cellule3;
    strcpy(cellule3.nom,"Zoe");
    cellule3.suivant=NULL;
    strcpy(cellule2.nom,"Marie");
    cellule2.suivant=&cellule3;*/
    cellule2.suivant=&cellule3;*/
    return 0;
}


