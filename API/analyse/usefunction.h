



const char  *Evalutor(Trees *trs ,Env *envi,char  *bakibi);


/* utiliser une fonction */

char *Fonction_utiliser(Fonction *fct,int n,Parametre *p,AllFonction *allf,Env *envi,char *bakibi)
{
    AllVariable *tmp = fct->allv;
    AllVariable *myvr = NULL;
    while(tmp)
    {
        fct->allv = AllVariable_modifier(fct->allv,tmp->v->nom,p->valeur);
        myvr = AllVariable_ajouter(myvr,tmp->v);
        p = p->svt;
        tmp = tmp->svt;
    }
    AllVariable *tmp1 = envi->allv;
    while(tmp1)
    {
        myvr = AllVariable_ajouter(myvr,tmp1->v);
        tmp1 = tmp1->svt;
    }
    Tokens *toks = Lexer(fct->content);
    Trees *tres = Parser(toks);
    
     Env envi1;
     envi1.allv = myvr;
     envi1.allf = envi->allf;
     strcpy(bakibi,Evalutor(tres,&envi1,bakibi));
    return bakibi;
}








// utilier une fonction
char *AllFonction_utiliser(AllFonction *allf,char *name,int n,Parametre *p,Env *envi,char *bakibi)
{
    AllFonction *tmp = allf;
    while(tmp)
    {
        if(strcmp(tmp->fct->name,name) == 0 && n == tmp->fct->nbr)
            return Fonction_utiliser(tmp->fct,n,p,allf,envi,bakibi);
        tmp = tmp->svt ;
    }
    return " ";
}//fin de la fonction

