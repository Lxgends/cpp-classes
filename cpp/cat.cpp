#include <iostream>
using namespace std;

class Cat{
    public:
        string name;
        
        Cat(string n, int a){
            name = n;
            age = a;
        };
        
        void birthday(int a){
            age++;
        };
        
        void meow(){
            cout << "Meow! \n";
        };
        
    private:
        int age;
};

int main() {
    Cat* cat1 = new Cat("Mincis", 2);
    cat1->meow();

    return 0;
}