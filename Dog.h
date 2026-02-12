// teamate was estabon 

#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
private:
    std::string breed;

public:
    // Constructors
    Dog();
    Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed);

    // Accessor
    std::string getBreed() const;

    // Mutator
    void setBreed(const std::string& breed);

    // Dog-specific methods
    void makeSound() const override;
    void printInfo() const override;

    virtual ~Dog();
};

#endif