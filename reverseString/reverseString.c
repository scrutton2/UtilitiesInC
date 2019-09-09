#include <stdio.h>
#include <string.h>

  /*
   * String reverse - eg. ABC -> CBA
   */
  void reverse(char *origString, char *reversedString)
  {
    int index = 0;
    char *origStringPointer = origString + strlen(origString) - 1; // Start at last char of
                                                                   // orig string
    char temp[30] = "";

    do
    {
      temp[index++] = (char)*origStringPointer--;  // decrement the original string pointer
    }
    while (index < strlen(origString));
    
    strcpy(reversedString, temp);

    return;    
  }

  int main()
  {
    char string1[] = "StringToBeReversed";

    char reversed_string[30] = "";

    reverse(string1, reversed_string);

    printf("Reversed String = %s", reversed_string);

  }

