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

    void start(){
        std::cout<<"Vehicle has been started."<< std::endl;
    }

    void stop(){
        std::cout<<"Vehicle has been stopped."<< std::endl;

    }

    void drive(){
        std::cout<<"Vehicle has been driving..."<< std::endl;

    }
};

class Car : public Vehicle{
    public:
        void openSunroof(){
        std::cout<<"sunroof is opening. "<< std::endl;
        }
};
int main(){
    Car item1 = Car();
    item1.setManifacturer("volvo");//set yazılması
    std::cout<<"Vehicle : " << item1.getmanifacturer() << std::endl;

    Vehicle item2 =Vehicle("Scode",2019,"White");
    std::cout<<"Vehicle " << item2.getmanifacturer()<< std::endl;
    return 0;
}