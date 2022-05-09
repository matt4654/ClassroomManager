#include "../include/person.h"

#include <string>

void person::setName(std::string n)
{
    name = n;
}

std::string person::getName()
{
    return name;
}


void person::setIQ(int i)
{
    iq = i;
}

int person::getIQ()
{
    return iq;
}


void person::setEI(int e)
{
    ei = e;
}

int person::getEI()
{
    return ei;
}


void person::setFitness(int fit)
{
    fitness = fit;
}

int person::getFitness()
{
    return fitness;
}