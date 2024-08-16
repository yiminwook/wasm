#include <stdio.h>

// 구구단 출력
void multiple(int grades)
{
  for (int i = 0; i < 9; i++)
  {
    printf("%d * %d = %d\n", grades, i, grades * i);
  }
}

int main()
{
  multiple(5);
  return 0;
}