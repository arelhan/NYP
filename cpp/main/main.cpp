#include <iostream>
using std::string;
class Vehicle{
protected:
    string manufacturer;
    int year;
    string color;
public:
    string getmanufacturer(){
        return manufacturer;
    }

    void setManufacturer(string value){

        this-> manufacturer=value;

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
    Vehicle(string manufacturer, int year, string color) 
     : Vehicle(){
        this->manufacturer = manufacturer;
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

        Car(){
            std::cout<<"\nAn instance has been derived from Car."<< std::endl;
        }
        Car(string manufacturer,int year,string color )
            : Vehicle( manufacturer, year, color)
        {
            std::cout<<"\nAn instance with full parameters has been derived from Car."<< std::endl;
        }
        void openSunroof(){
        std::cout<<"sunroof is opening. "<< std::endl;
        }
};
int main(){
    Car item1 = Car();
    item1.setManufacturer("volvo");//set yazılması
    std::cout<<"Vehicle : " << item1.getmanufacturer() << std::endl;

    Vehicle item2 =Vehicle("Scode",2019,"White");
    std::cout<<"Vehicle " << item2.getmanufacturer()<< std::endl;

    Car item3 = Car("Mercedes",2020,"ice blue");
    std::cout<<"Vehicle : " << item3.getmanufacturer() << std::endl;

    return 0;
}