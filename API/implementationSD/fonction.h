



/*
    Cette fonction qui une nouvelle fonction 
        Entree:
            nom le nom de la fonction 
            nbrParametre le nombre de parametre 
            lv c'est la liste des varible 
            lic c st la liste des instance de variable 
            contenu c est le contenu de la fonction : la chaine à traiter
        Sortie:
*/
Fonction *new_Fonction(char *nom,int nbrParametre,LesVariables *lv,LesInstanceClasses *lic,char *contenu)
{
    Fonction *fct = (Fonction *)malloc(sizeof(Fonction));//l allocation 
    if(fct == NULL)
        return NULL;//le cas d une erreur dans l allocation
        // l'evaluation
    fct->typeRetour = -1;//aff
    fct->nom = (char *)malloc(sizeof(nom));
    fct->contenu = (char *)malloc(sizeof(contenu));
    strcpy(fct->nom,nom);//aff
    strcpy(fct->contenu,contenu);//aff
    fct->contenuV = lv;//aff
    fct->contenuC = lic;//aff
    fct->contenuR = NULL;//aff
    fct->nomR = NULL;//aff
    fct->nbrParametres = nbrParametre;//aff
    return fct;//le retour finale
}//fin de la fonction




/*
    Cette fonction permet de comparer deux nom de fonction 
        Entree : 
            fct la fonction 
            nom le nom avec quoi on va comparer  
        Sortie:
            1 vrai 
            0 faux
*/
int Fonction_CompareNom(Fonction *fct,char *nom)
{
    if(fct == NULL)
        return 0;//si le poitneur est NULL
    return strcmp(fct->nom,nom) == 0;//le retour
}//fin de la fonction



/*
    Cette fonction compare deux fonctions
        Entree:
            nom le nom de l autre fonction
            nbr le nombre de parametre
        Sortie:
            1 vrai 
            0 faux
*/
int Fonction_compare(Fonction *fct,char *nom,int nbr)
{
    if(fct == NULL)
        return 0;//le cas du pointeur vide
    return Fonction_CompareNom(fct,nom) && fct->nbrParametres == nbr;//lec retour
}//fin de la fonction