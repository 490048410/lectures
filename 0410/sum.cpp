//simple_loop.cpp

#include<iostream>
using namespace std;

int main(){
    int sum =0;
    int n;
    cout<<"Enter the number of terms"<<endl;
    cin>> n ;
    for(int i= 1; i<=n; i++){
        sum = sum + i;
    }
    cout<<" Sum = "<< sum << endl;
    
    return 0;
}

