#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

#include <string>

class student : public person
{
    private:
        std::string homeActivity;
        std::string breakActivity;
        bool respondsToDiscipline;
        std::string learningStyle;

        std::string mathsGrade;
        std::string engGrade;
        std::string peGrade;

    public:
        student(std::string, int, int, int, std::string, std::string, bool, std::string);

        std::string getHomeActivity();
        std::string getBreakActivity();
        bool getRespondsToDiscipline();
        std::string getLearningStyle();

        void setGrades(std::string, std::string, std::string);
        std::string getMathsGrade();
        std::string getEngGrade();
        std::string getPeGrade();

        void viewStudent();        
};

#endif