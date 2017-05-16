


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
    int c[2]={' ','\0'};//on va lire les caractere par ce tableau
    Pile *pile = new_Pile();//la pile de verification
    char lecture[300] = "";//la chaine de lecture
    if(chaine == NULL)
        return NULL;//si la chaine et Null donc on termine ici
    taille = strlen(chaine);
    for(int i =0;i<taille;i++)
    {

    }//fin de la boucle for
        
}//fin de la fonction