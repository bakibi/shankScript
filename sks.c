#include "inc.h"


int main(int argc,char **args)
{
    char *chaine = readFromFile("TEST/test.sks",chaine);//lecture du fichier
    printf("%d",estMotValide(""));
    copyToFile("TEST/out",chaine);//copier le resultat dans le fichier
    return 0;
}