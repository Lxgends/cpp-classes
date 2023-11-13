#include <iostream>
using namespace std;

class Dog{
    public:
        string name;
        Dog(string n, int a){
            name = n;
            age = a;
        }
        
    void makeNoise() {
        cout << "Woof, woof \n";
    }
    
    void birthday(int a){
        age = a++;
    }
    private:
        int age;

};

int main() {
    Dog* dog1 = new Dog("Reksis", 6);
    dog1->makeNoise();
    
    return 0;
}