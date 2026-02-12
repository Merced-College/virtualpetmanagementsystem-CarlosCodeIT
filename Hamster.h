#ifndef HAMSTER_H
#define HAMSTER_H

#include "Pet.h"

class Hamster : public Pet {
private:
    int energyLevel;      // 1-100 scale
    double wheelSpeed;    // in km/h

public:
    // Constructors
    Hamster();
    Hamster(const std::string& name, const std::string& species, int age, int hungerLevel,
            int energyLevel, double wheelSpeed);

    // Accessors
    int getEnergyLevel() const;
    double getWheelSpeed() const;

    // Mutators
    void setEnergyLevel(int energyLevel);
    void setWheelSpeed(double wheelSpeed);

    // Hamster-specific methods
    void runOnWheel() const;
    void hibernate() const;

    // Override parent methods
    void makeSound() const override;
    void printInfo() const override;

    virtual ~Hamster();
};

#endif
