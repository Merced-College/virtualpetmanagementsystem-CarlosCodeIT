#include "Dog.h"

// Default constructor
Dog::Dog() : Pet(), breed("Unknown") {}

// Parameterized constructor
Dog::Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed)
    : Pet(name, species, age, hungerLevel), breed(breed) {}

// Accessor
std::string Dog::getBreed() const {
    return breed;
}

// Mutator
void Dog::setBreed(const std::string& breed) {
    this->breed = breed;
}

// Dog-specific implementation of makeSound
void Dog::makeSound() const {
    std::cout << getName() << " barks!" << std::endl;
}

// Dog-specific implementation of printInfo
void Dog::printInfo() const {
    Pet::printInfo();  // Call parent's printInfo first
    std::cout << "Breed: " << breed << std::endl;
}

// Destructor
Dog::~Dog() {}
