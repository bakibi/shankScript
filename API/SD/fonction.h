




/*
    La structure de donnees des element de type fonction
*/
typedef struct Fonction 
{
    int typeRetour; //type de retour ça dependre des  type de varialbe qu on a
    char *nom;//le nom de la fonction
    int nbrParametres;//nom de parametre
    LesVariables *contenuV; //les variable qui sont dans le header
    struct instanceClasse *contenuC;//en parametre classes
    char *contenu;//et le contenu de la fonction
    char *ContenuR; // le contenu que la fonction va retourner
    char *nomR;//le nom de la classe de retour 
}Fonction;

/*
    Pour le type de retour ca poura etre
        0   rien
        1   var
        2   str
        3  autre dans ce cas on va voir le champs nomR qui va nous deduire le nom de classe utiliser 
*/