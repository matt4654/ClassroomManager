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
        teacher();   //Why did I have to create this???
        teacher(std::string, int, int, int, std::string, bool, std::string);
        //teacher(name, iq, ei, fitness, degreeType, isStrict, teahcingStyle)

        std::string getDegreeType();
        bool getIsStrict();
        std::string getTeachingStyle();

        void viewTeacher();
};

#endif