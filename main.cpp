#include <iostream>
#include "Animal.h"
#include "Hyena.h"

using namespace std;

int main() {
    cout << "\n\nWelcome to Zoo Keeper's Challenge\n\n";

    // Let's create a new Animal on the stack;
    Animal myNewAnimal;

    myNewAnimal.sayGoodbye();

    // Call a method on the new Animal.
    Animal::sayHelloFromTheClass();

    // Now let's create another animal on the heap.
    // (a region of memory that is not the stack)
    // Notice the keyword "new"
    Animal* myHeapAnimal = new Animal();

    myHeapAnimal->setOrigin("from somewhere");
    cout << "\n my heap animal is from... " << myHeapAnimal->getOrigin();


    // Use the arrow (->) to dereference the pointer and access the member function (method)
    cout << "\n creating an animal on the heap... \n";
    myHeapAnimal->sayGoodbye();

    // Create a new hyena on the heap!
    Hyena* heapHyena = new Hyena();

    // Use the object
    heapHyena->laugh(); // Call a method specific to Hyena
    heapHyena->sayGoodbye(); // Call an inherited method from Animal

    // Output the heap hyena's weight (where did this value come from?)
    cout << "\n The new heap hyena weighs: " << heapHyena->getWeight() << " pounds!\n";

    // What is the hyena's name, and where did it get its name?
    cout << "\n The heap hyena's name is: " << heapHyena->getName() << "\n\n";

    // Once done with the object, delete it to free the heap memory
    delete heapHyena;


    cout << "Number of animals: " << Animal::getNumOfAnimals() << endl;

    return 0;
}

