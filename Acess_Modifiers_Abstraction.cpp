#include<iostream>
using namespace std;
class Circle {
    //private data member 
    private:
    double radius;
    //public member function 
    public:
    int getRadics() { return radius;}
    void setRadics(double r) {radius = r;}

    double compute_area() { return 3.14* radius*radius;}
};
//Let create base class
class Parent {
    //Protected data member 
    protected:
    int id_pro;
};
//Now we have to create the drived class you know so let see the case you know
// Dderived class
class Child:public Parent{
 public:
        void setId(int id) {
            id_pro = id;
        }
        
        void displayId() {
            cout << "id_protected is: " << id_pro << endl;
        }

};
int main(){
    Circle obj;
    Child oj;
    oj.setId(81);
    obj.setRadics(869);
    cout<<"Radius: "<<obj.getRadics()<<endl;
    cout<<"Area: "<<obj.compute_area()<<endl;
   
    
    //member function of the derived class can
    //access the protected data members of the base class
   
    oj.displayId();
    return 0;

}
