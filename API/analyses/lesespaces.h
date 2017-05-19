



/*
    Cette fonction cree une nouvelle liste des espaces
        Entree:
        Sortie:
*/
LesEspaces *new_LesEspaces()
{return NULL;}//fin de la fonction


/*
    Cette fonction ajout un nv espace à la liste des
    espaces
    Entree:
        nom le nom de LesEspaces
        user celui qui a cree ng
    Sortie:
        LesEspaces avec l emlement bien ajouter
*/
LesEspaces *LesEspaces_ajouter(LesEspaces *lesp,char *nom,char *user)
{
    LesEspaces *tmp = (LesEspaces *)malloc(sizeof(LesEspaces));
    tmp->contenu = new_Espace(nom,user);
    tmp->svt = lesp;
    return tmp;
}//fin de la fonction





/*
    Cette fonction retourne un espace donnee par le nom
        Entree
*/
Espace *LesEspaces_monEspace(LesEspaces *lesp,char *nom)
{
    LesEspaces *tmp  = lesp;
    while(tmp)
    {
        if(strcmp(tmp->contenu->nom,nom) == 0)
            return tmp->contenu;
        tmp = tmp->svt;
    }
    return NULL;
}//fin de la fonction