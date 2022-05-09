#include "teacher.h"
#include "student.h"

#include <vector>
#include <string>

class classroom
{
    private:
        teacher classroomTeacher;
        std::vector<teacher> teachers; 
        std::vector<student> students;

        int predictedPassRate;
        int predictedMathsPassRate;
        int predictedEngPassRate;
        int predictedPePassRate;

        int month = 0;
        std::vector<std::vector<int>> monthsInfo;
        void addMonthInfo(int, int, int, int);


    public:
        void addTeacher();
        void addStudent();
        void setClassroomTeacher(std::string);

        void viewTeachers();
        void viewStudents();
        void viewClassroom();        

        void generateClassroom();

        int getMonth();

        void predictResults();
        void viewPredictedResults();
        void setPridictedResults();
        void progressMonth();       
        void makeTeacherSubRecommendations();
        void progressGraph();
};