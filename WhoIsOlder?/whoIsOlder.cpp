#include <iostream>
#include <string>

using namespace std;



//This function takes in the month, day, and year for both people
//It first comapres the birth years
//If birth year is the same it compares the months
//If months are also the same it compares day
//If its all the same it returns 0
int whoIsOlder(int person1Month, int person1Day, int person1Year, int person2Month, int person2Day, int person2Year){

    if(person1Year < person2Year){
        return 1;
    }
    else if(person2Year < person1Year){
        return 2;
    }
    else {
        if(person1Month<person2Month){
            return 1;
        }
        else if (person2Month<person1Month){
            return 2;
        }
        else{
            if(person1Day<person2Day){
                return 1;
            }
            else if(person2Day<person1Day){
                return 2;
            }
            else{
                return 0;
            }
        }
        
    }

}


int main(){

    int person1Month, person1Day, person1Year, person2Month, person2Day, person2Year;


//input for person 1
cout<<"Person 1 enter birth month 1-12:"<<endl;
cin >> person1Month;
cout<<"Person 1 enter birth date 1-31:"<<endl;
cin >> person1Day;
cout<<"Person 1 enter 4 digit birth year:"<<endl;
cin >>person1Year;


//input for person 2
cout<<"Person 2 enter birth month 1-12:"<<endl;
cin >> person2Month;
cout<<"Person 2 enter birth date 1-31:"<<endl;
cin >> person2Day;
cout<<"Person 2 enter 4 digit birth year:"<<endl;
cin >>person2Year;


//running the function
int result = whoIsOlder(person1Month, person1Day, person1Year, person2Month, person2Day, person2Year);
if (result == 2){
    cout<<"Person 2 is older!"<<endl;
}
else if(result ==1){
     cout<<"Person 1 is older!"<<endl;
}
else if (result == 0){
    cout<<"Y'all are the same age!"<<endl;
}
else {
    cout<<"An error occured, try again."<<endl;
}

}