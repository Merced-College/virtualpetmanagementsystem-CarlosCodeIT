#include "Hamster.h"

// Default constructor
Hamster::Hamster() : Pet(), energyLevel(75), wheelSpeed(12.5) {}

// Parameterized constructor
Hamster::Hamster(const std::string& name, const std::string& species, int age, int hungerLevel,
                 int energyLevel, double wheelSpeed)
    : Pet(name, species, age, hungerLevel), energyLevel(energyLevel), wheelSpeed(wheelSpeed) {}

// Accessors
int Hamster::getEnergyLevel() const {
    return energyLevel;
}

double Hamster::getWheelSpeed() const {
    return wheelSpeed;
}

// Mutators
void Hamster::setEnergyLevel(int energyLevel) {
    if (energyLevel >= 0 && energyLevel <= 100) {
        this->energyLevel = energyLevel;
    }
}

void Hamster::setWheelSpeed(double wheelSpeed) {
    if (wheelSpeed >= 0) {
        this->wheelSpeed = wheelSpeed;
    }
}

// Hamster-specific implementation of makeSound
void Hamster::makeSound() const {
    std::cout << getName() << " squeaks adorably: *squeak squeak*!" << std::endl;
}

// Hamster-specific method to run on wheel
void Hamster::runOnWheel() const {
    std::cout << getName() << " runs on the wheel at " << wheelSpeed << " km/h!" << std::endl;
    std::cout << "    Wheel spinning: O-O-O-O-O" << std::endl;
}

// Hamster-specific method to hibernate
void Hamster::hibernate() const {
    std::cout << getName() << " curls up and takes a nap..." << std::endl;
    std::cout << "    Zzzzzzz..." << std::endl;
}

// Hamster-specific implementation of printInfo
void Hamster::printInfo() const {
    Pet::printInfo();  // Call parent's printInfo first
    std::cout << "Energy Level: " << energyLevel << "/100" << std::endl;
    std::cout << "Wheel Speed: " << wheelSpeed << " km/h" << std::endl;
}

// Destructor
Hamster::~Hamster() {}
