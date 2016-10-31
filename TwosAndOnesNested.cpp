#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    for(int i = 0; i<7; i ++)
    {
        for(int j = 0; j <i; j++)
        {
            cout << b;
        }
        for(int k = 0; k < 6-i; k++)
        {
            cout << a;
        }
        cout << endl;
    }
    
    return 0;
}   
