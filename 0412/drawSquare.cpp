//drawSquare.cpp

#include <iostream>
using namespace std;

void drawSquare(int width);// Function declaration


void drawSquare(int width){// Function definition
   
   for(int j=0; j< width;j++){
    for(int i = 0 ; i<width; i++){
        cout<<"*";
    }
    cout<<endl;
   }

}


int main(){
    int n;
    cout<<"Enter the width of the square"<<endl;
    cin>>n;
    drawSquare(n);
    drawSquare(2*n);
    drawSquare(3*n);
}
