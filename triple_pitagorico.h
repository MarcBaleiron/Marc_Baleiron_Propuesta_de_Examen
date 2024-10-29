#ifndef TRIPLE_PITAGORICO_H
#define TRIPLE_PITAGORICO_H

class pitagoricos
{
public:
    pitagoricos (int limite);
    void triples_pt ();

private:
    int limite;
    bool es_triple (int a, int b, int c);
};

#endif
