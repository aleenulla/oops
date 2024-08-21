#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
        

        Car(string b, string m, int y){
            //constructor
            brand = b;
            model = m;
            year = y;
            cout<<"object is created..."<<endl;
        }

        ~Car(){
            cout<<"object is destroyed..."<<endl;
        }

        void display(){
            cout<<"Brand: "<<brand <<","<<model<<","<<year<<"has started.!\n";
        }
};

int main(){

    Car c("Toyota","R7",2023);

    c.display();
    return 0;
}