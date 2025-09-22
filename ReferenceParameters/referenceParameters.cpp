#include <iostream>
using namespace std;

int values(int& a, int& b){ //reference parameters
    int temp = a; //sets a new int temp = to a --> temp =3
    a = b; // sets a = to b ---> a is now 7
    b = temp; // sets b = to temp --> b is now 3
    return -1;
}

int main(){
    int x = 3;
    int y = 7;
    int answer =  values(x,y); //clas the function
    cout << x << endl; //x changes from 3 to 7
    cout << y << endl; //y changes from 7 to 3
    cout << answer << endl; //-1 is returned
    return 0;

}