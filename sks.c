#include "inc.h"


int main(int argc,char **args)
{
     FILE *output = fopen("TEST/out","w+");
    gtk_init(&argc,&args);
    char *chaine = readFromFile("TEST/test.sks",chaine);//lecture du fichier
    char m[300];
    Env envi;
    envi.allv = NULL;
    envi.allf = NULL;
                   Tokens *toks = Lexer(chaine);     
                   Trees    *trs   = Parser(toks);
                   printf("-->((Retour finale)%s)\n",Evalutor(trs,&envi,m,output));  
    fclose(output);
    gtk_main();
    return 0;
}