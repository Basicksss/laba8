#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    int* ptr_a = &a;
    int* ptr_b = &b;
    cout << "Введите значение переменной a:";
    cin >> a;
    cout << "Введите значение переменной b:";
    cin >> b;
    if (a > b)
    {
        *ptr_a += 3;
        *ptr_b /= 3;
    }
    else if (a < b)
    {
        *ptr_a /= 2;
        *ptr_b += 3;
    }
    cout << a << ' ' << b;
}

