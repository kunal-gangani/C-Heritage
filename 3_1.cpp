#include<iostream>
using namespace std;
class Shape {
public:
    int width;
    int height;
	Shape() {
        cout<<"Enter Width for your Shape: ";
        cin>>this->width;
        cout<<"Enter Height for your Shape: ";
        cin>>this->height;
    }
};

class Triangle : public Shape {
public:
    void Tri(){
        int area =(this->width * this->height)/2;
        cout<<"The Area of Triangle is "<<area<<endl;
    }
};
class Rectangle : public Shape{
public:
    void Rect(){
        int area =this->width * this->height;
        cout<<"The Area of Rectangle is "<<area<<endl;
    }
};

int main() {
    Rectangle r;  
    Triangle t;  
    r.Rect();
    t.Tri();
    return 0;
}
