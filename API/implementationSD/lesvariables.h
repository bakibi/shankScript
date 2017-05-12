



/*
    Fonction de creation d une  nouvelle liste de variable
        Entree:
        Sortie:
*/
LesVariables *new_LesVariables()
{return NULL;}//fin de fonction 

/*
    Cette fonction verifie si une liste de variables et vide ou pas 
        Entree:
            lv la liste de variable
        Sortie:
            1   vrai
            0   faux
*/
int LesVariables_estVide(LesVariables *lv)
{ return lv == NULL;}//fin de la fonction



/*
    Fonction d ajout d une nouvelle variable 
    Entree :
        nom le nom de la variable
        contenu le contenu de la variable
        type le type de la variable
    Sortie:
        LesVariables
*/
LesVariables *LesVariables_ajouter(LesVariables *lv,int type,char *nom,char *contenu)
{
    LesVariables *p  = (LesVariables *)malloc(sizeof(LesVariables));
    p->contenu = new_Variable(type,nom,contenu);
    p->svt = NULL;
    p->svt = lv;//on passe la varialbe dans le debut
    return p;//le retour 
}//fin de la fonction






/*
    Cette fonction chercher dans la liste de varialbe
    Entree :
        nom le nom qu on veut chercher 
    Sortie :
        1 trouve
        0 sinon
*/
int LesVariables_chercher(LesVariables *lv,char *nom)
{
    if(lv == NULL)
        return 0;//si la liste est vide
    LesVariables *tmp = lv;//pointeur
    while(tmp)
        {
            if(Variable_compareNom(tmp->contenu,nom) == 1)
                return 1;//si on le trouve on retour 1
            tmp = tmp->svt;
        }//fin while
    return 0; //sinon on ne la pas trouve
}//fin fonction 




/*
    Cette fonction retour   une  variable
        Entree  :
            nom le nom de la variable
        Sortie:
            la variable en question
*/
char *LesVariables_contenu(LesVariables *lv,char *nom)
{
    if(LesVariables_chercher(lv,nom) == 0)
        return NULL;
    LesVariables *tmp = lv;//pointeur
    while(tmp)
    {
        if(Variable_compareNom(tmp->contenu,nom) == 1)
            return Variable_valeur(tmp->contenu);//retourner la valeur de la variable
        tmp  = tmp->svt;//suivant
    }//fin while
    return NULL;//si y avait un probleme
}//la fin de la fonction


/*
    Cette fonction permet de modifier une variable qui est dans la liste
        Entree:
            nom le nom de la variable
            contenu la valeur qu on veut mettre a ça place
        Sorite 
            La liste des variable
*/
LesVariables *LesVariables_modifierVariable(LesVariables *lv,char *nom,char *contenu)
{
    if(lv == NULL)
        return NULL;//si la liste est vide
    LesVariables *tmp = lv;
    while(tmp)
    {
        if(Variable_compareNom(tmp->contenu,nom))
            {
                    tmp->contenu = Variable_modifier(tmp->contenu,contenu);
                    break;
            }
            tmp  = tmp->svt;
    }
    return lv;//le retour finale
}//fin de la fonctino




/*
    Cette fonction permet de voir le type d une varialbe dans la liste est de qu il est var
        Entree: 
            nom le nom de la variable
        Sortie:
            le  type de la varialbe (int)
                0 erreur 
                
*/
int LesVariables_variableEstVar(LesVariables *lv,char *nom)
{
    if(lv == NULL)
    return 0;//errreur
    LesVariables *tmp = lv;
    while(tmp)
    {
        if(Variable_compareNom(tmp->contenu,nom))
            return Variable_estVar(tmp->contenu);
        tmp = tmp->svt;
    }
    return 0;//si il ne l a pas trouver
}//fin de la fonction





/*
    Cette fonction permet de voir le type d une varialbe dans la liste est de qu il est str
        Entree: 
            nom le nom de la variable
        Sortie:
            le  type de la varialbe (int)
                0 erreur 
                
*/
int LesVariables_variableEstStr(LesVariables *lv,char *nom)
{
    if(lv == NULL)
    return 0;//errreur
    LesVariables *tmp = lv;
    while(tmp)
    {
        if(Variable_compareNom(tmp->contenu,nom))
            return Variable_estStr(tmp->contenu);
        tmp = tmp->svt;
    }
    return 0;//si il ne l a pas trouver
}//fin de la fonction