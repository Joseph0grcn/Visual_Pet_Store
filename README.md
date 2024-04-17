# CE102H2 a virtual Pet Store
## Description:
You are tasked with creating a C++ program for managing a virtual pet store. The program should
implement a simple user interface and utilize loops, if-else statements, and input-output functions. Your
objective is to design and implement the following structure:
## Pet Class:
### ✓ Attributes:
- name: string (private) \n
- type: string (private)
- age: integer (private)
- hungerLevel: integer (private)
- happinessLevel: integer (private)
### ✓ Enum Definition:
Create an enum to represent different types of pets. The enum should include options such as
"DOG", "CAT", "BIRD", etc., corresponding to common types of pets that can be managed in the
virtual pet store program. Use this enum to specify the type of each pet when creating instances of
the Pet class.
## ✓ Member Functions:
- Constructor:
- Parameters: name (string), type (string), age (integer)
- Functionality: Initializes the pet with the provided details and default hunger and
happiness levels.
### - feed:
- Parameters: None
- Functionality: Increases the hunger level of the pet by a random amount
(simulating feeding).
- Returns: Integer representing the amount by which hunger level increased.
### - play:
- Parameters: parameter playTime representing the duration of playtime in minutes.
- Functionality: Increases the happiness level of the pet by a random amount
(simulating playing).
- Returns: Integer representing the amount by which happiness level increased.
### - displayStatus:
- Parameters: None
- Functionality: Displays the current status of the pet, including its name, type, age,
hunger level, and happiness level.
## Main Program:
- The main program should create multiple instances of Pet objects representing different pets in
the store.
- It should provide a menu-driven interface allowing users to choose from the following options:
1. Feed a pet
2. Play with a pet
3. Display the status of a pet
4. Exit the program
- The program should use loops to continuously prompt the user for inputs until they choose to
exit.
Expected Output:
![image](https://github.com/Joseph0grcn/Visual_Pet_Store/assets/92579500/5f8db2cc-7bc0-4de6-9b46-c1d8c7dc1be6)
![image](https://github.com/Joseph0grcn/Visual_Pet_Store/assets/92579500/6d31ee75-9f73-491b-b7f1-c35215db2526)

