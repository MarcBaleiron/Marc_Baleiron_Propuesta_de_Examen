#include "triple_pitagorico.h"
#include <iostream>
#include <cmath>
using namespace std;

void triple_pitagorico::triple_pt (int valor_maximo)
{
    int a, b, c;

    for (a = 1; a <= valor_maximo; a++)
    {
        for (b = 1; b <= valor_maximo; b++)
        {
            c = sqrt(a^2 + b^2);
            {
                if ((a^2 + b^2 == c^2) && (a + b > c) && (a + c > b) && (b + c > a))
                {
                    cout << "Triple pitagorico: " << a << " - " << b << " - " << c << endl;
                }
            }
        }
    }
}