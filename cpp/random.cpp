#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        
        Car(string b, float m) {
            brand = b;
            mileage = m;
            cout << brand << " is created \n";
        }
        
        Car(string br) {
            brand = br;
            cout << brand << " is created \n";
        }
        
        ~Car() {
            cout << brand << " is dead \n";
        }
        
        
        void makeNoise() {
            cout << "Beep, beep \n";
        };
        
    
    private:
        float mileage = 10.2;
};

int main() {
    Car car1("Dacia", 19200);
    car1.makeNoise();
    
    Car* car2 = new Car("Mini");
    car2->makeNoise();
    delete car2;

    return 0;
}