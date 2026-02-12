#include "Cat.h"

// Default constructor
Cat::Cat() : Pet(), favoriteToy("Unknown") {}

// Parameterized constructor
Cat::Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy)
    : Pet(name, species, age, hungerLevel), favoriteToy(favoriteToy) {}

// Accessor
std::string Cat::getFavoriteToy() const {
    return favoriteToy;
}

// Mutator
void Cat::setFavoriteToy(const std::string& favoriteToy) {
    this->favoriteToy = favoriteToy;
}

// Cat-specific implementation of makeSound
void Cat::makeSound() const {
    std::cout << getName() << " meows!" << std::endl;
}

// Cat-specific implementation of printInfo
void Cat::printInfo() const {
    Pet::printInfo();  // Call parent's printInfo first
    std::cout << "Favorite Toy: " << favoriteToy << std::endl;
}

// Destructor
Cat::~Cat() {}
