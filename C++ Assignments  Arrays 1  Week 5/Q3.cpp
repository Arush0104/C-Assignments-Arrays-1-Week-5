#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {9,4,6,7,8};
    int mini = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        mini = min(mini, arr[i]);
    }
    cout<<mini;
    return 0;
}