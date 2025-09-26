#include <iostream>
#include <string>

using namespace std;

int main(){

string myString;
int capitalCount = 0;

cout<<"What is your string?"<<endl;
getline(cin, myString);

for(int k =0; k < myString.length(); k++){
    char c = myString.at(k);
    if (c>= 'A' && c<='Z'){
        capitalCount++;
    }
}

cout <<"That string has "<<capitalCount<<" capital letters."<<endl;

}