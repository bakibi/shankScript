










Env  *gerer_declaration(Tokens *toks,Env *envi)
{
    int type = -1;
    if(strcmp(toks->this->value,"var") == 0) type = 0;
    if(strcmp(toks->this->value,"string") == 0) type = 1;
    if(strcmp(toks->this->value,"List") == 0) type = 2;
    if(strcmp(toks->this->value,"Queue") == 0) type = 3;
    if(strcmp(toks->this->value,"Stack") == 0) type = 4;
    if(strcmp(toks->this->value,"Fenetre") == 0) type = 5;
    char name[100];
    char valeur[1000];
    char vvv[3000] = "";
    char essai[3000] = "";

    Tokens *tmp = toks;
    tmp = tmp->svt;
    while(tmp)
    {
        strcpy(name,tmp->this->value);
        tmp = tmp->svt;
        strcpy(vvv,"");
        if(tmp!=NULL && tmp->this->tok == EQUA)
        {
            tmp = tmp->svt;
            
            while(tmp!=NULL && strcmp(tmp->this->value,";")!=0 && strcmp(tmp->this->value,",")!=0)
            {
                if(tmp->this->tok == NAME && 
                    (tmp->svt == NULL || (strcmp(tmp->svt->this->value,"(") !=0 && strcmp(tmp->svt->this->value,".") !=0)  )
                        )// cas of variable
                    strcat(vvv,AllVariable_valeur(envi->allv,tmp->this->value));
                else if(tmp->this->tok == NAME && strcmp(tmp->svt->this->value,"(") !=0)
                {
                    char nomF[100] = "";
                    strcpy(nomF,tmp->this->value);
                    tmp = tmp->svt;//(
                    tmp = tmp->svt;
                    int nbr = 0;
                    Parametre *p = NULL;
                    while(strcmp(tmp->this->value,")") !=0)
                    {
                        tmp = tmp->svt;
                    }//fin while

                }
                else 
                    strcat(vvv,tmp->this->value);
                tmp = tmp->svt;
            }
            
            
        }//if
        envi->allv = AllVariable_ajouter(envi->allv,new_Variable(type,name,calculerExpressionNv1(vvv,valeur)));
        printf("declaration ---->%s=%s\n",name,AllVariable_valeur(envi->allv,name));
        if(tmp)
            tmp = tmp->svt;
    }
    return envi;
}//fin de la fonction






/*cette fonction prend les element de Trees et il l evalue */
char  *Evalutor(Trees *trs)
{
    Trees  *tmp = trs;
    Env envi;
    envi.allv = NULL;
    envi.allf = NULL;
    while(tmp)
    {
        
        //cas d affichage 
        if(tmp->type==AFFICHAGE)
        {   
            char res[1000];
                Tokens *tmp1= tmp->toks;
                if(tmp1->this->tok == NAME && tmp1->svt && tmp1->svt->this->tok == EQUA)
                {
                     printf("affecation---> %s \n",calculerExpressionNv0(tmp1->svt->svt,&envi,res));
                     envi.allv = AllVariable_modifier(envi.allv,tmp1->this->value,calculerExpressionNv0(tmp1->svt->svt,&envi,res));
                     
                }
                else 
                    printf("affichage---> %s\n",calculerExpressionNv0(tmp->toks,&envi,res));
        }//fin if

        //cas de declaration d une variable
         if(tmp->type==DECLVAR)
         {
                gerer_declaration(tmp->toks,&envi);
            
         }//end cas de la declaration

         if(tmp type == )

      

        tmp = tmp->svt;//it suivantes
    }//fin while
    return NULL;
}//fin de la fonction