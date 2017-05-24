#include "inc.h"


int main(int argc,char **args)
{
    char *chaine = readFromFile("TEST/test.sks",chaine);//lecture du fichier
    char m[300];
    Env envi;
    envi.allv = NULL;
    envi.allf = NULL;
                   Tokens *toks = Lexer(chaine);     
                   Trees    *trs   = Parser(toks);
                   printf("-->((Retour finale)%s)\n",Evalutor(trs,&envi,m));  
    copyToFile("TEST/out",calculerExpressionNv1(chaine,m));//copier le resultat dans le fichier
    return 0;
}