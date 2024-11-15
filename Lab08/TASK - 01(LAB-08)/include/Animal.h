#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string nameOfAnimal, habitat_area, sound;
    int weight, height;

public:
    Animal(string name, string habitat, string sound, int weight, int height);
    void displayInformation() const;
    void changeWeight(int _weight);
    void make_sound() const;
};

class Cow : public Animal
{
private:
    double milkProductionInLiters;

public:
    Cow(string name, string habitat, int weight, int height, double milkProduction);
    void make_sound() const;
    double getMilkProduction() const;
};

class Chicken : protected Animal
{
private:
    int dailyEggCount;

public:
    Chicken(string name, string habitat, int weight, int height, int eggCount);
    void make_sound() const;
    int getEggCount() const;
    void displayInformation() const;
};

class Cat : private Animal
{
public:
    Cat(string name, string habitat, int weight, int height);
    void make_sound() const;
    void displayInformation() const;
};

class PetCat : public Cat
{
private:
    string petName;

public:
    PetCat(string name, string habitat, int weight, int height, string petName);
    void make_sound() const;
    void displayInformation() const;
};

#endif
