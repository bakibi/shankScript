


ArbreStr *new_ArbreStr();
ArbreStr *ArbreStr_ajouter(ArbreStr *a,char *e);
const char *ArbreStr_value(ArbreStr *a,char valeur[300]);
void ArbreStr_afficherInfixe(ArbreStr *a);
/*
    Cette fonction premet d' à partir d une chaine de caractere de 
    donner un resultat
        Entree;
            chaine la chaine de caractere
        Sortie:
            une chaine de cractere contenant resultat  
*/
char *calculerExpressionNv3(char *chaine,char valeur[300])
{
    int taille = strlen(chaine);//taille de la chaine à traiter
    char lecture[300];// la chaine avec laquelle on va effectuer la traitment
    strcpy(lecture,"");//init
    strcpy(valeur,"");//init 
    int e = 1;
    char c[2]={' ','\0'};
    char result[300];
    ArbreStr *a = new_ArbreStr();
    for(int i =0;i<taille;i++)
    {
        c[0] = chaine[i];//affectation en c
        if(c[0] == ' ')
            continue;
        if(estNombre(c) || c[0]=='.')
        {
            if(e ==  1)
            strcat(lecture,c);// on continue l affectation
            else
            {
                a = ArbreStr_ajouter(a,lecture);//on entre la chaine dans l arbre
                strcpy(lecture,c);//reiniatioalisation
                e = 1;
            }//fin else
        }//fin if est nmobre
        else//si le la car entre est une operation
        {
            if( e == 2)
                strcat(lecture,c);// on continue l affectation
            else 
            {
                 a = ArbreStr_ajouter(a,lecture);//on entre la chaine dans l arbre
                strcpy(lecture,c);//reiniatioalisation
                e = 2;
            }//fin else
        }//fin else
    }//fin for
    
     
     a = ArbreStr_ajouter(a,lecture);//ajout du dernier element 
    strcpy(valeur,ArbreStr_value(a,result));
    return valeur;
}//fin de la fonction




/*
    Cette fonction permet de calculer en plus de calculerExpressionNv3

*/