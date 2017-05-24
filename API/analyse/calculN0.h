




char *calculerExpressionNv0(Tokens *toks ,Env *envi, char *resultat)
{
     strcpy(resultat,"");
     char tompon[5000] = "";
    Tokens *tmp = toks;
    while(tmp)
    {   
        if((strcmp(tmp->this->value,";")==0))
            {

                tmp = tmp->svt;
                if(!tmp) break;
            }
            if(tmp->this->tok == NAME && 
                    (tmp->svt == NULL || strcmp(tmp->svt->this->value,"(") !=0  
              )  )// cas of variable
                 {strcat(tompon,AllVariable_valeur(envi->allv,tmp->this->value));
                
                 }
                 
             else if(tmp->this->tok == NAME && strcmp(tmp->svt->this->value,"(") ==0)
             {//cas dune fonction normale
                  char nomF[100] = "";
                    strcpy(nomF,tmp->this->value);// on copie le nom de la fonction
                    tmp = tmp->svt;//(
                    tmp = tmp->svt;//en entre dans le premeir parametrer
                    int nbr = 0;// le nombre de parametere
                    Parametre *p = NULL;// le poiteur des parametetre
                    Tokens *tks = NULL;
                    while( tmp && strcmp(tmp->this->value,")") !=0)
                    { printf("here \n");
                        nbr++;
                        if(strcmp(tmp->this->value,")") == 0 || strcmp(tmp->this->value,",")==0)
                        {
                            p = Parametre_ajouter(p,calculerExpressionNv0( tks ,envi, resultat));
                            tks = NULL;
                        }
                        else
                            tks = Tokens_Add(tks,tmp->this->tok,tmp->this->value);
                        tmp = tmp->svt;
                  }//fin while
                    p = Parametre_ajouter(p,calculerExpressionNv0( tks ,envi, resultat));
                    strcat(tompon,AllFonction_utiliser(envi->allf,nomF,nbr,p,envi,tompon));
                    
                    
             }//end if function
             else 
                {strcat(tompon,tmp->this->value);printf("--->%s \n",tmp->this->value);}
            tmp = tmp->svt; 
    }

    strcpy(resultat,calculerExpressionNv1(tompon,resultat));
    return resultat;
}