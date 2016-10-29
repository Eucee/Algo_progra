#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**************************************DEFINITION******************************************/

//Alias
typedef struct TypeCell* TypePtrListe;

//Fonction
void afficher_erreur();
TypePtrListe *creation_elem(int val);
void afficherListe(TypePtrListe *adr_tete);
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

void afficher_erreur(char typeErreur){
    printf("Erreur: ");
    switch(typeErreur){
        case 'M':
            printf("allocation memoire\n");
            break;
        case 'L':
            printf("liste vide\n");
            break;
        case 'P':
            printf("position erronee\n");
            break;
    }
}


creation_elem(int val){
TypePtrListe *elem = (TypeCell*) malloc (sizeof(TypeCell));
    elem -> info = val;
    return elem;
}


void afficherListe(TypePtrListe *adr_tete){
    if (adr_tete == NULL)
    {
        afficher_erreur('L');
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


void inserer_en_tete(TypePtrListe *adr_tete, int val){

    //verification d'existence de liste
    if (adr_tete == NULL || p_nouv == NULL)
    {
        afficher_erreur('M');
        return;
    }

    // creation du nouvel element
    TypePtrListe p_nouv = (TypeCell*) malloc(sizeof(TypeCell))
    p_nouv -> info = val;
    // insertion de l'element au debut de la liste
    p_nouv -> suiv = *adr_tete;
    *adr_tete = p_nouv;
}


void inserer_pos_k(TypePtrListe *adr_tete, int val, int pos){

    //verification d'existence de liste
    if (adr_tete == NULL || p_nouv == NULL)
    {
        afficher_erreur('M');
        return;
    }

    TypePtrListe prec = NULL, p = *adr_tete;
    int i = 1;

    while(p != NULL && i < k){
        prec = p;
        p = p -> suiv;
        i++;
    }
    if (p == NULL){
        if(k != i){
            afficher_erreur('P');
            return;
        }//sinon k==i, insertion en debut de liste
        creation_elem(val);
        if(k == 1){
            inserer_en_tete(adr_tete,val);
            return;
        }//sinon k>1, insertion en fin de liste
        TypePTrListe p_nouv;
        p_nouv -> suiv = NULL;
        p_prec -> suiv = p_nouv;
        return;
    }//sinon insertion en milieu de liste
    creation_elem(val);
    inserer_en_tete(&prec -> suiv, val);
}

/****************************************CORPS****************************************/

int main()
{
    return 0;
}


