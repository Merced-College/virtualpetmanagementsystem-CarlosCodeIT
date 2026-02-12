#include "Dragon.h"

// Default constructor
Dragon::Dragon() : Pet(), wingSpan(5.5), fireIntensity(7) {}

// Parameterized constructor
Dragon::Dragon(const std::string& name, const std::string& species, int age, int hungerLevel,
               double wingSpan, int fireIntensity)
    : Pet(name, species, age, hungerLevel), wingSpan(wingSpan), fireIntensity(fireIntensity) {}

// Accessors
double Dragon::getWingSpan() const {
    return wingSpan;
}

int Dragon::getFireIntensity() const {
    return fireIntensity;
}

// Mutators
void Dragon::setWingSpan(double wingSpan) {
    if (wingSpan > 0) {
        this->wingSpan = wingSpan;
    }
}

void Dragon::setFireIntensity(int fireIntensity) {
    if (fireIntensity >= 1 && fireIntensity <= 10) {
        this->fireIntensity = fireIntensity;
    }
}

// Dragon-specific implementation of makeSound
void Dragon::makeSound() const {
    std::cout << getName() << " roars ferociously!" << std::endl;
}

// Dragon-specific method to breathe fire
void Dragon::breatheFire() const {
    std::cout << getName() << " breathes fire with intensity " << fireIntensity << "/10!" << std::endl;
    std::cout << "    🔥🔥🔥🔥🔥" << std::endl;
}

// Dragon-specific method to fly
void Dragon::fly() const {
    std::cout << getName() << " soars through the sky with " << wingSpan << "m wingspan!" << std::endl;
    std::cout << "    ✈️✈️✈️" << std::endl;
}

// Dragon-specific implementation of printInfo
void Dragon::printInfo() const {
    Pet::printInfo();  // Call parent's printInfo first
    std::cout << "Wing Span: " << wingSpan << " meters" << std::endl;
    std::cout << "Fire Intensity: " << fireIntensity << "/10" << std::endl;
}

// Destructor
Dragon::~Dragon() {}
