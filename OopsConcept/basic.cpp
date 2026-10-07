//________class & object_______

#include<iostream>
#include<string>
using namespace std;


// class Student {
// private:
//     // attributes
//     string name;
// public:
//     float cgpa;

//     // method

//     void getpercentage(){
//         cout << (cgpa * 10)<< " %\n";
//     }
// };

// int main(){
//     Student s1;// object
//     //s1.name = "dileep";
//     s1.cgpa = 9.0;
//     cout<<s1.cgpa << endl;
//     s1.getpercentage();

//     cout << sizeof(s1);
//     return 0;
// }

//_________instagram_______

// class User {
//     int id;
//     string username;
//     string password;
//     string bio;

//     void deactivate(){
//         cout << "deleting account\n";
//     }

//     void editbio(string newbio){

//         bio = newbio;

//     }
// }

// _____________getters and setters method___

// class Student {
// private:
//     // attributes
//     string name;
//     float cgpa;

// public:
    

//     // method

//     void getpercentage(){
//         cout << (cgpa * 10)<< " %\n";
//     }
//     // setters
//     void setName(string nameVal){
//         name = nameVal;
//     }

//     void setCgpa(float cgpaVal){
//         cgpa = cgpaVal;
//     }

//     // getters

//     string getName(){
//         return name;
//     }

//     float getCgpa(){
//         return cgpa;
//     }
// };

// int main(){
//     Student s1;
//     s1.setName("dileep");
//     s1.setCgpa(9.1);

//     cout <<s1.getName()<<endl;
//     cout << s1.getCgpa() << endl;

//     return 0;
// }

//___________constructors_________________

// class Car{
//     string name;
//     string color;

// public:
//    Car(string nameVal, string colorVal){
//     cout << "constructor is called , object being created\n";
//     name = nameVal;
//     color = colorVal;
//    }
//     void start(){
//         cout << "car has started\n";
//     }

//     void stop(){
//         cout << "car has stopped\n";
//     }

//     // getters

//     string getName(){
//         return name, color;
//     }
// };
// int main(){
//     Car c1("BMW", "black");

//     cout << c1.getName()<<endl;
//     return 0;
// }

//__________this _________

// class Car{
//     string name;
//     string color;

// public:
//    Car(string name, string color){
//     cout << "constructor is called , object being created\n";
//     this->name = name;
//     this->color = color;
//    }
//     void start(){
//         cout << "car has started\n";
//     }

//     void stop(){
//         cout << "car has stopped\n";
//     }

//     // getters

//     string getName(){
//         return name, color;
//     }
// };
// int main(){
//     Car c1("BMW", "black");

//     cout << c1.getName()<<endl;
//     return 0;
// }

//_________ types of constructor____________

// class Car{
//     string name;
//     string color;

// public:
//    Car(){
//     cout << "constructor without parameter\n";
//    }
//    Car(string name, string color){
//     cout << "constructor with parameter\n";
//     this->name = name;
//     this->color = color;
//    }
//     void start(){
//         cout << "car has started\n";
//     }

//     void stop(){
//         cout << "car has stopped\n";
//     }

//     // getters

//     string getName(){
//         return name, color;
//     }
// };
// int main(){
//     Car c0; // non- paramerized
//     Car c1("BMW", "black"); // parameterize

//     cout << c1.getName()<<endl;
//     return 0;
// }

//______proble________

// class User {
//     int id;
//     string password;
// public:
//     string username;

//     User(int id){ // constructor
//         this->id = id;
//     }

//     // setter

//     void setPasswod(string passVal){
//         password = passVal;
//     }

//     // getter

//     string getPassword(){
//         return password;
//     }
//     int getid(){
//         return id;
//     }
// };

// int main(){
//     User u1(11651);
//     u1.username = "dileep2027";
//     u1.setPasswod("dileep");
//     cout << u1.getid()<<endl;
//     cout << u1.getPassword()<<endl;
//     cout << u1.username << endl;
//     return 0;
// }


//__________copy constructor_______

//yaha automatically copy constructor create hua
// class Car{
// public:
//     string name;
//     string color;

//     Car(string name, string color){
//         this->name = name;
//         this->color = color;
//     }
// };

// int main(){
//     Car c1("maruti 800", "white");
//     Car c2(c1);
//     cout << c2.name<< endl; // maruti 800
//     cout << c2.color<<endl; // white
//     return 0;
// }

// khud se copy contructor create karenge

// class Car{
// public:
//     string name;
//     string color;

//     Car(string name, string color){
//         this->name = name;
//         this->color = color;
//     }

    // Car(Car &original){
    //     cout << "custom copy contructor created\n";
    //     name = original.name;
    //     color = original.color;
    // }
// };

// int main(){
//     Car c1("maruti 800", "white");
//     Car c2(c1);
//     cout << c2.name<< endl; // maruti 800
//     cout << c2.color<<endl; // white
//     return 0;
// }

//___________________shallow and deep copy_____
//  ___shallow copy_
// class Car{
// public:
//     string name;
//     string color;
//     int *milege;

//     Car(string name, string color){
//         this->name = name;
//         this->color = color;
//         milege = new int; // dynamic allocation
//         *milege  = 12;
//     }



// int main(){
//     Car c1("maruti 800", "white");
//     Car c2(c1);
//     cout << c2.name << endl;
//     cout << c2.color << endl;
//     cout << *c2.milege << endl;

//     *c2.milege = 10;
//     cout << *c1.milege << endl;// 10


//     return 0;
// }

// _______ deep copy_

// class Car{
// public:
//     string name;
//     string color;
//     int *milege;

//     Car(string name, string color){
//         this->name = name;
//         this->color = color;
//         milege = new int; // dynamic allocation
//         *milege  = 12;
//     }

//     Car(Car &original){
//         cout << "custom copy contructor created\n";
//         name = original.name;
//         color = original.color;
//         milege = new int;
//        * milege = *original.milege;
//     }
// };

// int main(){
//     Car c1("maruti 800", "white");
//     Car c2(c1);
//     cout << c2.name << endl;
//     cout << c2.color << endl;
//     cout << *c2.milege << endl;

//     *c2.milege = 10;
//     cout << *c1.milege << endl;// 12


//     return 0;
// }


// ______ destructor___

// class Car{
// public:
//     string name;
//     string color;
//     int *milege;

//     Car(string name, string color){
//         this->name = name;
//         this->color = color;
//         milege = new int; // dynamic allocation
//         *milege  = 12;
//     }

//     Car(Car &original){
//         cout << "custom copy contructor created\n";
//         name = original.name;
//         color = original.color;
//         milege = new int;
//        * milege = *original.milege;
//     }

//     ~Car(){
//         cout <<"deleting object...\n";

//         if(milege != NULL){
//             delete milege;
//             milege = NULL;
//         }
//     }
// };

// int main(){
//     Car c1("maruti 800", "white");
//     cout << c1.name<<endl;
//     cout<<c1.color << endl;
//     cout <<*c1.milege << endl;

//     return 0;
// }


//____________inheritance_________

// class Animal {

// public:
//     string name;

//     void eat(){
//         cout << "eats...\n";
//     }

//     void breath(){
//         cout << "breath...\n";
//     }

// };

// class Fish : protected Animal { //use public
// public:
//     int fins;
//     void swim(){
//         eat();
//         cout << "swims...\n";
//     }
// };

// int main(){
//     Fish f1;
//     f1.fins = 3;
    
//     cout << f1.fins << endl;
//     f1.swim();

//      // not possible error show because protected ko class ke baha access nahi kar akte
//     // f1.eat();
//     // f1.breath();
//     return 0;
// }

//______single inheritance____

// class Animal {

// public:
//     string name;

//     void eat(){
//         cout << "eats...\n";
//     }

//     void breath(){
//         cout << "breath...\n";
//     }

// };

// class Fish : public Animal { //use public
// public:
//     int fins;
//     void swim(){
        
//         cout << "swims...\n";
//     }
// };

// int main(){
//     Fish f1;
//     f1.fins = 3;
    
//     cout << f1.fins << endl;
//     f1.swim();

     
//     f1.eat();
//     f1.breath();
//     return 0;
// }

//________________multiple - level inheritance______

// class Animal {
// public:
//     void eat(){
//         cout <<"eats\n";
//     }

//     void breath(){
//         cout <<"breaths\n";
//     }
// };

// class Mammal : public Animal{
// public:
//     string bloodType;

//     Mammal(){
//         bloodType = "WARM";
//     }
// };

// class Dog : public Mammal {
// public:
//     void tailWag(){
//         cout <<"a Dog wags its tails\n";
//     }
    
// };

// int main(){
//     Dog d1;
//     d1.eat();

//     return 0;
// }

//________multiple inheritence___

// class Teacher {
// public:
//     int salary;
//     string subject;

// };

// class Student {
// public:
//     int rollno;
//     float cgpa;
// };

// class TA : public Teacher, public Student {
// public: 
//     string name;
// };

// int main(){
//     TA tal;
//     tal.name = "rohan";

//     tal.subject = "c++";
//     tal.cgpa = 9.1;

//     cout << tal.subject<<endl;
//     return 0;
// }

//_______operator overloading____

class Complex {
    int real;
    int img;
public:
    Complex(int r, int i){
        real = r;
        img  = i;
    }

    void showNum(){
        cout << real << "+"<<img <<"i\n";
    }
    // op[erator overloading]
    Complex operator + (Complex &c2){  // VOID
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        Complex c3(resReal, resImg);
        // c3.showNum();

        return c3;
    } 
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1+c2;
    c1.showNum();
    c2.showNum();
    c3.showNum();
    
    return 0;
}