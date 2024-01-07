#include<iostream>
using namespace std;

class Hero {
private:
    int health;
    char level;

    // Private member functions
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

    // Private member function to print level
    void printLevel() {
        cout << "Level is: " << level << endl;
    }
};

int main() {
    Hero h1;

    // Access and display health using private member function
    // Note: This will result in a compilation error since getHealth() is private
    // cout << "Health is: " << h1.getHealth() << endl;

    // Access and display level using private member function
    // Note: This will result in a compilation error since printLevel() is private
    // h1.printLevel();

    return 0;
}
