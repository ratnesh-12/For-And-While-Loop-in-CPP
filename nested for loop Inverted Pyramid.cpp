#include <iostream>
using namespace std;

int main(){
    int rows;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "\n";
    for(int i = rows; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}

OUTPUT: 
Enter number of rows: 6

******
*****
****
***
**
*
=== Code Execution Successful ===
