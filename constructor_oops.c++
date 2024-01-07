#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;
    Hero(){
        cout<<"cONSTRUCTOR called"<<endl;
    }
    void print(){
        cout<<"Health"<<health<<endl;
        cout<<"level"<<level<<endl;
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
    cout<<"Hi"<<endl;
    Hero ramesh;
    cout<<"Hello"<<endl;
    return 0;
}