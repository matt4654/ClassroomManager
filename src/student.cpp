#include "../include/student.h"

#include <string>
#include <iostream>
#include <iomanip>

//Constructor

student::student(std::string n, int i, int e, int f, std::string home, std::string breakAct, bool tORf, std::string l)
{
    setName(n);
    setIQ(i);
    setEI(e);
    setFitness(f);
    homeActivity = home;
    breakActivity = breakAct;
    respondsToDiscipline = tORf;
    learningStyle = l;
}

void student::setHomeActivity(std::string club)
{
    homeActivity = club;
}

std::string student::getHomeActivity()
{
    return homeActivity;
} 

void student::setBreakActivity(std::string activity)
{
    breakActivity = activity;
}

std::string student::getBreakActivity()
{
    return breakActivity;
}

bool student::getRespondsToDiscipline()
{
    return respondsToDiscipline;
}

std::string student::getLearningStyle()
{
    return learningStyle;
}

void student::viewStudent()
{
    std::cout << std::endl;
    std::cout << std::setw(20) << getName() << std::setw(15) << getIQ() << std::setw(10) << getEI() << std::setw(10) << getFitness()
    << std::setw(20) << getHomeActivity() << std::setw(20) << getBreakActivity(); 
    if(respondsToDiscipline){std::cout << std::setw(15) << "Yes";} else{std::cout << std::setw(15) << "No";}
    std::cout << std::setw(20) << getLearningStyle();
}

void student::setTempGrades(std::string m, std::string e, std::string p)
{
    tempMathsGrade = m;
    tempEngGrade = e;
    tempPeGrade = p;
}

std::string student::getTempMathsGrade()
{
    return tempMathsGrade;
}

std::string student::getTempEngGrade()
{
    return tempEngGrade;
}

std::string student::getTempPeGrade()
{
    return tempPeGrade;
}

void student::setGrades(std::string m, std::string e, std::string p)
{
    mathsGrade = m;
    engGrade = e;
    peGrade = p;
}

std::string student::getMathsGrade()
{
    return mathsGrade;
}

std::string student::getEngGrade()
{
    return engGrade;
}

std::string student::getPeGrade()
{
    return peGrade;
}