
typedef struct Fonction {//Sd d une fonction
    int type ;
    char *name;
    int nbr;
    AllVariable *allv;
    char *content;
} Fonction;

typedef struct AllFonction{//tout les fonction
    Fonction *fct;
    struct AllFonction *svt;
}AllFonction;


/* creation d une nouvelle fonction */
Fonction *new_Fonction(int type,char *name,AllVariable *allv,char *content)
{
    Fonction *fct = (Fonction *)malloc(sizeof(Fonction));
    fct->type  = type;
    fct->name =(char *)malloc(strlen(name));
    strcpy(fct->name,name);
     fct->content =(char *)malloc(strlen(content));
    strcpy(fct->content,content);
    int nbr  = 0;
    AllVariable *tmp = allv;
    while(tmp)
    {
        nbr++;
        tmp = tmp->svt;
    }
    fct->nbr = nbr;
    fct->allv = allv;
    return fct;
}



/* utiliser une fonction */

char *Fonction_utiliser(Fonction *fct,int n,char *mot[n],AllFonction *allf)
{
    return " ";
}



/*  Ajouter une fonction*/
AllFonction *AllFonction_add(AllFonction *allf,Fonction *fct)
{
    AllFonction *tp = (AllFonction *)malloc(sizeof(AllFonction));
    tp->svt = NULL;
    tp->fct = fct;
    if(allf == NULL) return  tp;
    AllFonction *tmp = allf;
    while(tmp)
    {
        if(strcmp(tmp->fct->name,fct->name) == 0 && fct->nbr == tmp->fct->nbr)
            return allf;
        tmp = tmp->svt ;
    }
    tmp->svt = tp;
    return allf;
}//fin de la fonction 



// utilier une fonction
char *AllFonction_utiliser(AllFonction *allf,char *name,int n,char *mot[n])
{
    AllFonction *tmp = allf;
    while(tmp)
    {
        if(strcmp(tmp->fct->name,name) == 0 && n == tmp->fct->nbr)
            return Fonction_utiliser(tmp->fct,n,mot,allf);
        tmp = tmp->svt ;
    }
    return " ";
}//fin de la fonction

