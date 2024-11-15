#include "Animal.h"

Animal::Animal(string name, string habitat, string sound, int weight, int height)
    : nameOfAnimal(name), habitat_area(habitat), sound(sound), weight(weight), height(height) {}

void Animal::displayInformation() const
{
    cout << "Animal: " << nameOfAnimal << "\nHabitat: " << habitat_area << "\nSound: " << sound << "\nWeight: " << weight << " kg" << "\nHeight: " << height << " cm" << endl;
}

void Animal::changeWeight(int _weight)
{
    weight = _weight;
}

void Animal::make_sound() const
{
    cout << sound << endl;
}

Cow::Cow(string name, string habitat, int weight, int height, double milkProduction)
    : Animal(name, habitat, "moo", weight, height), milkProductionInLiters(milkProduction) {}

void Cow::make_sound() const
{
    cout << "The cow says ";
    Animal::make_sound();
}

double Cow::getMilkProduction() const
{
    return milkProductionInLiters;
}

Chicken::Chicken(string name, string habitat, int weight, int height, int eggCount)
    : Animal(name, habitat, "buck buck", weight, height), dailyEggCount(eggCount) {}

void Chicken::make_sound() const
{
    cout << "The chicken says ";
    Animal::make_sound();
}

int Chicken::getEggCount() const
{
    return dailyEggCount;
}

void Chicken::displayInformation() const
{
    Animal::displayInformation();
    cout << "Daily Egg Count " << dailyEggCount << " eggs" << endl; // Display chicken specific info
}

Cat::Cat(string name, string habitat, int weight, int height)
    : Animal(name, habitat, "meow", weight, height) {}

void Cat::make_sound() const
{
    cout << "cat says ";
    Animal::make_sound();
}

void Cat::displayInformation() const
{
    Animal::displayInformation();
}

PetCat::PetCat(string name, string habitat, int weight, int height, string petName)
    : Cat(name, habitat, weight, height), petName(petName) {}

void PetCat::make_sound() const
{
    cout << petName <<" ";
    Cat :: make_sound();
}

void PetCat::displayInformation() const
{
    Cat::displayInformation();
}
