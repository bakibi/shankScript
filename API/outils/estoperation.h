


/*
    Cette fonction verifie si une chaine de caractere est une operation
        Entree:
            chaine la chaine qu on veut traiter
        Sorite:
        0   faux
        1   +
        2   -  
        3   *
        4   /
        5   %
        6   =
*/
int estOperation(char *chaine)
{
    int taille = strlen(chaine);//la taille de la chaine
    if(taille>1)
        return 0;
    if(  strcmp(chaine,"+") == 0)    return 1;
    if(  strcmp(chaine,"-") == 0)    return 2;
    if(  strcmp(chaine,"*") == 0)    return 3;
    if(  strcmp(chaine,"/") == 0)    return 4;
    if(  strcmp(chaine,"%") == 0)    return 5;
    if(  strcmp(chaine,"=") == 0)    return 6;
            
    return 0;
}//fin de la fonction