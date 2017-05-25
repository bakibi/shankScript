




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
                    int e = 0;
                    while( tmp)
                    {
                       
                        if( strcmp(tmp->this->value,",")==0)
                        {
                            p = Parametre_ajouter(p,calculerExpressionNv0( tks ,envi, resultat));
                            free(tks);
                            tks = NULL;
                           
                             nbr++;
                        }
                        else if(strcmp(tmp->this->value,")") == 0)
                        {
                             if(e !=0) nbr++;
                            p = Parametre_ajouter(p,calculerExpressionNv0( tks ,envi, resultat));
                            free(tks);
                            tks = NULL;
                            tmp = tmp->svt;
                            break;
                        }
                        else
                            {tks = Tokens_Add(tks,tmp->this->tok,tmp->this->value);}
                        tmp = tmp->svt;
                        e++;
                  }//fin while
                    printf("--->%s %d \n",nomF,nbr);
                    strcat(tompon,AllFonction_utiliser(envi->allf,nomF,nbr,p,envi,tompon));
                    
                    
             }//end if function
             else 
                {strcat(tompon,tmp->this->value);}
            tmp = tmp->svt; 
    }

    strcpy(resultat,calculerExpressionNv1(tompon,resultat));
    return resultat;
}