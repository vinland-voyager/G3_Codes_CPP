#include <iostream>
using namespace std;

int main() {
    int n;
    system("cls");
    cout << "Enter a number: ";
    cin >> n;

    if(n>0){
    cout << n <<" is positive."<<endl;
    }
    else if(n<0){
        cout << n <<" is negative."<<endl;
    }
    else{
        cout << n <<" is zero."<<endl;
    }

    return 0;
}