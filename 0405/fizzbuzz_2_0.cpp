// fizzbuzz_2_0.cpp
// Diba Mirza
// Fizzbuzz 

#include <iostream>

using namespace std; // Communicate with std i/o

int main(){
    int num; //Declaring the variable num
    cout<<"Enter a number ";
    cin>>num;
    if (num%3==0) {
        if(num%5 ==0){
            cout<<"fizzbuzz" <<endl;
        }
        else {
            cout<<"fizz"<<endl;
        }
    } else if(num%5 ==0) {
        cout<<"buzz"<<endl;
    }else{
        cout<<num<<endl;
    }

    return 0;
}

