#include "student.h"
#include <iostream>
#include <string>

using namespace std;

string student::fullName()
{
  
  string wholeName = firstName;
  wholeName.append(" ");
  wholeName.append(lastName);
  return wholeName;

}

void student::setName(string x, string y)
{

  firstName = x;
  lastName = y;

}

void student::addGrade(double z)
{

  grades.push_back(z);

}

double student::getScore()
{
  double add;
  double gradeTotal;
  double gradeAverage;

  for (int i=0; i<grades.size(); i++)
  {
    gradeTotal=grades[i]+add;
    add=gradeTotal;
  }

  gradeAverage = gradeTotal/grades.size();
  return gradeAverage;

}
  
