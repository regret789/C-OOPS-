#include<iostream>
using namespace std;
//creation of class
class Hero{
    //propertiees of data memebers
    private:
    int health;
    string name;

    public:
    char level;

    void print(){
        cout<<"Health:"<<health<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Level:"<<level<<endl;
    }
    int getHealth(){
        return health;

    }
    char getName(){
        return name[20];
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }
    void setName(char ch){
        for(int i=0;i<19;i++)
        name[i]=ch;
    }
    void setLevel(char ch){
        level=ch; 
    }
};
int main(){
    //dynamic allocation
    Hero *ramesh=new Hero;
    cout<<"lEVEL IS"<<(*ramesh).level<<endl;
    cout<<"Health is"<<(*ramesh).getHealth()<<endl;
    //altenative way of printing dynamic allocation


return 0;           

}