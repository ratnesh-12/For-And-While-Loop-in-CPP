#include <iostream>
#include <string>

using namespace std;

int main() {
    string correctPassword = "@619";
    string enteredPassword;
    int number = 0;
    int special = 0;

    cout << "Enter password: ";
    cin >> enteredPassword;

    int i = 0;
    while (i < enteredPassword.length()) {
        char ch = enteredPassword[i];

        if (ch >= '0' && ch <= '9') number++;
        if (ch == '@' || ch == '#' || ch == '$' || ch == '!' || ch == '%') special++;

        i++;
    }

    if (number == 0) cout << "Enter at least a number\n";
    if (special == 0) cout << "Enter at least a special char\n";

    if (number > 0 && special > 0) {
        if (enteredPassword == correctPassword) {
            cout << "Valid password\n";
        } else {
            cout << "Invalid password\n";
        }
    }

    return 0;
}

OUTPUT: 

Enter password: @345
Invalid password
=== Code Execution Successful ===
