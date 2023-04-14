## Description:

* Read a number num from user.
* Read a number n from user.
* Pass num and n to the function.
* Shift num, n times (towards right).
* While shifting the shifted bits should get replaced at the alternate end.
*     For right shifting, the shifted bits should come at left most side.
* Return the new number from the function.
* Print the new number.
## Example:

            If num is 12, and n is 3, in circular_right_shift function
            12 -> 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0
            o/p -> 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1

## Pr-requisites:-

* Bitwise Operators
* Type Modifiers
* Functions
## Objective: -

* To understand the concept of
*    Functions
*    Bitwise Operators
## Inputs: -

 Integers num(both +ve and -ve), n(No.of shifts)
## Sample execution: -
### Test Case 1:
user@emertxe] ./bit_ops

Enter num: 12

Enter n : 3

Result : 10000000 00000000 00000000 00000001

### Test Case 2: 
Enter num: -12

Enter n : 3

Result : 10011111 11111111 11111111 11111110


