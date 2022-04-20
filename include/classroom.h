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

        //int tempTerm = 0;
        int tempPredictedPassRate = 0;
        int tempPredictedMathsPassRate = 0;
        int tempPredictedEngPassRate = 0;
        int tempPredictedPePassRate = 0;
        //std::vector<std::vector<int>> tempTermsInfo;

        int term = 0;
        int predictedPassRate;
        int predictedMathsPassRate;
        int predictedEngPassRate;
        int predictedPePassRate;
        std::vector<std::vector<int>> termsInfo;

    public:
        void addTeacher();
        void addStudent();
        void setClassroomTeacher(std::string);

        void viewTeachers();
        void viewStudents();
        void viewClassroom();        

        void generateClassroom();

        void predictResults();
        void setPridictedResults();
        void viewPredictedResults();
        void progressTerm();
        void addTermInfo(int, int, int, int);

        void makeTeacherSubRecommendations();
        void progressReport();
};