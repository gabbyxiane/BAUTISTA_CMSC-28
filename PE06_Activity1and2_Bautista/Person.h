#include <iostream>
using namespace std;

class Person{
    private:
        int age;
        char gender;
        
    public:
        Person() : age(0), gender('M') {}
        Person(int newage) : age(newage), gender('M') {}
        Person(int newage, char c) : age(newage), gender(c) {}

        void setage(int newage){
            if(newage >= 0){
                age = newage;
            } else {
                cout << "invalid age!!!" << endl;
            }
        }

        int getage(){
            return age;
        }

        void setgender(char c){
            if((c == 'M') || (c == 'F')){
                gender = c;
            } else {
                cout << "invalid gender!!!" << endl;
            }
        }

        char getgender(){
            return gender;
        }

        void view(){
            cout << "Age: " << age << ", Gender: " << gender << endl;
        }

        void view(int a){
            cout << "Age: " << a << ", Gender: " << gender << endl;
        }

        void view(int a, char g){
            cout << "Age: " << a << ", Gender: " << g << endl;
        }
};