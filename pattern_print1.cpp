#include <iostream>
using namespace std;

int main(){
    system("cls");
    int n;
    int a=1;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=1; i <= n; i++) {
        for(int j=1; j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }

    for(int i=1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            cout << " "; 
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*"; 
        }
        cout << endl;

    }
    return 0;
}