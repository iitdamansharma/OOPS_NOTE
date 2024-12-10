#include<iostream>
#include<string>
using namespace std;
//class deceleration you know 
class Employee{
public:
string id, name;
int year; //experience in (year)
Employee( string id , string name , int year){
    this->id=id;
    this->name=name;
    this->year=year;
}
//prototype decleration 
void work();// And then we are coimg to defing the work of this function outside the function you know.


};
void Employee::work(){
cout<<" Employee "<<this->id<<" is working  ";
}

int main(){
    // class Instantiation ( Direct)
    Employee emp ("Em007","Aman",3);
    emp.work();
    return 0;
}