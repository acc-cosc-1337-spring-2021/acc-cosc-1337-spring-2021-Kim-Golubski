//cpp
#include "decision.h"


std::string get_letter_grade_using_if(int grade)
{
    std::string letter_grade;

    if (grade <= 100 && grade >= 90)
    {
        letter_grade = "A";
    }
    else if (grade <= 89 && grade >= 80)
    {
        letter_grade = "B";
    }
    else if (grade <= 79 && grade >= 70)
    {
        letter_grade = "C";
    }
    else if (grade <= 69 && grade >= 60)
    {
        letter_grade = "D";
    }
    else if (grade <= 59 && grade >= 00)
    {
        letter_grade = "F";
    }
    else
    {
        letter_grade = "Number out of range";
    }
    return letter_grade;
}



std::string get_letter_grade_using_switch(int grade)
{
    std::string letter_grade;

    switch (grade)
    {
    case 90 ... 100:
        letter_grade = "A";
        break;
    case 80 ... 89:
        letter_grade = "B";
        return letter_grade;
        break;
    case 70 ... 79:
        letter_grade = "C";
        return letter_grade;
        break;
    case 60 ... 69:
        letter_grade = "D";
        return letter_grade;
        break;
    case 00 ... 50:
        letter_grade = "F";
        return letter_grade;
        break;
    default:
        letter_grade = "Number out of range";
        break;
    }
}
