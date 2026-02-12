#include <iostream>
#include <vector>
#include "Dog.h"
#include "Cat.h"
#include "Dragon.h"
#include "Hamster.h"

int main() {
    // Create a vector to store all pets polymorphically
    std::vector<Pet*> pets;
    
    // Create individual pet objects
    Dog* myDog = new Dog("Rex", "Dog", 3, 6, "Golden Retriever");
    Cat* myCat = new Cat("Whiskers", "Cat", 2, 4, "Yarn Ball");
    Dragon* myDragon = new Dragon("Inferno", "Dragon", 150, 8, 7.5, 9);
    Hamster* myHamster = new Hamster("Cheeks", "Hamster", 1, 3, 85, 15.0);
    
    // Add all pets to the vector (polymorphic storage)
    pets.push_back(myDog);
    pets.push_back(myCat);
    pets.push_back(myDragon);
    pets.push_back(myHamster);
    
    std::cout << "===== Pet Information =====" << std::endl;
    
    // Loop through all pets polymorphically
    for (size_t i = 0; i < pets.size(); i++) {
        std::cout << "\n--- Pet " << (i + 1) << " ---" << std::endl;
        pets[i]->printInfo();     // Polymorphic call
        pets[i]->makeSound();     // Polymorphic call - each pet has unique sound
    }
    
    // Demonstrate unique methods for each pet type
    std::cout << "\n===== Pet Special Abilities =====" << std::endl;
    
    std::cout << "\nDog Special Ability:" << std::endl;
    std::cout << "Breed: " << myDog->getBreed() << std::endl;
    
    std::cout << "\nCat Special Ability:" << std::endl;
    std::cout << "Favorite Toy: " << myCat->getFavoriteToy() << std::endl;
    
    std::cout << "\nDragon Special Abilities:" << std::endl;
    myDragon->breatheFire();
    myDragon->fly();
    
    std::cout << "\nHamster Special Abilities:" << std::endl;
    myHamster->runOnWheel();
    myHamster->hibernate();
    
    // Polymorphic loop to call makeSound() on all pets
    std::cout << "\n===== All Pets Making Sounds (Polymorphic) =====" << std::endl;
    for (size_t i = 0; i < pets.size(); i++) {
        pets[i]->makeSound();
    }
    
    // Comparing pets
    std::cout << "\n===== Comparison =====" << std::endl;
    int result = myDog->compareTo(*myCat);
    if (result < 0) std::cout << myDog->getName() << " comes before " << myCat->getName() << std::endl;
    else if (result > 0) std::cout << myDog->getName() << " comes after " << myCat->getName() << std::endl;
    else std::cout << "Both pets have the same name." << std::endl;
    
    // Clean up dynamically allocated memory
    for (Pet* pet : pets) {
        delete pet;
    }
    
    return 0;
}
