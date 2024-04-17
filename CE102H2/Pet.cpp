#include "Pet.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Constructor
Pet::Pet(std::string n, PetType t, int a) : name(n), type(t), age(a), hungerLevel(0), happinessLevel(50) {}

// Function to simulate feeding
int Pet::feed() {
    int increase = rand() % 20 + 1; // Random increase in hunger level
    hungerLevel -= increase;
    return hungerLevel;
}

// Function to simulate playing
int Pet::play(int playTime) {
    int increase = rand() % 40 + 1; // Random increase in happiness level
    happinessLevel += increase / 2;
    hungerLevel += increase;
    return happinessLevel;
}

// Function to display pet status
void Pet::displayStatus() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Type: ";
    switch (type) {
    case DOG:
        std::cout << "Dog";
        break;
    case CAT:
        std::cout << "Cat";
        break;
    case BIRD:
        std::cout << "Bird";
        break;
    case FISH:
        std::cout << "Fish";
        break;
    }
    std::cout << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Hunger Level: " << hungerLevel << std::endl;
    std::cout << "Happiness Level: " << happinessLevel << std::endl;
}
