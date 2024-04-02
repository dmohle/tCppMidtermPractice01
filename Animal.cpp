#include "Animal.h"
#include <iostream>
using namespace std;

int Animal::numOfAnimals = 0;


// This is the constructor.
Animal::Animal() : weight(9999), name("no name") {

    numOfAnimals++;
    cout << "\n A new animal was created!\n";
}

void Animal::sayHelloFromTheClass() {
    cout << "\n HELLO from the Animal class!\n";
}

void Animal::sayGoodbye() {
    cout << "\n Goodbye from an animal! \n";
}




