








/*cette fonction prend les element de Trees et il l evalue */
char  *Evalutor(Trees *trs)
{
    Trees  *tmp = trs;
    while(tmp)
    {
        
        //cas d affichage 
        if(tmp->type==AFFICHAGE)
        {
            char *sentence = (char *)malloc(sizeof(char)*2);
            strcpy(sentence,"");
            Tokens *tmp1 = tmp->toks;
            while(tmp1 !=NULL && strcmp(tmp1->this->value,";")!=0)
                {   
                        sentence = realloc(sentence,strlen(tmp1->this->value));
                        strcat(sentence,tmp1->this->value);
                        tmp1 = tmp1->svt;
                }
                char res[100];
                printf("--->%s = %s\n",sentence,calculerExpressionNv1(sentence,res));
        }//fin if

        //cas de declaration


        tmp = tmp->svt;//it suivantes
    }//fin while
    return NULL;
}//fin de la fonction