#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
  char *line  = NULL; /*  is null to signify that itsnot ponting to any allocated memory*/  
  size_t len  = 0;
  ssize_t read; /* stores n.o of characters read by getline character*/
  while (1)
    {
      printf("$ ");
  read = getline(&line, &len, stdin);
  if (read == -1)
    {
      /* EOF or error occured, exit the loop*/
    break;
    }
  printf("%s", line);
    }
  free (line);
  return (0);
}
  
  
