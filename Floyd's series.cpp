#include <iostream>
using namespace std;

int main() {
    int num = 1;    
    int rows = 4;   

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

OUTPUT: 
1
2 3
4 5 6
7 8 9 10 
