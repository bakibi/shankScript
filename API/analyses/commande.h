



/*
    Fonction de creation d'une nouvelle commande
        Entree:
            contenu chaine de commande
        Sortie:
            la commande initialisé
*/
Commande *new_Commande(char *contenu)
{
    //  Allocation dynamyque de tout la partie de la sd Commande
Commande *cmd = (Commande *)malloc(sizeof(Commande));
    cmd->commande = (char *)malloc(sizeof(contenu));
    cmd->warnings = (char *)malloc(sizeof(char)*2);
    cmd->errors = (char *)malloc(sizeof(char)*2);
    cmd->output =(char *)malloc(sizeof(char)*2);
    //copiage des informations dans la structure
    strcpy(cmd->commande,contenu);
    strcpy(cmd->warnings,"");
    strcpy(cmd->errors,"");
    strcpy(cmd->output,"");
    return cmd;//le retour
}//fin de la fonction



/*
    Cette fonction permet d interpreter la commande 
        Entree: 
            juste la commande
        Sortie:
            la commande bien interpreter
*/
Commande *Commande_interprete(Commande *cmd,LesVariables *les_variables,LesFonctions *les_fonctions)
{
    if(cmd == NULL)
        return NULL;//si le cas d'erreur
        

    return cmd;
}//fin de la fonction



/*  
    Cette fonction a pour role dafficher le resultat d une chaine de caractere 
        Entree:
            cmd la commande qu on veut afficher
        Sortie:
            chaine la chaine de caractere qui contient tt les composant de la commande
*/
char *Commande_affichage(Commande *cmd)
{
    if(cmd == NULL)
        return "";
    //la taille de tout les composant de la structure commande
    int taille = strlen(cmd->warnings)+strlen(cmd->output)+strlen(cmd->errors);
    //allocation de la chaine qui va contenir tt les composants
    char *chaine = (char *)malloc(taille+4);
    //initialisation
    strcpy(chaine,"");
    //copiage dans la chaine
    strcat(chaine,cmd->warnings);
    strcat(chaine,"\n");
    strcat(chaine,cmd->errors);
    strcat(chaine,"\n");
    strcat(chaine,cmd->output);
    strcat(chaine,"\n");
    //le retour de la valeur
    return chaine;
}//fin de la fonction
