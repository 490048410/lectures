//swapFuncs.cpp
//Swap function to demonstrate pass by value, reference and address

#include <iostream>
using namespace std;

void swap(int& x, int& y){
    int tmp = x;
    x = y;
    y = tmp;
}

//Precondition: x and y are non null pointers
//Postcondition: values pointed to by x and y are swapped 
/*void swap(int* x, int* y){
    if(!x || !y)
        return;

    int tmp = *x;
    *x = *y;
    *y = tmp;
}
*/
int main(){
    int a = 30, b=50;
    cout<<"Before swap"<<endl;
    cout<< "a = "<<a <<" b = "<<b<<endl;
    swap(a, b );

    cout<<"After swap"<<endl;
    cout<< "a = "<<a <<" b = "<<b<<endl;
}

