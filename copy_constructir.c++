#include<iostream>
using namespace std;
//creation of class
class Hero{
    //properties
    private:
    int health;
    public:
    char level;
//Default constructor
    Hero(){
        cout<<"Simple constructor called"<<endl;
    }
    //parameterized constructor
    Hero(int health){
        this->health =health;

    }
    Hero(int health, char level){
        this -> health=health;
        this ->level=level;

    }
    void print(){
        cout<<"Health"<<this ->health<<endl;
        cout<<"Level"<<this ->level<<endl;
    }

    int getHealth(){
        return health;

    }
    char getLevel(){
        return level;

    }
    void setHealth(int h){
        health=h;

    }
    void setLevel(char ch){
        level=ch;
    }
};
int main(){
    Hero s(10,'A');
    s.print();

    Hero r(s);
    r.print();
    return 0;
}