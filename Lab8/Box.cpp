#pragma once

#include "Box.h"

Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}
Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}
Box::~Box(){

}
double Box::GetVolume(){
    return length*breadth*height;
}
void Box::SetLength(double Len){
    length = Len;
}
void Box::SetBreadth(double bre){
    breadth = bre;
}
void Box::SetHeight(double hei){
    height = hei;
}
  Box Box::operator+(const Box& b){
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;

}
int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    volume = Box1.GetVolume();
    cout<<"Volume of Box1: "<<volume<< endl;

    volume = Box2.GetVolume();
    cout<<"Volume of Box2: "<<volume<<endl;
    Box3 = Box1 + Box2;

    volume = Box3.GetVolume();
    cout<<"Volume of Box3: "<<volume<<endl;
    
    return 0;
}
