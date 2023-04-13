## Description:

* c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain character class according to the current locale.
*   isalnum() - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

## Pr-requisites: -
Functions

##Objective: -

* To understand the concept of
*    Functions

## Inputs: -

        An ASCII character

## Outputs: -

        0 or non-zero value based on condition success or failure

## Sample execution: -
### Test Case 1:

user@emertxe] ./c_type_lib

Enter the character: a

The character 'a' is an alnum character.
### Test Case 2:

Enter the character: ?

The character '?' is not an alnum character.

Entered character is not alphanumeric character
