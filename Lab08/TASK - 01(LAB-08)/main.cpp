#include "Animal.h"

int main() {
    Cow cow("Inky", "Farm", 500, 150, 20.5);
    cow.displayInformation();
    cow.make_sound();
    cout << "Milk Production: " << cow.getMilkProduction() << " liters per day" << endl;

    Chicken chicken("Pinky", "Farm", 3, 40, 10);
    chicken.make_sound();
    chicken.displayInformation();

    Cat cat("Ponky", "House", 4, 25);
    cat.make_sound();
    cat.displayInformation();

    PetCat petCat("Donkey", "House", 5, 30,"Donkey");
    petCat.make_sound();
    petCat.displayInformation();

    return 0;
}
