//THIS CODE DOES NOT COMPILE. IT IS ONLY A DEMONSTRATION OF WHAT DECLARING A CLASS AND FUNCTIONS LOOK LIKE;

#include <iostream>
#include <string>

using namespace std;

class Jedi{

public:
    Jedi();
    Jedi(string name, int hit_points, int mana, int attack, int defense);
    void setTrain(double hours);
    void helperFunction();

private:

    string name;
    int hit_points;
    int mana;
    int attack;
    int defense;

};


void Jedi::setTrain(double hours){

if (hours <= 0){
    cout << "must train for positive hours" << endl;
    return;
}
if (mana < hours*2){
    cout << name << " is too tired to train that long." << endl;
    return;
}

 cout << name << " trains for " << hours << " hours." << endl;

 mana -= hours*2;
 attack += hours*2;
 defense += hours *2;

}

void Jedi::helperFunction(){
    setTrain(5);
}

Jedi::Jedi(){
    name = "unknown jedi";
    hit_points = rand() % 101;
    mana = rand() % 101;
    attack = rand() % 26;
    defense = rand() % 26;
}

Jedi::Jedi(string n, int hp, int m, int a, int d){
    name = n;
    hit_points = hp;
    mana = m;
    attack = a;
    defense = d;
}

int main(){
    srand(time(0));
    Jedi obiwan("Obi-wan", 100, 60, 12, 10);
    //NOT CORRECT Jedi obiwan();
    Jedi anakin;

    obiwan.setTrain(5);
    anakin.setTrain(3);

    return 0;
}