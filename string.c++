#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s = "Tomato";
    cout<<s[2]<<endl;
    int len = s.size();
    cout<<s[len-1];
    s[len-1] = 'z';
    cout<<s[len-1];
    return 0;
}