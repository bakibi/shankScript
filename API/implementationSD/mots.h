



/*
//  fonction d initialisation 
*/
mots *new_mots()
{return NULL;}



/*
    Fonction d ajout d un nouveau mot
        Entree :
            lesmots la liste des mots
            unmot le mot qu on veut ajouter
*/

mots *mots_ajouterMot(mots *lesmots,mot *unmot)
{
    mots *p = (mots *)malloc(sizeof(mots));//allocation dynamique dune nouvelle cellule
    if(p == NULL)   return NULL;
    p->contenu = unmot; //afectaion de laddresse du mot
    p->svt = NULL;//suivant NULL
    if(lesmots == NULL) return p;//si la liste est vide
    mots *tmp = lesmots;//un pt temporaire de parcoure
    //si la liste n'est pas vide en parcoure
    while(tmp->svt) tmp = tmp->svt;
    tmp->svt = p;
    return lesmots;
}//fin de la fonctino