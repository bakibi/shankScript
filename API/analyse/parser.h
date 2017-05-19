

enum tree {DECLVAR , DECFUNCT , AFFICHAGE , AFFECTATION , CONDITION,BOUCLE,USEFUNC};

typedef struct Tree{
    enum tree type;
    char *name;
    
}Tree;



void Parser(Tokens *toks)
{
    Tokens *tmp = toks;
    Token *tok = NULL;// ou on va stocker notre element
    while(tmp)
    {
        tok = tmp->this;//l element dans le noeud acctuel
        tmp = tmp->svt;//passer à l element suivant
    }  //fin while

}//fin fonction