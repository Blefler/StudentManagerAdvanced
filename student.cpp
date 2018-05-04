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
  added = true;
}

double student::getScore()
{
  double add;
  double gradeTotal=0;
  double gradeAverage;

  for (int i=0; i<grades.size(); i++)
  {
    gradeTotal=grades[i]+add;
    add=gradeTotal;
  }
  
  if (added==true)
  {
    gradeAverage = gradeTotal/grades.size();
  }  
  else
  {
    gradeAverage = 0;
  }
  
  return gradeAverage;

}
  
