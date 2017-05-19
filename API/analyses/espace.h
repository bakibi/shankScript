





/*
    Cette fonction cree un nouveau espace 
        Entree:
            nom le nom de l'espace
            user l utilisateur createur de cette espace
        Sortie:
            L espace bien cree 
*/
Espace *new_Espace(char *nom,char *user)
{
     Espace *esp = (Espace *)malloc(sizeof(Espace)); // alloc memo
     esp->nom = (char *)malloc(strlen(nom));//add name
     strcpy(esp->nom,nom);
      esp->user = (char *)malloc(strlen(user));//add user
     strcpy(esp->user,user);
     esp->contenuF = new_LesFonctions();
     esp->contenuV = new_LesVariables();
     esp->contenuC = NULL;
     esp->contenuCmd = new_LesCommande();
     return esp;
}//fin de la fonction







/*
    Cette fonctio, ajout une commande à un Espace
        Entree:
            cmd la commande ss forme de chaine de caractere
        Sortie:
            Espace avec la commande bien ajouter
*/
Espace *Espace_ajouteCmd(Espace *esp,char *cmd)
{
    esp->contenuCmd = LesCommande_ajouter(esp->contenuCmd,cmd);
    return esp;
}//fin de la fonction