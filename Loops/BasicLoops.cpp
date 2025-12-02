/*
loop
car => a(city) se b(city)

int a;
cin>>a;
10


=> Basics : for,while,do while

=> intermediate level : Nested loop,inifinite loop,break,continue;
=>adva: special loops ,range

*/
#include <iostream>
using namespace std;
int main()
{
    // 1- for loop-
    // 2-while loop-
    // 3-do while loop-

    // 1 100
    /*1,2,3,4,5...    1-100*/

    // in which case we use for loop ; jab condition ka pata ho ky kha se kha tk jana hy

    // for (int i = 0; i <= 20; i++)
    // {
    //     cout << i << " ";
    // }

    // while loop
    // int i = 0;
    // while (i < 10)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // do while
    int positive;
    do
    {
        cout << "Enter a positive number ";
        cin >> positive;
        cout << positive;
        // 100
    } while (positive < 10);

    return 0;
}