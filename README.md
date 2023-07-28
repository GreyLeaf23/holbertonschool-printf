#!/bin/bash

                          C - printf (Group Project)
                                  by Hector and Christian.


                            ---Project Description---

We are creating a program that can print out different types of information by the user.
Currently, we are going to focus on the most common ones for how to print; signed integers,
unsigned integers, single characters, string of characters, and the percent sign.


          -----Intention of functions for Format Specifiers-----

1) Being able to print a 'int' (%d).

2) Being able to print a 'unsigned int' (%i).

3) Being able to print a 'char' (%c).

4) Being able to print a 'char []' (%s).

5) Being able to print a 'Percent sign' (%%).



                  -----Contents stored in our header file-----

1) Our main function prototype that's going to print the format specifications.

2) Each function prototype dedicated to print the format specifications.

3) Structure to verify that the arguments being made correspond to the format specifications.




                   -----Contents stored in our handler file----

1) Function that returns a 'char' character.

2) Function that returns a 'signed int' character.

3) Function that returns a 'unsigned int' character.

4) Function that returns a 'percent sign' character.

5) Function that returns a 'string' of characters.



                       -----Performance of our printf file-----

1) It uses a variable number of arguments and struct of function pointers to determine how to
    format each type.

2) Declares variables including the format specifiers array and the function pointers that ha-
    ndles them.

3) It then starts a loop that iterates over each character in the input string.

4) The function then checks if the input string is NULL and returns -1.

5) Then it loops through the string character by character.

6) If the first character is not a '%', the fucntion simply writes it and increments the vari-
    able 'counter' that keeps track of the number of characters written.

7) If the first character is a '%', the function gets the right function pointer in the struct
    array and calls it in order to print the corresponding format.

8) If a matching format specifier is found, the correponding function will be called with the
    variable arguments and the 'count' variable will increment by the number of characters wr-
    itten by the function.

9) If no matching format specifier is found, the '%' is simply written and 'count' variable is
    incremented.

10) The function ends by returning the final value of the 'count' variable.



                 -----Example of our _printf function-----

             '_printf' - this is our printf fucntion signature.

  -It takes a format string as its first argument has the value to be printed.


