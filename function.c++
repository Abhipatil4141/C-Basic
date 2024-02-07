#include<bits/stdc++.h>
using namespace std;
int main(){
    // functions in c++ 

    // Function are set of code which is performs something for you
    //Founction are used to modularise code 
    // Fucntion are use to increse readability
    // Function are used to use same code multiple times 

    // function --> void ,return ,parameterised ,non parameterised 
    // void--> its does not return anything 

    void printName(string name) {
        cout<<"hey"<< name <<endl;
    }
    int main(){
        string name;
        cin>>name;
        printName(name);


        string name2;
        cin>>name2;
        printName(name2);
        return 0;
    }

    // pass by value ---> value are pass in function but value remaines same 
    //pass by refrence --> value of parameter are pass to function with &sign

}