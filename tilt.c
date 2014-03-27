#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left
  int i1,i2,i3,i4;
  int list[4] startVector = {i1,i2,i3,i4};
  int i = 0;
  for (i < 4)
  {
      if (i = 3)
      {
          list[i] = 0;
          return;
      }
   list[i] = list[i+1]; 
   i++;
  }

  // combine tiles as required

  return 0;
}
