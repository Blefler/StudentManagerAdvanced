#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class student
{
public:
  void setName(string, string);
  string fullName();
  void addGrade(double);
  double getScore();
  vector <double> grades;

private:
  string firstName;
  string lastName;
  
};




#endif
