




/*
    Cette fonction cree une Nouvelle Liste de commande 
        Entree: NONE
        Sortie: NULL;
*/
LesCommande *new_LesCommande()
{return NULL;};//fin de la fonction




/*
Cette fonction ajout une commande au Liste de xommande
        Entree: la chaine de caractere qui contient la commande 
        Sorite: la liste avec la commande bien ajouter
*/
LesCommande *LesCommande_ajouter(LesCommande *lcmd ,char *chaine)
{
    LesCommande *tmp  = (LesCommande *)malloc(sizeof(LesCommande));
    tmp->contenu = new_Commande(chaine);
    tmp->svt = lcmd;
    return tmp;
}//fin de la fonction
