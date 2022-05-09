#include "../include/classroom.h"
#include "../include/utilities.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

int main()
{
    system("cls");

    classroom myClassroom;

    char mainSelect0 = '0';
    while(mainSelect0 != '1' && mainSelect0 != '2' && mainSelect0 != '3' )
    {
        ui::classroomPrint();
        ui::optionPrint({"Create Empty Classroom", "Generate Populated Classroom", "Exit"});
        std::cin >> mainSelect0;
        std::cin.ignore();
        switch(mainSelect0)
        {
            case '1':
            {
                break;
            }
            case '2':
            {
                myClassroom.generateClassroom();
                break;
            }
            case '3':
            {
                break;
            }
            default:
            {
                ui::invalidPrint(3);
            }             
        }
    }
    system("cls");

    char mainSelect1 = '0';
    while(mainSelect1 != '4' && mainSelect0 != '3')
    {
        ui::classroomPrint();
        ui::optionPrint({"Edit", "View", "Run", "Exit"});
        std::cin >> mainSelect1;
        switch(mainSelect1)
        {
            case '1':
            {
                system("cls");
                char mainSelect2 = '0';
                while(mainSelect2 != '4')
                {
                    ui::classroomPrint();
                    ui::optionPrint({"Add Teacher", "Add Student", "Set Classroom Teacher", "Return"});
                    std::cin >> mainSelect2;
                    std::cin.ignore();
                    switch(mainSelect2)
                    {
                        case '1':
                        {
                            system("cls");
                            myClassroom.addTeacher();
                            system("cls");
                            break;
                        }
                        case '2':
                        {   
                            system("cls");          
                            myClassroom.addStudent();
                            system("cls");
                            break;
                        }
                        case '3':
                        {
                            system("cls");
                            std::string classTeacher;
                            std::cout << "Enter Name of Teacher: ";
                            std::getline(std::cin, classTeacher);
                            myClassroom.setClassroomTeacher(classTeacher);
                            system("cls");
                            break;
                        }
                        case '4':
                        {
                            break;
                        }
                        default:
                        {
                            ui::invalidPrint(4);
                        }
                    }
                }
                system("cls");
                break;
            }
            case '2':
            {
                system("cls");
                char mainSelect3 = '0';
                while(mainSelect3 != '4')
                {
                    ui::classroomPrint();
                    ui::optionPrint({"View Teachers", "View Students", "View Classroom", "Return"});
                    std::cin >> mainSelect3;
                    std::cin.ignore();
                    switch(mainSelect3)
                    {
                        case '1':
                        {
                            system("cls");
                            myClassroom.viewTeachers();
                            std::cout << " " << std::endl;
                            system("pause");
                            system("cls");
                            break;
                        }
                        case '2':
                        {
                            system("cls");
                            myClassroom.viewStudents();
                            std::cout << " " << std::endl;
                            system("pause");
                            system("cls");
                            break;
                        }
                        case '3':
                        {
                            system("cls");
                            myClassroom.viewClassroom();
                            std::cout << " " << std::endl;
                            system("pause");
                            system("cls");
                            break;
                        }
                        case '4':
                        {
                            break;
                        }
                        default:
                        {
                            ui::invalidPrint(4);
                        }
                    }
                }
                system("cls");
                break;
            }
            case '3':
            {
                system("cls");
                char mainSelect4 = '0';
                while(mainSelect4 != '6')
                {
                    ui::classroomPrint();
                    ui::optionPrint({"Predict Results", "Suggest Teacher Substitutions", "Progress One Month", "Graphs", "Progress to End-Of-Year", "Return"});
                    std::cin >> mainSelect4;
                    switch(mainSelect4)
                    {
                        case '1':
                        {
                            system("cls");
                            myClassroom.predictResults();
                            myClassroom.viewPredictedResults();
                            std::cout << std::endl;
                            system("pause");
                            system("cls");
                            break;

                        }
                        case '2':
                        {
                            system("cls");
                            myClassroom.makeTeacherSubRecommendations();
                            system("cls");
                            break;
                        }
                        case '3':
                        {
                            system("cls");
                            if(myClassroom.getMonth() >= 11)
                            {
                                std::cout << "The Classroom has reached the end of the school year" << std::endl;
                            }
                            else
                            {
                                myClassroom.predictResults();
                                myClassroom.setPridictedResults();
                                myClassroom.progressMonth();
                                std::cout << "The Classroom has Progressed a month" << std::endl;
                            }
                            std::cout << std::endl;
                            system("pause");
                            system("cls");
                            break;
                        }
                        case '4':
                        {
                            system("cls");
                            myClassroom.progressGraph();
                            system("cls");
                            break;
                        }
                        case '5':
                        {
                            system("cls");
                            while(myClassroom.getMonth() < 11)
                            {
                                myClassroom.predictResults();
                                myClassroom.setPridictedResults();
                                myClassroom.progressMonth();
                            }
                            std::cout << "The Classroom has reached the end of the school year" << std::endl;
                            std::cout << std::endl;
                            system("pause");
                            system("cls");
                            break;
                        }
                        case '6':
                        {
                            system("cls");
                            break;
                        }
                        default:
                        {
                            ui::invalidPrint(6);
                        }
                    }
                }
            }
            case '4':
            {
                break;
            }
            default:
            {
               ui::invalidPrint(4);
            }
        }
    }
    
    return 0;
}