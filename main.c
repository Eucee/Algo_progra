#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**************************************DEFINITION******************************************/

//Alias
typedef struct TypeCell* TypePtrListe;

//Fonction
void afficher_erreur;
void inserer_en_tete(TypePtrListe *adr_tete, int val);
void inserer_pos_k(TypePtrListe *adr_tete, int val, int pos);


/**************************************FONCTIONS**************************************/

//Alias
struct TypeChaine80{
    char chaineCaratere[80];
};

struct TypeCell{
    int info;
    TypeCell *suiv;
};



//Fonctions

void afficher_erreur(){
        printf("Erreur d'allocation memoire");
}


void inserer_en_tete(TypePtrListe *adr_tete, int val)
{
    TypePtrListe p_nouv;
    if (adr_tete == NULL || p_nouv == NULL)
    {
        afficher_erreur();
        return;
    }

    // creation du nouvel element
    p_nouv = (TypeCell*) malloc(sizeof(TypeCell))
    p_nouv -> info = val;
    // insertion de l'element au debut de la liste
    p_nouv -> suiv = *adr_tete;
    *adr_tete = p_nouv;
}

void creation_elem(TypePtrListe *elem, int val){
    elem = (TypeCell*) malloc (sizeof(TypeCell));
    elem -> info = val;
    return elem;
}

void inserer_pos_k(TypePtrListe *adr_tete, int val, int pos){
    TypePtrListe rec = NULL, p = *adr_tete;
    TypePTrListe p_nouv;
    int i = 1;
    while(p != NULL && i < k){
        prec = p;
        p = p -> suiv;
        i++;
    }
    if (p == NULL){
        if(k != i){
            afficher_erreur();
            return;
        }//sinon k==i, insertion en debut de liste
        creation_elem(&p_nouv,val);
        if(k == 1){
            inserer_en_tete(adr_tete,val);
            return;
        }//sinon k>1, insertion en fin de liste
        p_nouv -> suiv = NULL;
        p_prec -> suiv = p_nouv;
        return;
    }//sinon insertion en milieu de liste
    creation_elem(&p_nouv,val);
    inserer_en_tete(&prec -> suiv, val);
}


void afficherListe(TypePtrListe *adr_tete)
{
    if (adr_tete == NULL)
    {
        afficher_erreur();
        return;
    }
    TypePtrListe p = *adr_tete;

    while (p != NULL)
    {
        printf("%d -> ", p->info);
        p = p->suiv;
    }
    printf("NULL\n");
}

/****************************************CORPS****************************************/

int main()
{
    return 0;
}


