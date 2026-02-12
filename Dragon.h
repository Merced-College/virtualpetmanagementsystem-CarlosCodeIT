#ifndef DRAGON_H
#define DRAGON_H

#include "Pet.h"

class Dragon : public Pet {
private:
    double wingSpan;      // in meters
    int fireIntensity;    // 1-10 scale

public:
    // Constructors
    Dragon();
    Dragon(const std::string& name, const std::string& species, int age, int hungerLevel, 
           double wingSpan, int fireIntensity);

    // Accessors
    double getWingSpan() const;
    int getFireIntensity() const;

    // Mutators
    void setWingSpan(double wingSpan);
    void setFireIntensity(int fireIntensity);

    // Dragon-specific methods
    void breatheFire() const;
    void fly() const;

    // Override parent methods
    void makeSound() const override;
    void printInfo() const override;

    virtual ~Dragon();
};

#endif
