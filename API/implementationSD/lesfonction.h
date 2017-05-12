


/*
    Fonction de creation d une liste de fonction
        Entree:
        Sortie: NULL
*/
LesFonctions *new_LesFonctions()
{return NULL;}//fin de la fonction





/*  
    Fonction qui ajout une fonction à la liste des fonction
     Entree:
            nom le nom de la fonction 
            nbrParametre le nombre de parametre 
            lv c'est la liste des varible 
            lic c st la liste des instance de variable 
            contenu c est le contenu de la fonction : la chaine à traiter
        Sortie:
            La liste avec l element ajoute
*/
LesFonctions *LesFonctions_ajouter(LesFonctions *lf,char *nom,int nbrParametre,LesVariables *lv, LesInstanceClasses *lic,char *contenu)
{
    LesFonctions *p = (LesFonctions *)malloc(sizeof(LesFonctions));
    p->contenu = new_Fonction(nom,nbrParametre,lv,lic,contenu);
    p->svt = lf;
    return p;//le retour de la liste 
}//fin de la fonction




/*
    Cette permet de chercher une fonction par son nom
        Entree: 
            lf la liste des fonction
            nom le nom recherhcer
        Sortie:
            1 trouve
            0 sinon
*/
int LesFonctions_chercherNom(LesFonctions *lf,char *nom)
{
    if(lf == NULL)
        return 0;
    LesFonctions *tmp = lf;
    while(tmp)
    {
        if(Fonction_CompareNom(tmp->contenu,nom))
            return 1;
        tmp = tmp->svt;
    }
    return 0;
}//fin de la fonction





/*
    Cette permet de chercher une fonction par son nom et son nombre de parametre
        Entree: 
            lf la liste des fonction
            nom le nom recherhcer
            nbr le nombre de parameter
        Sortie:
            1 trouve
            0 sinon
*/
int LesFonctions_chercher(LesFonctions *lf,char *nom,int nbr)
{
    if(lf == NULL)
        return 0;
    LesFonctions *tmp = lf;
    while(tmp)
    {
        if(Fonction_compare(tmp->contenu,nom,nbr))
            return 1;
        tmp = tmp->svt;
    }
    return 0;
}//fin de la fonction