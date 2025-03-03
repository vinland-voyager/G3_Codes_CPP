#include <iostream>
using namespace std;

int main() {
    double m;

    cout<<"Enter your marks= ";
    cin>>m;

    if(m<=100 && m>=95){
        cout<<"You have been selected for 100 percentage scholarship";
        cout<<"\nYou have been graded A+";
    }
    else if(95>m && m>=90){
        cout<<"You have been selected for 75 percentage scholarship";
        cout<<"\nYou have been graded A";
    }
    else if(90>m && m>=80){
        cout<<"You have been selected for 50 percentage scholarship";
        cout<<"\nYou have been graded B+";
    }
    else if(80>m && m>=70){
        cout<<"You have been selected for 40 percentage scholarship";
        cout<<"\nYou have been graded B";
    }
    else{
        cout<<"You have not been selected for any scholarship";
        if(70>m && m>=60){
            cout<<"\nYou have been graded C";
        }
        else if(60>m && m>=50){
            cout<<"\nYou have been graded D";
        }
        else if(50>m && m>=40){
            cout<<"\nYou have been graded P";
        }
        else{
            cout<<"\nYou have been graded F";
        }
    }

return 0;  
}

