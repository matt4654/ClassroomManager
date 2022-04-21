#include "../include/classroom.h"

#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <numeric>

void classroom::addTeacher()
{
    std::string n, d, t;
    int i, e, f;
    bool s;
    std::cout << "Enter teacher's name: ";
    std::getline(std::cin, n);
    system("cls");
    std::cout << "Enter teacher's IQ: ";
    while(!(std::cin >> i))
    {
        system("cls");
        std::cout << "Incorrect data type. Please enter an integer" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter teacher's IQ: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    system("cls");
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter teacher's EI: ";
    while(!(std::cin >> e))
    {
        system("cls");
        std::cout << "Incorrect data type. Please enter an integer" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter teacher's EI: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    system("cls");
    std::cout << "Enter teacher's fitness: ";
    while(!(std::cin >> f))
    {
        system("cls");
        std::cout << "Incorrect data type. Please enter an integer" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter teacher's fitness: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    system("cls");
    char teachSelect = '0';
    do
    {
        std::cout << "Select teacher's degree type: " << std::endl;
        std::cout << std::endl;
        std::cout << "1. STEM" << std::endl;
        std::cout << "2. Humanities" << std::endl;
        std::cout << "3. Sports" << std::endl;
        std::cin >> teachSelect;
            switch(teachSelect)
            {
                case '1':
                {
                    d = "STEM";
                    break;
                }
                case '2':
                {
                    d = "Humanities";
                    break;
                }
                case '3':
                {
                    d = "Sports";
                    break;
                }
                default:
                {
                    system("cls");
                    std::cout << "Invalid Entry: Use 1,2,3 to Select Option" << std::endl;
                    std::cout << " " << std::endl;
                }
            }
    }
    while(teachSelect != '1' && teachSelect != '2' && teachSelect != '3');
    system("cls");
    char teachSelect2 = '0';
    do
    {
        std::cout << "Is the teacher strict? (y/n): ";
        std::cin >> teachSelect2;
        switch(teachSelect2)
        {
            case 'y':
            {
                s = true;
                break;
            }
            case 'n':
            {
                s = false;
                break;
            }
            default:
            {
                system("cls");
                std::cout << "Invalid Entry: Use 'y' for yes, and 'n' for no" << std::endl;
                std::cout << " " << std::endl;
            }
        }        
    }
    while(teachSelect2 != 'y' && teachSelect2 != 'n');
    system("cls");
    char teachSelect3 = '0';
    do
    {
        std::cout << "Select teacher's teaching Style: " << std::endl;
        std::cout << std::endl;
        std::cout << "1. Visual" << std::endl;
        std::cout << "2. Auditory" << std::endl;
        std::cout << "3. Reading/Writing" << std::endl;
        std::cout << "4. Kinesthetic" << std::endl;
        std::cin >> teachSelect3;
            switch(teachSelect3)
            {
                case '1':
                {
                    t = "Visual";
                    break;
                }
                case '2':
                {
                    t = "Auditory";
                    break;
                }
                case '3':
                {
                    t = "Reading/Writing";
                    break;
                }
                case '4':
                {
                    t = "Kinesthetic";
                    break;
                }
                default:
                {
                    system("cls");
                    std::cout << "Invalid Entry: Use 1,2,3,4 to Select Option" << std::endl;
                    std::cout << " " << std::endl;
                }
            }
    }
    while(teachSelect3 != '1' && teachSelect3 != '2' && teachSelect3 != '3' && teachSelect3 != '4');
    

    teacher newTeacher(n, i, e, f, d, s, t);
    teachers.push_back(newTeacher);
}

void classroom::addStudent()
{
    std::string n, home, breakAct, l;
    int i, e, f;
    bool d;
    std::cout << "Enter student's name: ";
    std::getline(std::cin, n);
    system("cls");
    std::cout << "Enter student's IQ: ";
    while(!(std::cin >> i))
    {
        system("cls");
        std::cout << "Incorrect data type. Please enter an integer" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter student's IQ: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    system("cls");
    std::cout << "Enter student's EI: ";
    while(!(std::cin >> e))
    {
        system("cls");
        std::cout << "Incorrect data type. Please enter an integer" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter student's EI: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    system("cls");
    std::cout << "Enter student's fitness: ";
    while(!(std::cin >> f))
    {
        system("cls");
        std::cout << "Incorrect data type. Please enter an integer" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter student's fitness: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    system("cls");
    char stuSelect = '0';
    do
    {
        std::cout << "Select student's preferred out-of-school activity: " << std::endl;
        std::cout << std::endl;
        std::cout << "1. Mental Activities (e.g. video games, puzzles, board games) " << std::endl;
        std::cout << "2. Creative Activities (e.g. painting, music creation, reading) " << std::endl;
        std::cout << "3. Physical Activities (e.g sports, rock climbing, leg presses) " << std::endl;
        std::cin >> stuSelect;
        switch(stuSelect)
        {
            case '1':
            {
                home = "Mental";
                break;
            }
            case '2':
            {
                home = "Creative";
                break;
            }
            case '3':
            {
                home = "Physical";
                break;
            }
            default:
            {
                system("cls");
                std::cout << "Invalid Entry: Use 1,2,3 to Select Option" << std::endl;
                std::cout << " " << std::endl;
            }
        }
    }
    while(stuSelect != '1' && stuSelect != '2' && stuSelect != '3');
    system("cls");
    char stuSelect2 = '0';
    do
    {
        std::cout << "Enter student's preferred breaktime activity: " << std::endl;
        std::cout << std::endl;
        std::cout << "1. Study " << std::endl;
        std::cout << "2. Socialising " << std::endl;
        std::cout << "3. Sports " << std::endl;
        std::cin >> stuSelect2;
        switch(stuSelect2)
        {
            case '1':
            {
                breakAct = "Studying";
                break;
            }
            case '2':
            {
                breakAct = "Socialising";
                break;
            }
            case '3':
            {
                breakAct = "Sports";
                break;
            }
            default:
            {
                system("cls");
                std::cout << "Invalid Entry: Use 1,2,3 to Select Option" << std::endl;
                std::cout << " " << std::endl;
            }
        }
    }
    while(stuSelect2 != '1' && stuSelect2 != '2' && stuSelect2 != '3');
    char stuSelect3 ='0';
    system("cls");
    do
    {
        std::cout << "Does the student responds to discipline? (y/n): ";
        std::cin >> stuSelect3;
        switch(stuSelect3)
        {
            case 'y':
            {
                d = true;
                break;
            }
            case 'n':
            {
                d = false;
                break;
            }
            default:
            {
                system("cls");
                std::cout << "Invalid Entry: Use 'y' for yes, and 'n' for no" << std::endl;
                std::cout << " " << std::endl;
            }
        }        
    }
    while(stuSelect3 != 'y' && stuSelect3 != 'n');
    system("cls");
    char stuSelect4 = '0';
    do
    {
        std::cout << "Select student's learning style: " << std::endl;
        std::cout << std::endl;
        std::cout << "1. Visual" << std::endl;
        std::cout << "2. Auditory" << std::endl;
        std::cout << "3. Reading/Writing" << std::endl;
        std::cout << "4. Kinesthetic" << std::endl;
        std::cin >> stuSelect4;
        switch(stuSelect4)
        {
            case '1':
            {
                l = "Visual";
                break;
            }
            case '2':
            {
                l = "Auditory";
                break;
            }
            case '3':
            {
                l = "Reading/Writing";
                break;
            }
            case '4':
            {
                l = "Kinesthetic";
                break;
            }
            default:
            {
                system("cls");
                std::cout << "Invalid Entry: Use 1,2,3,4 to Select Option" << std::endl;
                std::cout << " " << std::endl;
            }
        }
    }
    while(stuSelect4 != '1' && stuSelect4 != '2' && stuSelect4 != '3' && stuSelect4 != '4');

    student newStudent(n, i, e, f, home, breakAct, d, l);
    students.push_back(newStudent);
}

void classroom::viewTeachers()
{
    std::cout << std::setw(75) << "___ __ _  __    __ _  __" << std::endl;
    std::cout << std::setw(75) << " | |_ |_|/  |_||_ |_)(_ " << std::endl;
    std::cout << std::setw(75) << " | |__| |\\__| ||__| \\__)" << std::endl;
    std::cout << std::endl;

    std::cout << std::setw(20) << "Name" << std::setw(15) << "IQ" << std::setw(10) << "EI" << std::setw(10)
    << "Fitness" << std::setw(20) << "Degree Type" << std::setw(20) << "Strict" << std::setw(20) << "Teaching Style";
    std::cout << std::endl;
    for(int i = 0; i < teachers.size(); i++)
    {
        teachers[i].viewTeacher(); 
    }
    std::cout << " " << std::endl;
}

void classroom::viewStudents()
{
    std::cout << std::setw(75) << " _____    _  __   ___ __" << std::endl;
    std::cout << std::setw(75) << "(_  | | || \\|_ |\\| | (_ " << std::endl;
    std::cout << std::setw(75) << "__) | |_||_/|__| | | __)" << std::endl;
    std::cout << std::endl;

    std::cout << std::setw(20) << "Name" << std::setw(15) << "IQ" << std::setw(10) << "EI" << std::setw(10)
    << "Fitness" << std::setw(20) << "Home" << std::setw(20) << "Break" << std::setw(15) << "Discipline" << std::setw(20) << "Learning Style";
    std::cout << std::endl;
    for(int i = 0; i < students.size(); i++)
    {
        students[i].viewStudent(); 
    }
    std::cout << std::endl;
}

void classroom::setClassroomTeacher(std::string n)
{
    for(int i = 0; i < teachers.size(); i++)
    {
        if(teachers[i].getName() == n)
        {
            classroomTeacher = teachers[i];
        }
    }
}

void classroom::viewClassroom()
{
    bool teacherSelected = false;
    for(int i = 0; i < teachers.size(); i++)
    {
        if(teachers[i].getName() == classroomTeacher.getName())
        {
            teacherSelected = true;
        }
    }
    std::cout << std::setw(73) << "___ __ _  __    __ _ " << std::endl;
    std::cout << std::setw(73) << " | |_ |_|/  |_||_ |_)" << std::endl;
    std::cout << std::setw(73) << " | |__| |\\__| ||__| \\" << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(20) << "Name" << std::setw(15) << "IQ" << std::setw(10) << "EI" << std::setw(10)
    << "Fitness" << std::setw(20) << "Degree Type" << std::setw(20) << "Strict" << std::setw(20) << "Teaching Style" << std::endl;
    if(teacherSelected == true)
    {
        classroomTeacher.viewTeacher();
    }
    else
    {
        std::cout << std::endl;
        std::cout << std::setw(82) << "NO TEACHER SELECTED";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    viewStudents();
    std::cout << std::endl;
}

void classroom::generateClassroom()
{
    std::string nTeacher, dTeacher, tTeacher, line;
    int iTeacher, eTeacher, fTeacher, numOfLines = 0;
    bool sTeacher;

    std::ifstream myfile("exampleTeachers.txt");
    while(std::getline(myfile, line)){++numOfLines;}

    std::ifstream input("exampleTeachers.txt");
    srand(time(NULL));
    for(int j = 0; j < numOfLines ; j++)
    {
        std::getline(input, nTeacher);
        iTeacher = rand() % (131 - 69) + 69;
        eTeacher = rand() % (131 - 69) + 69;
        fTeacher = rand() % (131 - 69) + 69;

        int zeroOneOrTwo = rand() % 3;
        if(zeroOneOrTwo == 0)
        {
            dTeacher = "STEM";
        }
        else if(zeroOneOrTwo == 1)
        {
            dTeacher = "Humanities";
        }
        else
        {
            dTeacher = "Sports";
        }

        int zeroOrOne = rand() % 2;
        if(zeroOrOne == 0)
        {
            sTeacher = false;
        }
        else
        {
            sTeacher = true;
        }

        int zeroOrOneOrTwoOrThree = rand() % 4;
        if(zeroOrOneOrTwoOrThree == 0)
        {
            tTeacher = "Visual";
        }
        else if(zeroOrOneOrTwoOrThree == 1)
        {
            tTeacher = "Auditory";
        }
        else if(zeroOrOneOrTwoOrThree == 2)
        {
            tTeacher = "Reading/Writing";
        }
        else
        {
            tTeacher = "Kinesthetic";
        }
        
        teacher newTeacher(nTeacher, iTeacher, eTeacher, fTeacher, dTeacher, sTeacher, tTeacher);
        teachers.push_back(newTeacher);
    }

    int randomClassTeacher = rand() % teachers.size();
    classroomTeacher = teachers[randomClassTeacher];


    std::string nStudent, home, breakAct, l, line2;
    int iStudent, eStudent, fStudent, numOfLines2 = 0;
    bool dStudent;

    std::ifstream myfile2("exampleStudents.txt");
    while(std::getline(myfile2, line2)){++numOfLines2;}

    std::ifstream input2("exampleStudents.txt");
    for(int j = 0; j < numOfLines2 ; j++)
    {
        std::getline(input2, nStudent);
        iStudent = rand() % (131 - 69) + 69;
        eStudent = rand() % (131 - 69) + 69;
        fStudent = rand() % (131 - 69) + 69;

        int zeroOneOrTwo2 = rand() % 3;
        if(zeroOneOrTwo2 == 0)
        {
            home = "Mental";
        }
        else if(zeroOneOrTwo2 == 1)
        {
            home = "Creative";
        }
        else
        {
            home = "Physical";
        }

        int zeroOneOrTwo3 = rand() % 3;
        if(zeroOneOrTwo3 == 0)
        {
            breakAct = "Studying";
        }
        else if(zeroOneOrTwo2 == 1)
        {
            breakAct = "Socialising";
        }
        else
        {
            breakAct = "Sports";
        }

        int zeroOrOne2 = rand() % 2;
        if(zeroOrOne2 == 0)
        {
            dStudent = false;
        }
        else
        {
            dStudent = true;
        }

        int zeroOrOneOrTwoOrThree2 = rand() % 4;
        if(zeroOrOneOrTwoOrThree2 == 0)
        {
            l = "Visual";
        }
        else if(zeroOrOneOrTwoOrThree2 == 1)
        {
            l = "Auditory";
        }
        else if(zeroOrOneOrTwoOrThree2 == 2)
        {
            l = "Reading/Writing";
        }
        else
        {
            l = "Kinesthetic";
        }

        student newStudent(nStudent, iStudent, eStudent, fStudent, home, breakAct, dStudent, l);
        students.push_back(newStudent);
    }
}

void classroom::predictResults()
{
    int numOfPasses = 0, numOfMathsPasses = 0, numOfEngPasses = 0, numOfPePasses = 0;
    int numOfFails = 0, numOfMathsFails = 0, numOfEngFails = 0, numOfPeFails = 0;
    for(int i = 0; i < students.size(); i++)
    {
        //Maths
        std::string m;
        if(students[i].getIQ() > 110)
        {
            m = "PASS";
            numOfPasses++;
            numOfMathsPasses++;
        }
        else
        {
            m = "FAIL";
            numOfFails++;
            numOfMathsFails++;
        }

        //English Grade
        std::string e;
        if(students[i].getEI() > 110)
        {
            e = "PASS";
            numOfPasses++;
            numOfEngPasses++;
        }
        else
        {
            e = "FAIL";
            numOfFails++;
            numOfEngFails++;
        }

        //PE Grade
        std::string p;
        if(students[i].getFitness() > 110)
        {
            p = "PASS";
            numOfPasses++;
            numOfPePasses++;
        }
        else
        {
            p = "FAIL";
            numOfFails++;
            numOfPeFails++;
        }
        students[i].setTempGrades(m, e, p);        
    }
    tempPredictedPassRate = (100*numOfPasses)/(numOfPasses+numOfFails);
    tempPredictedMathsPassRate = (100*numOfMathsPasses)/(numOfMathsPasses+numOfMathsFails);
    tempPredictedEngPassRate = (100*numOfEngPasses)/(numOfEngPasses+numOfEngFails);
    tempPredictedPePassRate = (100*numOfPePasses)/(numOfPePasses+numOfPeFails);
}

void classroom::viewPredictedResults()
{
    std::cout << std::setw(75) << " _  _  __ _ ___ _____ __ _     _  __ __      ___ __" << std::endl;
    std::cout << std::setw(75) << "|_)|_)|_ | \\ | /   | |_ | \\   |_)|_ (_ | ||   | (_ " << std::endl;
    std::cout << std::setw(75) << "|  | \\|__|_/_|_\\__ | |__|_/   | \\|____)|_||__ | __)" << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(20) << "Students" << std::setw(20) << "Maths" << std::setw(20) << "English"
    << std::setw(20) << "PE" << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < students.size(); i++)
    {
        std::cout << std::setw(20) << students[i].getName() << std::setw(20) << students[i].getTempMathsGrade()
        << std::setw(20) << students[i].getTempEngGrade() << std::setw(20) << students[i].getTempPeGrade() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::setw(60) << "Predicted Average Pass Rate: " << tempPredictedPassRate << "%" << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(60) << "Predicted Maths Pass Rate: " << tempPredictedMathsPassRate << "%" << std::endl;
    std::cout << std::setw(60) << "Predicted English Pass Rate: " << tempPredictedEngPassRate << "%" << std::endl;
    std::cout << std::setw(60) << "Predicted PE Pass Rate: " << tempPredictedPePassRate << "%" << std::endl;
}

void classroom::setPridictedResults()
{
    for(int i = 0; i < students.size(); i++)
    {
        std::string m = students[i].getTempMathsGrade();
        std::string e = students[i].getTempEngGrade();
        std::string f = students[i].getTempEngGrade();
        students[i].setGrades(m, e, f);
    }

    predictedPassRate = tempPredictedPassRate;
    predictedMathsPassRate = tempPredictedMathsPassRate;
    predictedEngPassRate = tempPredictedEngPassRate;
    predictedPePassRate = tempPredictedPePassRate;

    addTermInfo(predictedPassRate, predictedMathsPassRate, predictedEngPassRate, predictedPePassRate);

    term++;
}

void classroom::progressTerm()
{
    //Classroom teacher effect
    int iqIncrease = 0, eiIncrease = 0, fitnessIncrease = 0;

    if(classroomTeacher.getIQ() < 85) {iqIncrease = -1;}
    else if(classroomTeacher.getIQ() >= 85 && classroomTeacher.getIQ() < 100) {iqIncrease = 0;}
    else if(classroomTeacher.getIQ() >= 100 && classroomTeacher.getIQ() < 115) {iqIncrease = 1;}
    else {iqIncrease = 1;}

    if(classroomTeacher.getEI() < 85) {eiIncrease = -1;}
    else if(classroomTeacher.getEI() >= 85 && classroomTeacher.getEI() < 100) {eiIncrease = 0;}
    else if(classroomTeacher.getEI() >= 100 && classroomTeacher.getEI() < 115) {eiIncrease = 1;}
    else {eiIncrease = 2;} 

    if(classroomTeacher.getFitness() < 85) {fitnessIncrease = -1;}
    else if(classroomTeacher.getFitness() >= 85 && classroomTeacher.getFitness() < 100) {fitnessIncrease = 0;}
    else if(classroomTeacher.getFitness() >= 100 && classroomTeacher.getFitness() < 115) {fitnessIncrease = 1;}
    else {fitnessIncrease = 2;}

    if(classroomTeacher.getDegreeType() == "STEM") {iqIncrease = iqIncrease + 3; eiIncrease = eiIncrease - 2; fitnessIncrease = fitnessIncrease - 2;}
    if(classroomTeacher.getDegreeType() == "Humanities") {eiIncrease = eiIncrease + 3; iqIncrease = iqIncrease - 2; fitnessIncrease = fitnessIncrease - 2;}
    if(classroomTeacher.getDegreeType() == "Sports") {fitnessIncrease = fitnessIncrease + 3; eiIncrease = eiIncrease - 2; iqIncrease = iqIncrease - 2;}

    //Student and teacher-student effect
    for(int i = 0; i < students.size(); i++)
    {
        int disciplineBonus = 0;
        int learningStyleBonus = 0;
        int iqBonus = 0;
        int eiBonus = 0;
        int fitnessBonus = 0;
        if(students[i].getLearningStyle() == classroomTeacher.getTeachingStyle()) {learningStyleBonus = 3;}
        if(students[i].getRespondsToDiscipline() == classroomTeacher.getIsStrict()) {disciplineBonus = 3;}

        if(students[i].getHomeActivity() == "Mental") {iqBonus = iqBonus + 1;}
        if(students[i].getHomeActivity() == "Creative") {eiBonus = eiBonus + 1;}
        if(students[i].getHomeActivity() == "Physical") {fitnessBonus = fitnessBonus + 1;}

        if(students[i].getBreakActivity() == "Studying") {iqBonus = iqBonus + 1;}
        if(students[i].getBreakActivity() == "Socialising") {eiBonus = eiBonus + 1;}
        if(students[i].getBreakActivity() == "Sports") {fitnessBonus = fitnessBonus + 1;}

        students[i].setIQ(students[i].getIQ() + iqIncrease + disciplineBonus + iqBonus + learningStyleBonus);
        students[i].setEI(students[i].getEI() + eiIncrease + disciplineBonus + eiBonus + learningStyleBonus);
        students[i].setFitness(students[i].getFitness() + fitnessIncrease + disciplineBonus + fitnessBonus + learningStyleBonus);
    }
}

void classroom::addTermInfo(int av, int m, int e, int p)
{
    std::vector<int> termInfo = {term, av, m, e, p};
    termsInfo.push_back(termInfo);
}

void classroom::makeTeacherSubRecommendations()
{   
    teacher tempHoldClassroomTeacher = classroomTeacher;
    std::vector<student> tempHoldStudents = students;

    std::vector<int> teacherCasuedAverageChange;
    std::vector<int> teacherCasuedIqChange;
    std::vector<int> teacherCasuedEiChange;
    std::vector<int> teacherCasuedFitnessChange;
    
    for(int i = 0; i < teachers.size(); i++)
    {
        classroomTeacher = teachers[i];

        int averageChange = 0;
        int iqChange = 0;
        int eiChange = 0;
        int fitnessChange = 0;

        progressTerm();
        for(int j = 0; j < students.size(); j++)
        {
            averageChange = averageChange + ((students[j].getIQ() + students[j].getEI() + students[j].getFitness()) / 3) 
                          - ((tempHoldStudents[j].getIQ() + tempHoldStudents[j].getEI() + tempHoldStudents[j].getFitness()) / 3);

            
            iqChange = iqChange + (students[j].getIQ() - tempHoldStudents[j].getIQ());
            eiChange = eiChange + (students[j].getEI() - tempHoldStudents[j].getEI());
            fitnessChange = fitnessChange + (students[j].getFitness() - tempHoldStudents[j].getFitness());

        }

        teacherCasuedAverageChange.push_back(averageChange);
        teacherCasuedIqChange.push_back(iqChange);
        teacherCasuedEiChange.push_back(eiChange);
        teacherCasuedFitnessChange.push_back(fitnessChange);

        students = tempHoldStudents;
    }
    std::cout << " _  __ __ _        __    _  __ _     __    _  __" << std::endl;
    std::cout << "|_)|_ /  / \\|V||V||_ |\\|| \\|_ | \\   (_ | ||_)(_ " << std::endl;
    std::cout << "| \\|__\\__\\_/| || ||__| ||_/|__|_/   __)|_||_)__)" << std::endl;
    std::cout << std::endl;


    int maxPass = *max_element(teacherCasuedAverageChange.begin(), teacherCasuedAverageChange.end());
    std::cout << "For **Average** Pass Rate: " << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < teachers.size(); i++)
    {
        if(teacherCasuedAverageChange[i] == maxPass)
        {
            std::cout << std::setw(49) << teachers[i].getName() << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "For **Maths** Pass Rate: " << std::endl;
    std::cout << std::endl;
    int maxMathsPass = *max_element(teacherCasuedIqChange.begin(), teacherCasuedIqChange.end());
    for(int i = 0; i < teachers.size(); i++)
    {
        if(teacherCasuedIqChange[i] == maxMathsPass)
        {
            std::cout << std::setw(49) << teachers[i].getName() << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "For **English** Pass Rate: " << std::endl;
    std::cout << std::endl;
    int maxEngPass = *max_element(teacherCasuedEiChange.begin(), teacherCasuedEiChange.end());
    for(int i = 0; i < teachers.size(); i++)
    {
        if(teacherCasuedEiChange[i] == maxEngPass)
        {
            std::cout << std::setw(49) << teachers[i].getName() << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "For **PE** Pass Rate: " << std::endl;
    std::cout << std::endl;
    int maxPePass = *max_element(teacherCasuedFitnessChange.begin(), teacherCasuedFitnessChange.end());
    for(int i = 0; i < teachers.size(); i++)
    {
        if(teacherCasuedFitnessChange[i] == maxPePass)
        {
            std::cout << std::setw(49) << teachers[i].getName() << std::endl;
        }
    }
    std::cout << std::endl;
    
    classroomTeacher = tempHoldClassroomTeacher;
    students = tempHoldStudents;

    system("pause");
    system("cls");
    char suggestSelect = '0';
    do
    {
        std::cout << "Change classroom teacher? (y/n): ";
        std::cin >> suggestSelect;
        std::cin.ignore();
        switch(suggestSelect)
        {
            case 'y':
            {
                system("cls");
                std::string crt;
                std::cout << "Enter Name of Teacher: ";
                std::getline(std::cin, crt);
                setClassroomTeacher(crt);
                system("cls");
                break;
            }
            case 'n':
            {
                break;
            }
            default:
            {
                system("cls");
                std::cout << "Invalid Entry: Use 'y' for yes, and 'n' for no" << std::endl;
                std::cout << " " << std::endl;
            }
        }        
    }
    while(suggestSelect != 'y' && suggestSelect != 'n');
}

void classroom::progressGraph()
{
    std::vector<std::vector<int>> holdTermsInfo = termsInfo;
    predictResults();
    std::vector<int> currentTermInfo = {term, tempPredictedPassRate, tempPredictedMathsPassRate, tempPredictedEngPassRate, tempPredictedPePassRate};
    termsInfo.push_back(currentTermInfo);

    int col = term + 1;
    int max = 25;    

    char graphSelect = '0';
    while(graphSelect != '5')
    {
        std::cout << " __ _  _  _     __" << std::endl;
        std::cout << "/__|_)|_||_)|_|(_ " << std::endl;
        std::cout << "\\_|| \\| ||  | |__)" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Pass Rate" << std::endl;
        std::cout << "2. Maths Pass Rate" << std::endl;
        std::cout << "3. English Pass Rate" << std::endl;
        std::cout << "4. PE Pass Rate" << std::endl;
        std::cout << "5. Return" << std::endl;
        std::cin >> graphSelect;
        switch(graphSelect)
        {
            case '1':
            {
                system("cls");
                std::cout << " _  _  __ __    _  _ ___ __" << std::endl;
                std::cout << "|_)|_|(_ (_    |_)|_| | |_ " << std::endl;
                std::cout << "|  | |__)__)   | \\| | | |__" << std::endl;
                std::cout << std::endl;
                for(int r = 0; r < max; ++r)
                {
                    for(int c = 0; c < col; ++c)
                    {
                        std::cout << (r + ((termsInfo[c][1])/4) >= max ? " ** " : "    ");
                    }
                    std::cout << std::endl;
                }
                std::cout << " 1  " << " 2  " << " 3  " << " 4  " << " 5  " << " 6  " << " 7  " << " 8  " << " 9  " << " 10 " << " 11 " << " 12 " << std::endl;
                std::cout << std::setw(27) << "Terms" << std::endl;
                std::cout << std::setw(30) << "('**' = 4%)" << std::endl;
                std::cout << std::endl;
                system("pause");
                system("cls");
                break;
            }
            case '2':
            {
                system("cls");
                std::cout << "    _ ___    __    _  _  __ __    _  _ ___ __" << std::endl;
                std::cout << "|V||_| | |_|(_    |_)|_|(_ (_    |_)|_| | |_ " << std::endl;
                std::cout << "| || | | | |__)   |  | |__)__)   | \\| | | |__" << std::endl;
                std::cout << std::endl;
                for(int r = 0; r < max; ++r)
                {
                    for(int c = 0; c < col; ++c)
                    {
                        std::cout << (r + ((termsInfo[c][2])/4) >= max ? " ** " : "    ");
                    }
                    std::cout << std::endl;
                }
                std::cout << " 1  " << " 2  " << " 3  " << " 4  " << " 5  " << " 6  " << " 7  " << " 8  " << " 9  " << " 10 " << " 11 " << " 12 " << std::endl;
                std::cout << std::setw(27) << "Terms" << std::endl;
                std::cout << std::setw(30) << "('**' = 4%)" << std::endl;
                std::cout << std::endl;
                system("pause");
                system("cls");
                break;
            }
            case '3':
            {
                system("cls");
                std::cout << " __    __   ___ __       _  _  __ __    _  _ ___ __" << std::endl;
                std::cout << "|_ |\\|/__|   | (_ |_|   |_)|_|(_ (_    |_)|_| | |_ " << std::endl;
                std::cout << "|__| |\\_||___|___)| |   |  | |__)__)   | \\| | | |__" << std::endl;
                std::cout << std::endl;
                for(int r = 0; r < max; ++r)
                {
                    for(int c = 0; c < col; ++c)
                    {
                        std::cout << (r + ((termsInfo[c][3])/4) >= max ? " ** " : "    ");
                    }
                    std::cout << std::endl;
                }
                std::cout << " 1  " << " 2  " << " 3  " << " 4  " << " 5  " << " 6  " << " 7  " << " 8  " << " 9  " << " 10 " << " 11 " << " 12 " << std::endl;
                std::cout << std::setw(27) << "Terms" << std::endl;
                std::cout << std::setw(30) << "('**' = 4%)" << std::endl;
                std::cout << std::endl;
                system("pause");
                system("cls");
                break;
            }
            case '4':
            {
                system("cls");
                std::cout << " _  __    _  _  __ __    _  _ ___ __" << std::endl;
                std::cout << "|_)|_    |_)|_|(_ (_    |_)|_| | |_ " << std::endl;
                std::cout << "|  |__   |  | |__)__)   | \\| | | |__" << std::endl;
                std::cout << std::endl;
                for(int r = 0; r < max; ++r)
                {
                    for(int c = 0; c < col; ++c)
                    {
                        std::cout << (r + ((termsInfo[c][4])/4) >= max ? " ** " : "    ");
                    }
                    std::cout << std::endl;
                }
                std::cout << " 1  " << " 2  " << " 3  " << " 4  " << " 5  " << " 6  " << " 7  " << " 8  " << " 9  " << " 10 " << " 11 " << " 12 " << std::endl;
                std::cout << std::setw(27) << "Terms" << std::endl;
                std::cout << std::setw(30) << "('**' = 4%)" << std::endl;
                std::cout << std::endl;
                system("pause");
                system("cls");
                break;
            }
            case '5':
            {
                system("cls");
                break;
            }
            default:
            {
                system("cls");
                std::cout << "Invalid Entry: Use 1,2,3,4 to Select Option" << std::endl;
                std::cout << " " << std::endl;
            }
        }    
    }
    termsInfo = holdTermsInfo;
}

int classroom::getTerm()
{
    return term;
}