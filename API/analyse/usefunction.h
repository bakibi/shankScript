



const char  *Evalutor(Trees *trs ,Env *envi,char  *bakibi);


/* utiliser une fonction */

char *Fonction_utiliser(Fonction *fct,int n,Parametre *p,AllFonction *allf,Env *envi,char *bakibi)
{
        
       
     
       AllVariable *tmp = fct->allv;

    AllVariable *myvr = NULL;// la nouvelle liste de variable 
    while(tmp)
    { 
        fct->allv = AllVariable_modifier(fct->allv,tmp->v->nom,p->valeur);
        myvr = AllVariable_ajouter(myvr,tmp->v);
        p = p->svt;// le parametre suivant
        tmp = tmp->svt;// la variable suivant 
    }
    AllVariable *tmp1 = envi->allv;
    while(tmp1) // on ajoute tout les varialbe qui soit parameter ou pas dans la nouvelle liste de variable
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
}// fin de la fonction 

















// les methode d une fenetre
char *methode_Fenetre(Variable *v,char *name,int n,Parametre *p,AllFonction *allf,Env *envi,char *bakibi)
{
     if(strcmp(name,"creer_fenetre") == 0 && n == 1)
    {
        v->val->fen = new_Fenetre(calculerExpressionNv1(p->valeur,p->valeur),NORMAL,new_Taille(100,155),P_CENTER);
        Fenetre_agrandir(v->val->fen);
        Fenetre_setVisible(v->val->fen,1);
        
    }
    else if(strcmp(name,"creer_fenetre") == 0 && n == 3)
    {
        char tm[1000];
        int x = atoi(calculerExpressionNv1(p->svt->valeur,tm));
        int  y = atoi(calculerExpressionNv1(p->svt->svt->valeur,tm));
       v->val->fen = new_Fenetre(calculerExpressionNv1(p->valeur,tm),NORMAL,new_Taille(x,y),P_CENTER);
       
        Fenetre_setVisible(v->val->fen,1);
      
    }


    return " ";
}// fin fonction










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


char *Methode_utiliser(Variable *v,char *name,int n,Parametre *p,AllFonction *allf,Env *envi,char *bakibi)
{
    int type = v->type;

    if(type  == 5)
        return methode_Fenetre(v,name,n,p,allf,envi,bakibi);




    return " ";
}




