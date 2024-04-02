// Animal.h
// dH 4/1/24

/*
The header file contains the class declaration, including its member variables and functions.
Define the structure of the class here, but don't implement (write code for) the methods.
Also called the "interface" file, the header file contains declarations of functions, variables, constants, and
other identifiers.
*/

// Include a guard to prevent multiple inclusions.
#ifndef ZOOKEEPERCHALLENGE_ANIMAL_H
#define ZOOKEEPERCHALLENGE_ANIMAL_H

#include <string>
#include <chrono>

class Animal {

public:
    // This is the constructor. it must have the same name as the class, end in (), and be public.
    Animal();

    // Getter and Setter for name
    void setName(const std::string& newName) { name = newName; }
    std::string getName() const { return name; }

    // Getter and Setter for color
    void setColor(const std::string& newColor) { color = newColor; }
    std::string getColor() const { return color; }

    // Getter and Setter for origin
    void setOrigin(const std::string& newOrigin) { origin = newOrigin; }
    std::string getOrigin() const { return origin; }

    // Getter and Setter for sex
    void setSex(const std::string& newSex) { sex = newSex; }
    std::string getSex() const { return sex; }

    // Getter and Setter for birthDate
    void setBirthDate(const std::chrono::system_clock::time_point& newBirthDate) { birthDate = newBirthDate; }
    std::chrono::system_clock::time_point getBirthDate() const { return birthDate; }

    // Getter and Setter for arrivalDate
    void setArrivalDate(const std::chrono::system_clock::time_point& newArrivalDate) { arrivalDate = newArrivalDate; }
    std::chrono::system_clock::time_point getArrivalDate() const { return arrivalDate; }

    // Getter and Setter for weight
    void setWeight(int newWeight) { weight = newWeight; }
    int getWeight() const { return weight; }

    // Static Getter for numOfAnimals
    static int getNumOfAnimals() { return numOfAnimals; }

    // static means these methods belong to the class (not to an object instantiated from the class)
    static void sayHelloFromTheClass();

    // this method will belong to an object
    void sayGoodbye();


private:
    // static - belongs to the class, not to the objects.
    static int numOfAnimals;

    // Fields needed for the zoo.
    std::string name;
    std::string color;
    std::string origin;
    std::string sex;
    std::chrono::system_clock::time_point birthDate;
    std::chrono::system_clock::time_point arrivalDate;
    int weight;
};

#endif // ZOOKEEPERCHALLENGE_ANIMAL_H
