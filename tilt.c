#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left

  // combine tiles as required

  int i1,i2,i3,i4;//integer variables
  int list[4] startVector = {i1,i2,i3,i4};
  int i = 0;
  
  //work from left to right
  //testing first 2 positions
  if(i1 == i2){
      i1 = i1*i2;
      if(i3 != null){
          i2 = i3;
      }
      else{
          i2 = null;
      }
      if(i4 != null){
          i3 = i4;
          i4 = null;
      }
      else{
          i3 = null;
      }
  }
  //testing middle 2 positions
  if(i2 == i3){
      i2 = i2*i3;
      if(i4 != null){
          i3 = i4;
          i4 = null;
      }
  }
  
  return 0;
}
