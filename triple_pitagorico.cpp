#include "triple_pitagorico.h"
#include <iostream>
#include <cmath>
using namespace std;

pitagoricos::pitagoricos (int limite) : limite (limite) {}

void pitagoricos::triples_pt ()
{
    for (int a = 1; a <= limite; a++)
    {
        for (int b = a; b <= limite; b++)
        {
            int c = sqrt(a * a + b * b);

            if (c * c == a * a + b * b && es_triple (a, b, c))
            {
                cout << "Triple pitagorico:  " << a << " - " << b << " - " << c << endl;
            }
        }
    }
}

bool pitagoricos::es_triple (int a, int b, int c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}
