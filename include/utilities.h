#ifndef UTILITIES_H
#define UTILITIES_H

#include <vector>
#include <string>

namespace ui
{
    void classroomPrint();
    void invalidPrint(int);
    void optionPrint(std::vector<std::string>);
}

namespace input
{
    void intInput(std::string, int);
}

#endif