struct Noeud
{
    int val;
    struct Noeud* suivant;
};

struct List
{
    struct Noeud* premier;
    struct Noeud* dernier;
};

void creer_list(struct List*);
void ajout_list(int,struct List*);
int supprimer_list(struct List*);
int premier(struct List*);
int dernier(struct List*);
void reverser(struct List*);
void parcour(struct List* test,void (*fake)(struct Noeud*));
struct List merge(struct List*,struct List*);
