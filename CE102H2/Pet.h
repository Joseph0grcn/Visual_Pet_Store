#pragma once
#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()#pragma once

// Enum to represent different types of pets
enum PetType {
    DOG,
    CAT,
    BIRD,
    FISH
};

// Class representing a pet
class Pet {
private:
    std::string name;
    PetType type;
    int age;
    int hungerLevel;
    int happinessLevel;
public:
    // Constructor
    Pet(std::string n, PetType t, int a);

    // Function to simulate feeding
    int feed();

    // Function to simulate playing
    int play(int playTime);

    // Function to display pet status
    void displayStatus();
};

#endif // PET_H
