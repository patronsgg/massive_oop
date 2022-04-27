#include <iostream>
using namespace std;

void sort(int*);

int main()
{
    int *mass = new int[12];
    for (int i = 0; i <= 11; i ++)
    {
        mass[i] = (i + 1);
    }
    cout << "[ ";
    for (int i = 0; i <= 11; i ++)
    {
        cout << mass[i] << ' ';
    }
    cout << ']' << endl;
    sort(mass);
    cout << "[ ";
    for (int i = 0; i <= 11; i ++)
    {
        cout << mass[i] << ' ';
    }
    cout << ']' << endl;
    return 0;
}

void sort(int *mass)
{
    for (int i = 0; i < 11;)
    {
        int temp = mass[i];
        mass[i] = mass[i + 1];
        mass[i + 1] = temp;
        i += 2;
    }
}