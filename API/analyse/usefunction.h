






/* utiliser une fonction */

char *Fonction_utiliser(Fonction *fct,int n,Parametre *p,AllFonction *allf,Env *envi)
{
    return " ";
}








// utilier une fonction
char *AllFonction_utiliser(AllFonction *allf,char *name,int n,Parametre *p,Env *envi)
{
    AllFonction *tmp = allf;
    while(tmp)
    {
        if(strcmp(tmp->fct->name,name) == 0 && n == tmp->fct->nbr)
            return Fonction_utiliser(tmp->fct,n,p,allf,envi);
        tmp = tmp->svt ;
    }
    return " ";
}//fin de la fonction

