// fizzbuzz_1_0.cpp
// Diba Mirza
// Fizzbuzz 

#include <iostream>

using namespace std; // Communicate with std i/o

int main(){
    int num; //Declaring the variable num
    cout<<"Enter a number ";
    cin>>num;
    if ((num%3)!=0) {

        cout<<num <<endl;

    } else {
        cout<<"fizz"<<endl;
    }
    return 0;
}

