#include "inc.h"


int main(int argc,char **args)
{
    char *chaine = readFromFile("TEST/test.sks",chaine);//lecture du fichier
    char m[300];
  
   
    copyToFile("TEST/out",formaterUneChaine(chaine,m));//copier le resultat dans le fichier
    return 0;
}