#include <iostream>
using namespace std;

int main() {

    int multiplicand, multiplier;
    cout << "Enter multiplicand: ";
    cin >> multiplicand;
    cout << "Enter multiplier: ";
    cin >> multiplier;

    for (int i = 1; i <= multiplier; i++) {
        for (int j = 1; j <= multiplicand; j++) {
            cout << i * j << "\t";
            if (j == multiplicand) {
                cout << endl;
            }            
        } 
    }
    return 0;
}