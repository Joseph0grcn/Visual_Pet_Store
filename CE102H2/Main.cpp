#include "Pet.h"

using namespace std;



int main() {
    // Seed the random number generator
    srand(time(0));

    // Creating pets
    Pet pet1("Buddy", DOG, 3);
    Pet pet2("Whiskers", CAT, 5);
    Pet pet3("Tweety", BIRD, 2);

    int choice;
    while (true) {
        // Display menu
        std::cout << "Choose an option:" << std::endl;
        std::cout << "1. Feed a pet" << std::endl;
        std::cout << "2. Play with a pet" << std::endl;
        std::cout << "3. Display the status of a pet" << std::endl;
        std::cout << "4. Exit the program" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;


        switch (choice) {
        case 1: {
            string petChoice;
            cout << "Select the pet to feed (Buddy, Whiskers, Tweety): ";
            cin >> petChoice;
            if (petChoice == "Buddy") {
                cout << "Feeding Buddy... " << endl;
                cout << "Hunger level increased by: " << pet1.feed() << endl;
                cout << "\n";
                break;
            }
            else if (petChoice == "Whiskers")
            {
                cout << "Feeding Whiskers " << endl;
                cout << "Hunger level increased by: " << pet2.feed() << endl;
                cout << "\n";
                break;
            }
            else if (petChoice == "Tweety")
            {
                cout << "Feeding Tweety..." << endl;
                cout << "Hunger level increased by: " << pet3.feed() << endl;
                cout << "\n";
                break;
            }
            else
            {
                cout << "Invalid choice." << endl;
                cout << "\n";
                break;
            }

        }
        case 2: {
            string petChoice;
            int playTime;
            cout << "Select the pet to play with (Buddy, Whiskers, Tweety): ";
            cin >> petChoice;
            cout << "Enter playtime in minutes: ";
            cin >> playTime;
            if (petChoice == "Buddy") {
                cout << "Playing with Buddy..." << endl;
                cout << "Happiness level increased by: " << pet1.play(playTime) << endl;
                cout << "\n";
                break;
            }
            else if (petChoice == "Whiskers")
            {
                cout << "Playing with Whiskers..." << endl;
                cout << "Happiness level increased by: " << pet2.play(playTime) << endl;
                cout << "\n";
                break;
            }
            else if (petChoice == "Tweety")
            {
                cout << "Playing with Tweety..." << endl;
                cout << "Happiness level increased by: " << pet3.play(playTime) << endl;
                cout << "\n";
                break;
            }
            else
            {
                cout << "Invalid choice." << endl;
                cout << "\n";
                break;
            }


        }
        case 3: {
            string petChoice;
            cout << "Select the pet to display status (Buddy, Whiskers, Tweety):: ";
            cin >> petChoice;
            if (petChoice == "Buddy") {
                cout << "Status of Buddy:" << endl;
                pet1.displayStatus();
                cout << "\n";
                break;
            }
            else if (petChoice == "Whiskers")
            {
                cout << "Status of Whiskers:" << endl;
                pet2.displayStatus();
                cout << "\n";
                break;
            }
            else if (petChoice == "Tweety")
            {
                cout << "Status of Tweety:" << endl;
                pet3.displayStatus();
                cout << "\n";
                break;
            }
            else
            {
                cout << "Invalid choice." << endl;
                cout << "\n";
                break;
            }

        }
        case 4:
            cout << "Exiting program..." << endl;
            cout << "Thank you for visiting the Virtual Pet Store!..." << endl;
            cout << "\n";
            return 0;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
            cout << "\n";
            break;
        }
    }

    return 0;
}
