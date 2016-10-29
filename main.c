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
    TypeCell *suiv;
};

void affichier_erreur(){
        printf("Erreur d'allocation memoire");
}

void inserer_en_tete(TypePtrListe *adr_tete, int val)
{
    // Creation du nouvel element
    TypeListe p_nouv;

    if (liste == NULL || p_nouv == NULL)
    {
        affichier_erreur();
        return;
    }

    // Insertion de l'element au debut de la liste
    p_nouv = (TypeCell*)malloc(sizeof(TypeCell))
    p_nouv->info = val;
    p_nouv->suiv = *adr_tete;
    *adr_tete = p_nouv;
}


void inserer_pos_k(TypePtrListe *adr_tete, int val, int pos){
    TypePtrListe rec=NULL, p=*adr_tete;
    TypePTrListe p_nouv;
    int i=1;
    while(p!=NULL && i<k){
        prec=p;
        p=p->suiv;
        i++;
    }
    if (p==NULL){
        if(k!=i){
            affichier_erreur();
            return;
        }//sinon k==i, insertion en debut de liste
        p_nouv = (TypeCell*)malloc(sizeof(TypeCell));
        p_nouv->info = val;
        if(k==1){
            inserer_en_tete(adr_tete,val);
            return;
        }//sinon k>1, insertion en fin de liste
        p_nouv->suiv=NULL;
        p_prec->suiv=p_nouv;
        return;
    }//sinon insertion en milieu de liste
    p_nouv = (TypeCell*)malloc(sizeof(TypeCell));
    p_nouv->info = val;
    inserer_en_tete(&prec->suiv,val);
}

int main()
{
    TypeListe tete=NULL, ptr2=NULL, ptr1=NULL;

    tete=(TypeListe)malloc(sizeof(TypeCell));

    if (tete==NULL)exit(1);

    strcpy(tete->coucou,"Zoé");
    tete->suiv=NULL;
    tete->nombre=0;

    free(tete);

    /*TypeCell cellule1, cellule2, cellule3;
    strcpy(cellule3.nom,"Zoe");
    cellule3.suiv=NULL;
    strcpy(cellule2.nom,"Marie");
    cellule2.suiv=&cellule3;*/
    cellule2.suiv=&cellule3;*/
    return 0;
}


