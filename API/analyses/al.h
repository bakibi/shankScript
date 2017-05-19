


/*
    Cette fonction fait l analyse Lexical 
        elle prend une chaine et la decompose en unz liste de mots
            Entree:
                chaine la chaine a traiter
            Sortie:
                Ensemble des mots
*/


mots *al(char *chaine)
{  
    mots *liste = new_mots();//la liste a retourner a la fin des mots
    int taille = 0;//la taille de la fonction
    char c[2]={' ','\0'};//on va lire les caractere par ce tableau
    Pile *pile = new_Pile();//la pile de verification
    char lecture[300] = "";//la chaine de lecture
    if(chaine == NULL)
        return NULL;//si la chaine et Null donc on termine ici
    taille = strlen(chaine);
    int e = 0; // 0 on est  dans un etat normale
                    //  1 on est dans une braket
    int pile_braket = 0,pile_patenthese = 0,pile_quotes=0,pile_t=0;
    
    for(int i =0;i<taille;i++)
    {
        c[0] = chaine[i];//lecture
        if (strcmp(c,"{") == 0) pile_braket ++;//empiler braket
        if (strcmp(c,"}") == 0) pile_braket --;//depiler braket
        if (strcmp(c,"(") == 0) pile_patenthese ++;//empiler braket
        if (strcmp(c,")") == 0) pile_patenthese --;//depiler braket
        if (strcmp(c,"[") == 0) pile_t ++;//empiler braket
        if (strcmp(c,"]") == 0) pile_t --;//depiler braket
        if (strcmp(c,"\"") == 0 && (i==0 || chaine[i-1]!='\\')) pile_quotes ++;//depiler braket
        if(e == 0  && strcmp(c,";")==0)
            {   
                strcat(lecture,c);
                printf("%s\n----------------------------------------------\n",lecture);
                strcpy(lecture,"");
            }
            else if(e ==0 && strcmp(c,"{") == 0)
                {
                    e = 1;
                    strcat(lecture,c);
                }
            else if(e == 1 && strcmp(c,"}") == 0 && pile_braket == 0)
                {
                    strcat(lecture,c);
                    printf("%s\n----------------------------------------------\n",lecture);
                    strcpy(lecture,"");
                    e = 0;
                }
            else strcat(lecture,c);
    }//fin de la boucle for

    if(strcmp(lecture,"")!=0)
        printf("%s\n----------------------------------------------\n",lecture);
    printf("%d %d %d %d\n",pile_braket ,pile_patenthese ,pile_quotes%2,pile_t);
        return NULL;
}//fin de la fonction