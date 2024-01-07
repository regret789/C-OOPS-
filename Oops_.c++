#include<iostream>
using namespace std;
int main(){
    class Hero{
        int health;
    };
    Hero h1;
    cout<<"Enter the initial Helath of the Hero:\n";
    cout<<"Size:"<<sizeof(h1)<<endl;
    return 0;
}