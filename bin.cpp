#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        cout << "decimal: 0 - 15" << n << endl;

        // print binary with leading zeros
        cout << "binary : ";
        for (int i=3; i>=0; i--) {
            int bit = ((n >> i) & 1);
            cout << bit;
        }
        cout << endl;
    }//end loop
    return 0;
}//end main
