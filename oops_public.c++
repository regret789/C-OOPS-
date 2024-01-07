#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;

};
int main(){
    Hero h1;
    h1.health=70;
    h1.level='A';
    cout<<"HeaLth is :"<<h1.health<<endl;
    cout<<"Level is: "<<h1.level<<endl;
    return 0;
}