

enum tree {DECLVAR , DECFUNCT , AFFICHAGE , AFFECTATION , CONDITION,BOUCLE,USEFUNC};

typedef struct Tree{
    enum tree type;
    Tokens *toks;
    struct Tree *hope;
}Tree;

typedef struct Trees{
    Tree *this;
    struct Trees *svt;
}Trees;

Trees *Trees_Add(Trees *tr,enum tree type,Tokens *toks,Tree *hope)
{
    Trees *tmp = (Trees *)malloc(sizeof(Trees));
    tmp->this->type = type;
    tmp->this->toks = toks;
    tmp->this->hope =hope;
    tmp->svt = NULL;
    if( tr == NULL) return tmp;
    Trees *tmp1 = tr;
    while(tmp1->svt)
        tmp1 = tmp1->svt;
    tmp1->svt = tmp;
    return tr;
}//fin fonction


Trees *Parser(Tokens *toks)
{
    Trees *trs = NULL; // Trees ou on va stocker le resultat du parser
    Tokens *tmp = toks;
    Token *tok = NULL;// ou on va stocker notre element
    while(tmp)
    {
        tok = tmp->this;//l element dans le noeud acctuel




        tmp = tmp->svt;//passer à l element suivant
    }  //fin while
return trs;
}//fin fonction