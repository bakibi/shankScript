#include "inc.h"


int main(int argc,char **args)
{
    char *chaine = readFromFile("TEST/test.sks",chaine);//lecture du fichier
    char m[300];
    /*LesEspaces *espaces = new_LesEspaces();
    espaces = LesEspaces_ajouter(espaces,"souhail","new");
    Espace *travail = LesEspaces_monEspace(espaces,"souhail");
    
    travail = Espace_ajouteCmd(travail,chaine);
   */
   declaration_variable(chaine);
    copyToFile("TEST/out",calculerExpressionNv1(chaine,m));//copier le resultat dans le fichier
    return 0;
}