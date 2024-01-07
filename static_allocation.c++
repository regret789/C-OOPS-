#include<iostream>
using namespace std;

// Creation of class
class Hero {
    // Properties
private:
    int Health;

public:
    char level;

    void print() {
        cout << "Level: " << level << endl;
        cout << "Health: " << Health << endl;
    }

    // Using getter and setter to access private
    int getHealth() {
        return Health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        Health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {
    // Static allocation
    Hero ramesh;
    ramesh.setHealth(100);
    ramesh.setLevel('A');

    cout << "Health is " << ramesh.getHealth() << endl;
    cout << "Level is " << ramesh.getLevel() << endl;

    return 0;
}
