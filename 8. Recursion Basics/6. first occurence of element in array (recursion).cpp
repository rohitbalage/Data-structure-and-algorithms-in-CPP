/*
problem statement:
find the first occurance of element in an array
and return index. (recursion)
*/

#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    // base case:
    if(n ==0)
    {
        return -1;
    }
    // rec case :
    if(arr[0] == key)
    {
        return 0;
    }
    int subIndex = firstOcc(arr +1, n-1, key);
    if(subIndex!=-1)
    {
        return subIndex +1;

    }
    return -1;
}


int main()
{
int arr[] = {1,2,3,4,5,6,7,22,11,21};
int n = sizeof(arr)/ sizeof(int);
int key = 7;
cout << firstOcc(arr, n, key);
return 0;
}