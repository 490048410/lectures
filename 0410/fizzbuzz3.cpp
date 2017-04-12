// fizzbuzz_3_0.cpp
// Diba Mirza
// Fizzbuzz 

#include <iostream>

using namespace std; // Communicate with std i/o

int main(){
    int n;
    int num; //Declaring the variable num
    cout<<"Enter the number of terms ";
    cin>>n;
    for(num = 1; num <=n; num++){
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
    }

    return 0;
}

