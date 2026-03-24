/*
Finding subsets:

Given a string, find all the subsets of the given string

input:
abc

2*2*2 = 8 options

output:

"",a,b,c,ab,ac,bc,abc

*/

#include <iostream>
using namespace std;

void findSubsets(char *input, char *output, int i, int j) {
    // Base Case: We've reached the end of the input string
    if (input[i] == '\0') {
        output[j] = '\0'; // Terminate the output string
        if (j == 0) {
            cout << "{empty}" << endl;
        } else {
            cout << output << endl;
        }
        return;
    }

    // Recursive Case
    // Option 1: Include the current character
    output[j] = input[i];
    findSubsets(input, output, i + 1, j + 1);

    // Option 2: Exclude the current character
    // We don't increment 'j', so the next character we "include" 
    // will just overwrite the current spot.
    findSubsets(input, output, i + 1, j);
}

int main() {
    char input[100];
    char output[100];

    cout << "Enter a string (e.g., abc): ";
    cin >> input;

    cout << "--- Subsets ---" << endl;
    findSubsets(input, output, 0, 0);

    return 0;
}