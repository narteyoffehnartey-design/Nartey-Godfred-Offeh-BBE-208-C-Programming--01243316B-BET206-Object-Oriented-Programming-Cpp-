#include <iostream>

#include <string>

#include <cmath>

using namespace std;

int main() {
	
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    // Convert to decimal
    
    int decimal = 0;
    int len = binary.length();
    for (int i = 0; i < len; i++) {
        if (binary[len - 1 - i] == '1')
            decimal += pow(2, i);
    }

    // Decimal to hexadecimal
    
    cout << "Decimal: " << decimal << endl;
    cout << "Hexadecimal: " << hex << decimal << endl;  // hex manipulator
    cout << "Octal: " << oct << decimal << endl;        // oct manipulator

    return 0;
}