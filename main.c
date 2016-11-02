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

void tirage_alea(int vect[], int nb_tirage, int MAX){

	int i = 0;

	for(i = 0; i < nb_tirage; i++){
		vect[i] = rand() % (MAX + 1); //+1 sinon MAX exclu
		//printf("%d ",vect[i]);
	}

	//return vect;
}

void tirage_loci_ambigu(int locus[], int taille_locus, int nb_loci_ambigu){

	int i = 0;
	int* pos_loci_ambigu = malloc((nb_loci_ambigu) * sizeof (int));
    pos_loci_ambigu = {0};

	for(i = 0; i < nb_loci_ambigu; i++){
        pos_loci_ambigu[i] = rand() % (taille_locus +1)
		locus[pos_loci_ambigu[i]] = 2;

		//virer les doublons eventuels
	}
    free(pos_loci_ambigu);
}

void verif_doublon(int vect1[], int vect2[], int taille_geno){

	int i = 0;
	int similaire = 0;

	for(i = 0; i < taille_geno; i++){

		if (vect1[i] == vect1[i]) similaire++;

	}

	if(similaire == taille_geno){
        tirage_alea(vect2, taille_geno, 2);
	}
	//afficherVect(vect1, taille_geno);
	//afficherVect(vect2, taille_geno);

}

void creation_geno(int vect[], int nb_indiv, int taille_geno, int nb_loci_ambigu){

    int i, j;

    int* genotype = malloc((taille_geno) * sizeof (int));


    for(i = 0; i <= nb_indiv; i++){
        genotype = {0};

        tirage_alea(genotype, taille_geno, 1);

        for(j = 0; j <= nb_indiv; j++){ //possibilite d optimiser pour eviter de comparer vect[i] avec lui meme
        verif_doublon(vect[j], genotype, taille_geno); //complexite de type taille_geno^3 (3eme boucle for
        // dans la fct), possibilite d optimiser en evitant une comparaison 2 a 2 mais plutot de type "diviser pour regner"
        }

        tirage_alea(pos_loci_ambigu, taille_geno);


        vect[i] = genotype;

        //printf("\nGenotype %d: ", i);
        //afficherVect(vect[i], taille_geno);
    }
    free(genotype);
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

    int nb_indiv = 12, taille_genotype = 10;
    int* liste_geno = malloc((nb_indiv) * sizeof (int));
    liste_geno = {0};

    creation_geno(liste_geno, nb_indiv, taille_genotype);
    afficherVect(liste_geno[1], taille_genotype);
    printf("\n");
    verif_doublon(liste_geno[1], liste_geno[1], taille_genotype);

    return 0;
}


