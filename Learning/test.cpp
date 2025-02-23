#include <iostream>

using namespace std;

class dog {
public:
    string name ;
    int age ;
    string favoriteThingToDo = "EAT";

    void run(){cout << "Dog is running\n";}
    void eat(){cout<< "dog is eating\n";}
};

int main() {
    dog dog1;
    dog1.name = "ROY";
    dog1.age = 9;

    cout << dog1.name << endl;
    cout << dog1.age << endl;
    cout << dog1.favoriteThingToDo << endl;

    dog1.run();
    dog1.eat();
}