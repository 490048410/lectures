//scores.cpp
//
#include <iostream>
#include <cstdlib>
using namespace std;

#define ARR_SIZE 5

double getAverage(int arr[], int len){
}

int main(int argc, char *argv[]){
    int scores[ARR_SIZE];
    //Assign each value passed to main to scores
    if(argc != ARR_SIZE+1){
        cerr<<"Usage "<<argv[0]<<" 5 numbers"<<endl;
        exit(1);
    }

    for(int i= 1; i< argc; i++){
        scores[i-1]= atoi(argv[i]);
    }

    double sum = 0.0;
    for(int i=0; i< ARR_SIZE; i++){
        sum+= scores[i];
    }
    cout<<"Average of all the scores is "<< sum/ARR_SIZE<<endl;
}
