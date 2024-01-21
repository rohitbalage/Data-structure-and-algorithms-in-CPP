#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 2D Vector

    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9, 10},
        {11, 12},
    };

    // for each lpop
    for (int i = 0; i < arr.size(); i++)
    {
        for (int x : arr[i])
        {
            cout << x << ",";
        }
    }

    // update element;

    arr[0][0] += 10;

    return 0;
}