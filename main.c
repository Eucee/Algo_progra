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
/*
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
    TypePtrListe p_nouv;
    p_nouv=creation_elem(val);
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

    TypePtrListe p = *adr_liste;
    *adr_liste = p->suiv;
    free(p);
}

void inference_haplotype(int genotype[], int nb_iter_max, int seuil){

    initialiser_freq_haplo(haplotype1[], nb_haplo1);
    initialiser_freq_haplo(haplotype2[], nb_haplo2);
    proba_geno(genotype[]);

    //initialisation des variables locales
    int convergence = 0, nb_etapes = 0, log_likehood = 0, freq_prec = 0, freq = 0, proba_preq = 0, proba = 0;
    int log_like_prec = valeur_min; //valeur min a calculer

    while(!convergence && nb_etapes <= nb_iter_max){
        nb_etapes++;
        maximisation();
        log_likehood = estimation_exp();
        convergence = (log_likehood - log_like_prec) < seuil;

        if(!convergence){
        log_like_prec = log_likehood;
        freq_prec =  freq;
        proba_prec = proba;
        }
    }
}

void initialiser_freq_haplo(int happlo[], int nb_haplo){

    int i;

    for (i = 0; i < nb_haplo; i++){
        freq[i] = 1 / nb_haplo;
        freq_prec[i] = freq[i];
    }
}

void proba_geno(int genotype[]){

    int i, f1, f2;

    for (i = 0; i < nb_geno; i++){

        for (i = 0; i < nb_haplo; i++){
            f1 = freq1[i];
            f2 = freq2[i];
            if(haplo1 == haplo2) p_part = f1^2;
            //sinon
            p_part = 2 * f1 * f2;
        }
    }
}

void maximisation(int genotype[], int nb_ind){

    for (i = 0; i < nb_haplo1; i++){

        int freq = 0;

        for (i = 0; i < nb_haplo; i++){
            contrib = (freq_prec_h1[i] * freq_preq_h2[i] * nb_indiv_geno[i]) / (prob_prec[i] * nb_ind)
            freq += contrib;
    }
}*/

int tirage_alea(int vect[], int nb_tirage, int MAX){

	int i = 0;

	for(i=0; i<nb_tirage; i++){
		vect[i] = rand() % MAX; //tirage entre 0 et max exclu
		//printf("%d ",vect[i]);
	}

	return vect;
}

void afficherVect(int v[], int taille){

    int i;

    for (i = 0 ; i < taille ; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

/****************************************CORPS****************************************/

int main()
{
    srand(time(NULL)); // initialisation de rand

    int liste_geno[12], i;
    int* liste_geno=malloc((nb_indiv)*sizeof (int));

    for(i = 0; i <= 12; i++){
        int taille_geno = 10;
        int* genotype=malloc((taille_geno)*sizeof (int));
        tirage_alea(genotype, 10, 2);
        printf("\nGenotype %d: ", i);
        afficherVect(genotype, 10);
    }

    return 0;
}


