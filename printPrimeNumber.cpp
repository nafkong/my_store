#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, d, j, i;
    bool c;
    d = 0;
    a = 100;
    for (i = 2; i < a; i++)
    {
        b = 0;
        for (j = 1; j < i; j++)
        { 
            c = i % j;
            if (!c)
                b++;
        }
        if (b == 1)
        {
            cout << i << " ";
            d++;
        }
    }
    cout << endl;
    cout << "һ��" << d << "��" << endl;
}