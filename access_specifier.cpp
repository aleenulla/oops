#include<iostream>
using namespace std;


class Car{
    public:
        string brand;
    private:
        int year;

    public:
        Car(string b , int y){
            brand = b;
            year = y;
        }

        void display(){
            cout<<"Brand: "<<brand<<"\nyear: "<<year;
        }

};


int main(){

    Car c1("Toyota",2024);
    c1.brand = "Tesla";

    cout << "Brand: "<<c1.brand <<endl;

    // cout<<"year: "<<c1.year<<endl;

    c1.display();


    return 0;
}
