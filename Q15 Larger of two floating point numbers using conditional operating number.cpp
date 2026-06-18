#include <iostream>

using namespace std;

int main() {
	
    double a, b;
    cout << "Enter two floating numbers: ";
    cin >> a >> b;

    double larger = (a > b) ? a : b;
    cout << "Larger = " << larger << endl;

    return 0;
}