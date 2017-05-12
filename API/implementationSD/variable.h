


/*

    Cette fonction cree une nouvelle variable
        Entree:
            type le type de la varialbe
            nom Le nom de la variable
            contenu la valeur de la varaiable
        Sortie:
            Une Variable cree 
*/
Variable *new_Variable(int type ,char *nom,char *contenu)
{
    Variable *v =(Variable *)malloc(sizeof(Variable));//allocation
    if(!v) 
        return NULL;
    v->type = type;
    //copiage du nom
    v->nom = (char *)malloc(strlen(nom));
    strcpy(v->nom,nom);
    if(contenu == NULL)//si lecontenu n y est pas
            v->contenu = NULL;
    v->contenu = (char *)malloc(strlen(contenu));
    strcpy(v->contenu,contenu);
    return v;//le retour de la variable
}//fin de la fonction




/*
    Cette fonction compare le nom d une variable avec un autre nom
        ENtree:
            v la varialbe
            nom le nom rechercher
        Sortie:
            1 vrai 
            0 faux
*/
int Variable_compareNom(Variable *v,char *nom)
{
    if(v == NULL)
        return 0;//si la variable n existe pas 
    return strcmp(v->nom,nom) == 0;//retourn 
}//fin de la fonction



/*
    Cette fonction verifie si une variable et de type var 
        Entree:
            v la variable
        Sortie :
            1 vrai
            0 faux
*/
int Variable_estVar(Variable *v)
{
    if(v == NULL)
        return 0;//si la variable n'existe pas 
    return v->type == 0;//le retour finale
}//fin fonction




/*
    Cette fonction verifie si une variable et de type str 
        Entree:
            v la variable
        Sortie :
            1 vrai
            0 faux
*/
int Variable_estStr(Variable *v)
{
    if(v == NULL)
        return 0;//si la variable n'existe pas 
    return v->type == 1;//le retour finale
}//fin fonction





/*
    Cette fonction retourn la valeur d une variabe 
        Entree :
            v  la variable 
        Sortie:
            La chaine du contenu 
*/
char *Variable_valeur(Variable *v)
{
    if(v == NULL)
        return NULL;
    return v->contenu;
}//fin de la fonction




/*
    Cette fonction permet de modifier le contenu d une variable
        ENtree:
            contenu : le nouveau contenu
        Sortie:
            la variable avec màj
*/
Variable *Variable_modifier(Variable *v,char *contenu)
{
    if(v == NULL)
        return NULL;//si la variabe n exste pas
    if(Variable_valeur(v) == NULL)//le cas ou le contenu de la variable et null alors on a pas besoin de faire free
        {
            v->contenu = (char *)malloc(strlen(contenu));
            strcpy(v->contenu,contenu);
        }
        free(v->contenu);
        v->contenu = NULL;
        v->contenu = (char *)malloc(strlen(contenu));
        strcpy(v->contenu,contenu);
        return v;//on retourn la variable modifier
}//fin de la fonction