#include "../include/classroom.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

int main()
{
    //testchange
    system("cls");
    classroom myClassroom;

    char mainSelect0 = '0';
    while(mainSelect0 != '1' && mainSelect0 != '2' && mainSelect0 != '3' )
    {
        std::cout << " __    _  __ __ _  _  _       " << std::endl; //Font = Bigfig
        std::cout << "/  |  |_|(_ (_ |_)/ \\/ \\|V|   " << std::endl;
        std::cout << "\\__|__| |__)__)| \\\\_/\\_/| |   " << std::endl;
        std::cout << std::endl;
        std::cout << "1. Create Empty Classroom" << std::endl;
        std::cout << "2. Generate Populated Classroom" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cin >> mainSelect0;
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
                system("cls");
                std::cout << "Invalid Entry: Use 1,2,3 to Select Option" << std::endl;
                std::cout << " " << std::endl;
            }             
        }
    }
    system("cls");

    char mainSelect1 = '0';
    while(mainSelect1 != '4' && mainSelect0 != '3')
    {
        std::cout << " __    _  __ __ _  _  _       " << std::endl;
        std::cout << "/  |  |_|(_ (_ |_)/ \\/ \\|V|   " << std::endl;
        std::cout << "\\__|__| |__)__)| \\\\_/\\_/| |   " << std::endl;
        std::cout << std::endl;
        std::cout << "1. Edit" << std::endl;
        std::cout << "2. View" << std::endl;
        std::cout << "3. Run" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> mainSelect1;
        switch(mainSelect1)
        {
            case '1':
            {
                system("cls");
                char mainSelect2 = '0';
                while(mainSelect2 != '4')
                {
                    std::cout << " __    _  __ __ _  _  _       " << std::endl;
                    std::cout << "/  |  |_|(_ (_ |_)/ \\/ \\|V|   " << std::endl;
                    std::cout << "\\__|__| |__)__)| \\\\_/\\_/| |   " << std::endl;
                    std::cout << std::endl;
                    std::cout << "1. Add Teacher" << std::endl;
                    std::cout << "2. Add Student" << std::endl;
                    std::cout << "3. Set Classroom Teacher" << std::endl;
                    std::cout << "4. Return" << std::endl;
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
                            system("cls");
                            std::cout << "Invalid Entry: Use 1,2,3,4 to Select Option" << std::endl;
                            std::cout << " " << std::endl;
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
                    std::cout << " __    _  __ __ _  _  _       " << std::endl;
                    std::cout << "/  |  |_|(_ (_ |_)/ \\/ \\|V|   " << std::endl;
                    std::cout << "\\__|__| |__)__)| \\\\_/\\_/| |   " << std::endl;
                    std::cout << std::endl;
                    std::cout << "1. View Teachers" << std::endl;
                    std::cout << "2. View Students" << std::endl;   
                    std::cout << "3. View Classroom" << std::endl;     
                    std::cout << "4. Return" << std::endl;
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
                            system("cls");
                            std::cout << "Invalid Entry: Use 1,2,3,4 to Select Option" << std::endl;
                            std::cout << " " << std::endl;
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
                while(mainSelect4 != '5')
                {
                    std::cout << " __    _  __ __ _  _  _       " << std::endl;
                    std::cout << "/  |  |_|(_ (_ |_)/ \\/ \\|V|   " << std::endl;
                    std::cout << "\\__|__| |__)__)| \\\\_/\\_/| |   " << std::endl;
                    std::cout << std::endl;
                    std::cout << "1. Predict Results" << std::endl;
                    std::cout << "2. Suggest Teacher Substitutions" << std::endl;
                    std::cout << "3. Progress a Term" << std::endl;
                    std::cout << "4. Progress Report" << std::endl;
                    std::cout << "5. Return" << std::endl;
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
                            myClassroom.predictResults();
                            myClassroom.setPridictedResults();
                            myClassroom.progressTerm();
                            std::cout << std::setw(60) << "The Classroom has Progressed a Term" << std::endl;
                            std::cout << std::endl;
                            system("pause");
                            system("cls");
                            break;
                        }
                        case '4':
                        {
                            system("cls");
                            myClassroom.progressReport();
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
                            std::cout << "Invalid Entry: Use 1,2 to Select Option" << std::endl;
                            std::cout << " " << std::endl;
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
                system("cls");
                std::cout << "Invalid Entry: Use 1,2,3,4 to Select Option" << std::endl;
                std::cout << " " << std::endl;
            }
        }
    }
    
    return 0;
}