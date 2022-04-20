#ifndef PERSON_H
#define PERSON_H

#include <string>

class person
{
    private:
        std::string name;
        int iq;
        int ei;
        int fitness;
    
    public:
        void setName(std::string);
        std::string getName();
        
        void setIQ(int);
        int getIQ();

        void setEI(int);
        int getEI();

        void setFitness(int);
        int getFitness();
};

#endif