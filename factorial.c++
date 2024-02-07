#include<bits/stdc++.h>

using namespace std ;

// Function to calculate factorial using recursion

unsigned long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main() {
    // int num;
    // cout << "Enter a non-negative integer: ";
    // cin >> num;
    
    // if (num < 0) {
    //     cout << "Factorial is not defined for negative numbers." << endl;
    // } else {
    //     unsigned long long fact = factorial(num);
    //     cout << "Factorial of " << num << " is: " << fact << endl;
    // }
    
    int num ;
    cout<<"Enter a Non-Negetive integer :";
    cin>>num ;

    if(num<0){
        cout<<"Factorial is not defined for negetive numbers."<<endl;
    }else{
        unsigned long long fact = factorial(num);
        cout<<"Factorial of" << num << "is: " <<fact<<endl;
    }
    return 0;
}
