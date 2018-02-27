#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
  
bool isNumber(char* num)
{
  
  bool isValid = false;
  bool isAdot = false;
  int size = strlen(num);


  for (int i = 0; i < size; i++) {
    
    printf("%c\n", num[i]);

    if(num[i] == 'e')
    {
      if(i == 0 || isAdot || i == size-1)
      {
        isValid = false;
        break;
      }
      else
      {
        isValid = false;
        continue;
      }
    }

    else if(num[i] == ' ')
    {
      if(isAdot || isValid)
      {
        isValid = false;
        break;
      }
      else{
        continue;
      }
    }
      
    else if(num[i] == '+' || num[i] == '-')
    {
      continue;
    }

    else if (isdigit(num[i]))
    {
        isValid = true;
        continue;
    }

    else if(num[i] == '.')
    {
      if(!isAdot)
      {
        isAdot = true;
        continue;
      }
      else{
        isValid = false;
        break;
      }
      
    }


    else
    {
      isValid = false;
      continue;
    }

  }

    printf(isValid ? "true\n" : "false\n");
    return isValid;

}


int main()
{
  isNumber("1  "); 
  return 0;
}
