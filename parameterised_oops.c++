#include<iostream>
using namespace std;

class Hero {
private:
    int health;

public:
    char level;

    // Default constructor
    Hero() {
        cout << "CONSTRUCTOR called" << endl;
        health = 0;  // Set default value for health
    }

    // Parameterized constructor
    Hero(int health, char level) {
        cout << "CONSTRUCTOR called" << endl;
        cout << "this: " << this << endl;
        this->health = health;
        this->level = level;
    }

    void print() {
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {
    // Creating an instance of the Hero class with specified values
    Hero ramesh(10, 'A');

    // Printing the address of the instance
    cout << "Address of ramesh: " << &ramesh << endl;

    // Calling getHealth() method
    cout << "Health: " << ramesh.getHealth() << endl;

    // Dynamically creating an instance of the Hero class
    Hero *rameshDynamic = new Hero(11, 'B');
    rameshDynamic->print();  // Corrected the variable name from 'h' to 'rameshDynamic'

    // Don't forget to deallocate memory for dynamically allocated objects
    delete rameshDynamic;

    return 0;
}
