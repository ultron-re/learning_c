## Description:

* Read number num from user.
* Read number val from user.
* Read number a from user.
* Read number b from user(a <= b <=31)
* Do error checking
    *   Check b is within limit or not.
    *   Call replace_nbits_from_pos function by passing val, b - a + 1, b and n as arguments.
    *   replace_nbits_from_pos(num, a, b, val);

* Print the new value of i.
* Prompt for continue option.

### Example:
       If num = 11 = (0 0 0 0 1 0 1 1) 2
    
       val = 174 = (1 0 1 0 1 1 1 0) 2
     
       a = 3,
     
       b = 5
     
       No_of_bits = b – a + 1 = 5 – 3 + 1 = 3, get 3 bits from 11(num) and replace 3(No_of_bits)from 5th(b) postion of 174(val) then
      
       New 'val' value = (1 0 0 1 1 1 1 0) 2 = 158

## Pr-requisites:-

Bitwise Operators

Functions

## Objective: -

To understand the concept of

Functions

Bitwise Operators
## Inputs: -
          Integers num, val, a, b

## Sample execution: -
### Test Case 1:

Enter the value of 'num' : 11

Enter the value of 'a' : 3

Enter the value of 'b' : 5

Enter the value of 'val': 174

Result : 158
