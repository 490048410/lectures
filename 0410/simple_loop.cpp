//simple_loop.cpp

#include<iostream>
using namespace std;

int main(){
    int start, finish;
    cout<<"Enter limits of the sequence"<<endl;
    cin>> start >> finish;
    cout << start;
    for(int i= start+1; i<=finish;i++){
        cout<< ", "<<i;
    }
    cout<<endl;
    
    return 0;
}

