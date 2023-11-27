#include <iostream>
using namespace std;

int main()
{

    int marks[10] = {0};

    int n;
    cout <<"Enter the no of students ";
    cin >>n; 
    
    marks[0] = -1;
    // input

    for (int i=1; i<=n ; i ++)
    {

        cin >> marks[i];
       
    }
    //update

    // output

    for(int i =0; i<10; i++)
    {
        cout << marks[i] << ",";
    }
cout << endl;

}