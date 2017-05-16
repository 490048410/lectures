//pointTest.cpp
//
#include <iostream>
#include "shapes.h"

using namespace std;

void setPoint(Point* q, double xx, double yy){
    q->x = xx;
    q->y = yy;

}


void printPoint(Point q){
    cout <<"Color: "<<q.color<<" X: "<<q.x <<" Y: "<<q.y<<endl;
}


Point getAverage( Point arr[], int len){
     Point avg={"Black", 0, 0};
     if(len==0)
         return avg;
     for(int i=0; i< len; i++){
         avg.x = avg.x + arr[i].x;
         avg.y = avg.y + arr[i].y;
     }
     avg.x/= len;
     avg.y/= len;
     return avg;

}


int main(){
    Point pts[3]={{"Red", 100, 200}, {"Blue", 300, 400}, {"Green", 50, 50}};
    for(int i =0; i< 3; i++){
       //cout <<"Color: "<<pts[i].color<<" X: "<<pts[i].x <<" Y: "<<pts[i].y<<endl;
       printPoint(pts[i]);
    }


    cout<<"\n\n Averaged point"<<endl;
    Point result = getAverage(pts, 3);
    printPoint(result);

}
