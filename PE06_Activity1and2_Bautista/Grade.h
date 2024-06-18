#include <iostream>
#include <string>

using namespace std;

class Grades{
    
    private:
        float finalGrade;
        string courseName;

    public:
        Grades(float finalGrade, string courseName) : finalGrade(finalGrade), courseName(courseName) {}
    

    // Getters
    float getfinalGrade(){
        return finalGrade;
    }

    string getcourseName(){
        return courseName;
    }

    // Setters
    void setfinalGrade(float newfinalGrade){
        finalGrade = newfinalGrade;
    }

    void setcourseName(string newcourseName){
        courseName = newcourseName;
    }

    // Function to determine if the student has passed or failed the course
    string gradeRemarks(){
        if (finalGrade < 0 || finalGrade > 100){
           return "You have inputted an nvalid grade.";
        } else if(finalGrade >= 0 && finalGrade < 60){
            return "You have failed the course.";
        } else {
            return "Congratulations! You have passed the course.";
        }
    }
};