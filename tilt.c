#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left
  int i1,i2,i3,i4;//integer variables
  int list[4] startVector = {i1,i2,i3,i4};
  int i = 0;
  for (i < 4)//moving values, only 1 at a time currently, need to change to move if value exists move to furthest left pos available
  {
      if (i = 3)
      {
          startVector[i] = 0;
          return;
      }
   startVector[i] = startVector[i+1]; 
   i++;
  }

  // combine tiles as required

  return 0;
}
