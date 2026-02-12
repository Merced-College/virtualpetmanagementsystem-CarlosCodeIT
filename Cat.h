#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
private:
    std::string favoriteToy;

public:
    // Constructors
    Cat();
    Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy);

    // Accessor
    std::string getFavoriteToy() const;

    // Mutator
    void setFavoriteToy(const std::string& favoriteToy);

    // Cat-specific methods
    void makeSound() const override;
    void printInfo() const override;

    virtual ~Cat();
};

#endif
