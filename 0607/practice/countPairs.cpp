#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


int countPairs(char *str, int len){
    if(len <3)
        return 0;
    if(str[0] == str[2])
        return 1+countPairs(str+1, len-1);

    return countPairs(str+1, len-1);

}

int main(int argc, char *argv[]){
    if(argc != 2){
        cerr<<"Usage : "<<argv[0]<<" <string>"<<endl;
        exit(1);
    }
    cout<<"The number of pairs  = "<<countPairs(argv[1], strlen(argv[1]))<<endl;
}
