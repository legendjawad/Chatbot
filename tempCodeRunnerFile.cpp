//Inheritance: 
In inheritance the object of derived class are the object of Base class and the object of the base class are not the object of dervied class //


#include<iostream>
using namespace std;
class Vehicle{
int drive;
int door;
public:
void show(){
    cout<<"Start the car engine";
}
};
class Car:public Vehicle{
    int stop;
    int brake;
public:
void display(){
    cout<<"Welcome to audi";
}
};
int main(){
    Vehicle v1;
    v1.show():
    
}

