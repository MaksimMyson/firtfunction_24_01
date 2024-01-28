#include "dog.h"
#include "cat.h"
#include "parrot.h"
#include "hamster.h"

int main() {
    // Create instances of different pets
    Dog myDog("Buddy");
    Cat myCat("Whiskers");
    Parrot myParrot("Polly");
    Hamster myHamster("Nibbles");

    // Display information about each pet
    myDog.Show();
    myDog.Type();
    myDog.Sound();
    std::cout << std::endl;

    myCat.Show();
    myCat.Type();
    myCat.Sound();
    std::cout << std::endl;

    myParrot.Show();
    myParrot.Type();
    myParrot.Sound();
    std::cout << std::endl;

    myHamster.Show();
    myHamster.Type();
    myHamster.Sound();

    return 0;
}
