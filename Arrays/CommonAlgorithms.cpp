#include <iostream>
using namespace std;


int lowestGrade(double scores[], int size){
int minimum = scores[0];
for(int i = 0; i < size; i++){
    if (scores[i]<minimum){
        minimum = scores[i];
    }
    return minimum;
}
}
int findIndex(double scores[], int minimum, int &size){
int index = -1;
for(int i = 0; i < size; i++){
    if (scores[i] = minimum){
        index = i;
        return index;
    }
    else{
        return -1;
    }
}

}

void removeAtIndex(double scores[], int size, int index){
    for(int i = index+1; i < size; i++){
        scores[i-1] = scores[i];
    }
    size--;
}

double sumArray(double scores[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += scores[i];
    }
    return sum;
}

int main(){

    return 0;
}