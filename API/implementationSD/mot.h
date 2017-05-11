

/*
    Fonction de creation d un nouveau mot 
        Entree :
            chaine  la chaine du mot
            type    le type du mot
*/
mot *new_mot(char *chaine,int type)
{
    mot *mt = (mot *)malloc(sizeof(mot));//crreation et allocation dynamique d un nouveau mot
    if(mt == NULL)  return NULL;
    mt->contenu =(char *)malloc(sizeof(char)*strlen(chaine));
    strcpy(mt->contenu,chaine);//copiage de la chaine
    mt->type = type;// affectation du type
}//fin de la fonction