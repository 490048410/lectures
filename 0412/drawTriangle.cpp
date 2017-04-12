//drawSquare.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

void drawTriangle(int width);// Function declaration


void drawTriangle(int width){// Function definition
   
   for(int j=0; j< width;j++){
    for(int i = 0 ; i<(j+1); i++){
        cout<<"*";
    }
    cout<<endl;
   }

}


int main(int argc, char *argv[]){
    int n;
    cout<<"Number of arguments: "<<argc<<endl;
    for (int i=0; i< argc; i++)
        cout<<"Argument "<<i<<" is "<<argv[i]<<endl;
    if(argc !=2){
        cerr<<" Usage : "<< argv[0]<<" <width of triangle"<<endl;
        exit(1);
    }
    n= atoi(argv[1]);
    drawTriangle(n);
}
