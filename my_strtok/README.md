## Description:

Read string1 and string2 from user.

Call my_strtok (string1, string2);

Should treat string2 as delimitter in string1 and should return 1 st field.

If you call again my_strtok (NULL, string2), it should return second field in string1 treating string2 as delimitter.

## Pr-requisites:-

Storage Classes

Strings

Pointers
## Objective: -

To understand the concept of

Strings functions
## Inputs: -
              2 Strings
## Sample execution: -
### Test Case 1:
Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai

Enter string2 : ;./-:

Tokens :

Bangalore

Chennai

Kolkata

Delhi

Mumbai

### Test Case 2:
Enter string1 : -;Bangalore;;::---Chennai:;Kolkata:;Delhi:-

Enter string2 : ;./-:

Tokens :

Bangalore

Chennai

Kolkata

Delhi
