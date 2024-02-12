#include <iostream>
using std::string;
class Vehicle{
private:
    string manifacturer;
    int year;
    string color;
public:
    string getmanifacturer(){
        return manifacturer;
    }

    void setManifacturer(string value){

        this-> manifacturer=value;

    }
    int getYear(){
        return this->year;
    }

    void setYear(int value){
        this-> year=value;
    }
    
    string getColor(){
        return this-> color;
    }

    void setColor(string value){
        this-> color=value;
    }

    Vehicle(){
        std::cout<<"\nAn instance has been derived from Vehicle.";    
    }
    Vehicle(string manifacturer, int year, string color) : Vehicle(){
        this->manifacturer = manifacturer;
        this->year=year;
        this->color=color;

    }
};
int main(){
    Vehicle item1 = Vehicle();
    item1.setManifacturer("volvo");//set yazılması
    std::cout<<"Vehicle : " << item1.getmanifacturer() << std::endl;

    Vehicle item2 =Vehicle("Scode",2019,"White");
    std::cout<<"Vehicle " << item2.getmanifacturer()<< std::endl;
    return 0;
}