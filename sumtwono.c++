#include<bits/stdc++.h>
using namespace std;
 

int sum (int num1 ,int num2){
    int num3 = num1+ num2;
    return num3;
}
int main(){
    int num1 ,num2;
    cin>>num1>>num2;
    int ans = sum(num1,num2);
    cout<< ans;
    return 0;

}