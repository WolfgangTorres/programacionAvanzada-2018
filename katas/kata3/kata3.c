#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
  
bool isCircular(char path[])
{
  int x = 0, y = 0;
 
  for (int i=0; path[i]; i++)
  {
    
    char move = path[i];


    if (move == 'U')
      y++;
    else if (move == 'R')
      x++;
    else if (move == 'D')
      y--;
    else // move == L
      x--;
  }
 
  return (x == 0 && y == 0);
}


int main()
{
  char path[] = "RLLRUD";
  if (isCircular(path))
    printf("Given sequence of moves is circular\n");
  else
    printf("Given sequence of moves is NOT circular\n");
  return 0;
}



