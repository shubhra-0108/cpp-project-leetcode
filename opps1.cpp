#include <iostream>
#include <string>

using namespace std;
class Student
{
public :
    //atributes
    int id;
    int age;
    string name;
    int nos;

    //constructor : Default constructor
    Student()
    {
        cout<<"Student Default Constructor called"<<endl;
    }

    //Behavior/methods/functions 
    void study(){
        cout<<this->name<<" is studying"<<endl;
    }
    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }   
    void bunk(){
        cout<<this->name<<" is bunking"<<endl;
    }

    //destructor 


};

int main(){
    return 0;
}