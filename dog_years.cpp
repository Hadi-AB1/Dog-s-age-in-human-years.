/*
 * Dev: Hadi AB
 * Simple program that is being used to calculate a dog age that is 2 years and older.
 */
#include <iostream>

int main() {

    int dog_age = 3;  // This is the age of my dog.
    int early_years = 21; // The first two years of dog's life count as 21 human years.
    int later_years = (dog_age - 2) * 4; // Each following year count as 4 human years.
    int human_years = later_years + early_years; // This will give us my dog's age in human years.
    std::cout << "My name is Mango! " << "Ruff ruff," << "Iam " << human_years << " years old in human years.";

}