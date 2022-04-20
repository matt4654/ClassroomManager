#include "../include/teacher.h"

#include <string>
#include <iostream>
#include <iomanip>

//Constructor

teacher::teacher(){}; //Why did I have to create this???

teacher::teacher(std::string n, int i, int e, int f, std::string d, bool s, std::string t)
{
    setName(n);
    setIQ(i);
    setEI(e);
    setFitness(f);
    degreeType = d;
    isStrict = s;
    teachingStyle = t;
}

std::string teacher::getDegreeType()
{
    return degreeType;
}

bool teacher::getIsStrict()
{
    return isStrict;
}

std::string teacher::getTeachingStyle()
{
    return teachingStyle;
}

//Get teahcher stats

void teacher::viewTeacher()
{
    std::cout << " " << std::endl;
    std::cout << std::setw(20) << getName() << std::setw(15) << getIQ() << std::setw(10) << getEI() << std::setw(10) << getFitness()  << std::setw(20) << getDegreeType();
    if(isStrict){std::cout << std::setw(20) << "Yes";} else{std::cout << std::setw(20) << "No";}
    std::cout << std::setw(20) << getTeachingStyle();
}