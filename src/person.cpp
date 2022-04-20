#include "../include/person.h"

#include <string>

//Set and get name

void person::setName(std::string n) { name = n; }

std::string person::getName() { return name; }

//Set and get IQ

void person::setIQ(int i) { iq = i; }

int person::getIQ() { return iq; }

//Set and get EI

void person::setEI(int e) { ei = e; }

int person::getEI() { return ei; }

//Set and get fitnes

void person::setFitness(int fit) { fitness = fit; }

int person::getFitness() { return fitness; }