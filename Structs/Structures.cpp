#include <iostream>
#include <string>

using namespace std;


struct student{
    string name;
    double gpa;
    bool enrolled;
};

int main(){

student student1;
student1.name = "Spongebob";
student1.gpa = 3.2;
student1.enrolled = true;

cout <<student1.name<<endl;
cout<<student1.gpa<<endl;
cout<<student1.enrolled<<endl;

cout <<endl;
student student2 = {"Patrick", 2.1, false};

cout <<student2.name<<endl;
cout<<student2.gpa<<endl;
cout<<student2.enrolled<<endl;

    return 0;
}