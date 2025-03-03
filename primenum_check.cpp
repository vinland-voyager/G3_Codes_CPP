#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n, prog = 1;
    cout << "Enter a number: ";
    cin >> n; 

    if (n < 2) {
        prog = 0; 
    } 
    else {
        for (int i = 2; i <= sqrt(n); i++) { 
            if (n % i == 0) {
                prog = 0; 
                break;
            }
        }
    }

    cout << (prog ? "prime" : "not prime") << endl; 

    return 0;
}
