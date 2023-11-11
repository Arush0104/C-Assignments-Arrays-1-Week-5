#include <iostream>
using namespace std;
int main()
{
    int a[5]={2,4,6,9,10};
    int x = 0;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] != x)
        {
            cout << x << endl;
            flag = true;
            break;
        }
        else
            x++;
    }
    if (flag == false)
        cout << x << endl;
    return 0;
}