#include <iostream>
#include <string>
using namespace std;

class Multiple
{
private:
  int m_grades;

public:
  void setGrades(int grades)
  {
    m_grades = grades;
  }
  void displayGrades()
  {
    for (int i = 1; i <= 9; i++)
    {
      cout << m_grades << " x " << i << " = " << m_grades * i << endl;
    }
  }
};

int main()
{
  Multiple multiple;
  multiple.setGrades(2);
  multiple.displayGrades();
  return 0;
}