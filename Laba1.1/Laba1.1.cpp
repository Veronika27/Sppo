#include <iostream>
#include <math.h> 

using namespace std;

float f1(int x)
{
    float q = 0;
    if (x >= 0)
    {
        q = pow(-x, 2);
    }
    else
    {
        q = abs(-x);
    }

    return q;
}
int main()
{
    int b;
    setlocale(LC_ALL, "rus");
    cout << "Введите диапазон" << endl;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        float sum = f1(i);
        cout << "F1=" << sum << " i=" << i << endl;
    }
    system("pause");
    return 0;
}