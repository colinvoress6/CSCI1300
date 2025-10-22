#include <iostream>
#include <string>

using namespace std;

struct PlayerStats{
int strength;
int intelligence;
int max_health;

};

struct Player{
string username;
int level;
PlayerStats stats;
};

void show_player_card(Player p){

cout << "Player " << p.username << endl;
cout << "Level: " << p.level << endl;

cout << "Strength: " << p.stats.strength << endl;
cout << "Intelligence: " << p.stats.intelligence << endl;
cout<< "HP: " << p.stats.max_health << endl;

}

int main(){

Player mage;
mage.username = "Drake";
mage.level = 40;
mage.stats.strength = 8;
mage.stats.intelligence = 20;
mage.stats.max_health = 12;

show_player_card(mage);

}