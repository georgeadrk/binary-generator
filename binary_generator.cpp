#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Enter Your Number (0-255): ";
    cin >> num;

    if (num < 0 || num > 255) {
        cout << "Number must be between 0 and 255.\n";
        return 1;
    }

    string binary = "";
    for (int i = 7; i >= 0; --i) {
        int mask = 1 << i;
        if (num & mask)
            binary += '1';
        else
            binary += '0';
    }

    cout << "Your Binary Number Is: " << binary << endl;
    return 0;
}
