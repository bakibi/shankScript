




/*
    La structure de donnees des element de type fonction
*/
typedef struct Fonction 
{
    int typeRetour; //type de retour ça dependre des  type de varialbe qu on a
    char *nom;//le nom de la fonction
    int nbrParametres;//nom de parametre
    char *header;//le header de la fonction
    char *contenu;//et le contenu de la fonction
}Fonction;

/*
    Pour le type de retour ca poura etre
        0   rien
        1   var
        2   str 
*/