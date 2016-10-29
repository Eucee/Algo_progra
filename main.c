#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**************************************DEFINITION******************************************/

//Alias
typedef struct TypeCell* TypePtrListe;
typedef struct TypeCell TypeCell;

//Fonction
void afficher_erreur(char typeErreur);
TypePtrListe *creation_elem(int val);
void afficherListe(TypePtrListe *adr_liste);
void inserer_en_tete(TypePtrListe *adr_liste, int val);
void inserer_pos_k(TypePtrListe *adr_liste, int val, int pos);
void supprimer_en_tete(TypePtrListe *adr_liste);


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


TypePtrListe *creation_elem(int val){
TypePtrListe cell = (TypeCell*) malloc(sizeof(TypeCell));
    cell->info = val;

    if(cell == NULL){
    afficher_erreur('M');
    return;
    }

    return cell;
}


void afficherListe(TypePtrListe *adr_liste){
    if (adr_liste == NULL)
    {
        afficher_erreur('L');
        return;
    }
    TypePtrListe p = *adr_liste;

    while (p != NULL)
    {
        printf("%d -> ", p->info);
        p = p->suiv;
    }
    printf("NULL\n");
}


void inserer_en_tete(TypePtrListe *adr_liste, int val){

    // creation du nouvel element
    TypePtrListe p_nouv = (TypeCell*) malloc(sizeof(TypeCell));
    p_nouv -> info = val;
    // insertion de l'element au debut de la liste
    p_nouv -> suiv = *adr_liste;
    *adr_liste = p_nouv;
}


void inserer_pos_k(TypePtrListe *adr_liste, int val, int pos){

    //verification d'existence de liste
    if (adr_liste == NULL || p_nouv == NULL)
    {
        afficher_erreur('L');
        return;
    }

    TypePtrListe prec = NULL, p = *adr_liste, p_nouv;
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
        p_nouv=creation_elem(val);
        if(k == 1){
            inserer_en_tete(adr_liste,val);
            return;
        }//sinon k>1, insertion en fin de liste
        p_nouv -> suiv = NULL;
        p_prec -> suiv = p_nouv;
        return;
    }//sinon insertion en milieu de liste
    p_nouv=creation_elem(val);
    inserer_en_tete(&prec -> suiv, val);
}

void supprimer_en_tete(TypePtrListe *adr_liste){

    if (adr_liste == NULL)
    {
        afficher_erreur('L');
        return;
    }

    TypePtrListe *p = *adr_liste;
    *adr_liste = p->suivant;
    free(p);
}

/****************************************CORPS****************************************/

int main()
{
    TypePtrListe *maListe = malloc(sizeof(TypePtrListe));

    inserer_en_tete(maListe, 4);
    inserr_en_tete(maListe, 8);
    inserer_en_tete(maListe, 15);
    supprimer_en_tete(maListe);

    afficherListe(maListe);

    return 0;
}


