//pointTest.cpp
//
#include <iostream>
#include "shapes.h"

using namespace std;

void setPoint(Point& q, double xx, double yy){
    q.x = xx;
    q.y = yy;

}

void swapPoints(Point *q1, Point *q2){
    Point tmp = *q1;
    *q1 = *q2;
    *q2 = tmp;

}


void printPoint(Point q){
    cout <<" X: "<<q.x <<" Y: "<<q.y<<endl;
}

int main(){
    Point p1, p2;
    setPoint(p1, 100, 200);
    setPoint(p2, 300, 500);
    printPoint(p1);
    printPoint(p2);
    swapPoints(&p1, &p2);
    printPoint(p1);
    printPoint(p2);


}
