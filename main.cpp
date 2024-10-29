#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int triples[4][3] =
    {
        {3, 4, 5},
        {6, 8, 10},
        {5, 12, 13},
        {8, 15, 17}
    };

    cout << "Triples pitagoricos encontrados:\n";
    for (int i = 0; i < 4; i++)
    {
        int a = triples[i][0] <= 20;
        int b = triples[i][1] <= 20;
        int c = triples[i][2] <= 20;

        if ((a^2 + b^2 == c^2) && (a + b > c) && (a + c > b) && (b + c > a))
        {
            cout << a << " - " << b << " - " << c << endl;
        }

    }
        return 0;
}