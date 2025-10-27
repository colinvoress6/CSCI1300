//THIS CODE DOES NOT COMPILE. IT IS ONLY A DEMONSTRATION OF WHAT DECLARING A CLASS AND FUNCTIONS LOOK LIKE;

#include <iostream>
#include <string>

using namespace std;

class Jedi{

public:

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
    return;
}

 cout << name << " trains for " << hours << " hours." << endl;

}

void Jedi::helperFunction(5){
    setTrain(5);
}


int main(){
    Jedi obi("Obi-wan", 100, 60, 12, 10);

    obi.setTrain(5);

    return 0;
}