#include <stdio.h>

// To execute C, please define "int main()"

// Int to ASCII


int asciiToInt(char *asciiString){

  int integerValue = 0;
  
  char * asciiStringPtr = asciiString;
  do{

     integerValue = integerValue * 10 + (int)((char)*asciiStringPtr++ - (char) '0');      
  }
  while (((char) *asciiStringPtr) != '\0');

  return integerValue;
}



int main() {

  char asciiString[30] = "1234";
  
  int intVal = 0;
  
  intVal = asciiToInt(asciiString);
  
  printf("ascii to Int = %d", intVal);
  
  return 0;
}