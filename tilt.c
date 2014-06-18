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
    //testing 1 and 3
  if(i2 == null){//check if null, otherwise nothing
      if(i1 == i3){
          i1 = i1*i3;
          if(i4 != null){
              i2 = i4;
          }
      }
  }
   //testing 1 and 4
  if(i2 == null && i3 == null){
      if(i1 == i4){
          i1 = i1*i4;
          i2 = null;
          i3 = null;
          i4 = null;
      }
  }
  //testing 2 and 4
  if(i1 == null && i3 == null){
      if(i2 == i4){
          i2 = i2*i4;
          i1 = i2;
          i2 = null;
          i3 = null;
          i4 = null;
      }
  }
  
  //testing middle 2 positions
  if(i2 == i3){
      i2 = i2*i3;
      if(i4 != null){
          i3 = i4;
          i4 = null;
      }
      else{
          i3 = null;
      }
  }
  //testing final 2 positions
  if(i3 == i4){
      i3 = i3*i4;
      i4 = null;
  }
  
  //move all values as far left as possible, for only any values present, otherwise covered in combinations
  //checking first position-other values taken care of in combinations above or below
  if(i1 != null){
      i1 = i1;
  }
  //checking second position
  if(i2 != null && i1 == null){
      i1 = i2;
      i2 = null;
  }
  //checking third position
  if(i3 != null && i1 == !null){
      if(i2 == null){
          i2 = i3;
      }
      else{
          i3 = i3;
      }
  }
  //checking fourth position
  
    //Give each value a line number so it can be returned
  
  return 0;
}
