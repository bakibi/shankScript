



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
*/
LesEspaces *LesEspaces_ajouter(LesEspaces *lesp,char *nom,char *user)
{
    LesEspaces *tmp = (LesEspaces *)malloc(sizeof(LesEspaces));
    tmp->contenu = new_Espace(nom,user);
    tmp->svt = lesp;
    return tmp;
}//fin de la fonction