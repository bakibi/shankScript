


/*
    Cette fonction verifie une chaine si elle est un mot cle ou pas
        Entree :
            chaine le mot qu on veut verifie
        Sortie :
            1 vrai
            0 faux
*/
int estMotCle(char *chaine)
{
    // les mots clee disponibles
    char m[][20] = {"var","str","while","if","else","function","class","for","return"}; 
    int taille  = 9;
    for(int i = 0;i<9;i++)
        if(strcmp(m[i],chaine) == 0)
            return 1;//trouve
    return 0;//pas trouve
}//fin de la foction