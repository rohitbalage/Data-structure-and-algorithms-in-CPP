#include <iostream>
using namespace std;

int main()
{
int numbers[100];
int n;

cout <<"Enter the total no. ";
cin >>n;

 // input
for(int i =0; i<n; i++){
cin >> numbers[i];
}

// output
for (int i=0; i<n; i++)
{
   cout <<"the entered no. are: "<<numbers[i]<< endl; 
}

//update

int m, r;
cout <<"\n Now Enter the index you want to change and folled by its the value";

cin >> m >>r;

numbers[m] = r;

cout <<"the changed index is "<<m + " "<<"and the corresponding value is" <<numbers[m] + " = "<<r;

cout <<"Now the changed numbers index would look like:";

for(int i=0; i<=5; i++)
{
    cout <<numbers[i] <<endl;
}
}