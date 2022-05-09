#ifndef TEACHER_H
#define TEACHER_H

#include "../include/person.h"

#include <string>

class teacher : public person
{
    private:
        std::string degreeType;
        bool isStrict;
        std::string teachingStyle;
    
    public:
        teacher();
        teacher(std::string, int, int, int, std::string, bool, std::string);

        std::string getDegreeType();
        bool getIsStrict();
        std::string getTeachingStyle();

        void viewTeacher();
};

#endif