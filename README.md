<p>
<img width="260" height="170" src="https://davidjohncoleman.com/wp-djc/wp-content/uploads/2017/06/HBTN-Borderless-CMYK-Logo-Vertical-Color-Black@1200ppi-300x236.png" align="right" >
</p>





# _printf

The _printf() function produce output according to a format as described below.
                                                                                
       * %s print a string                                                      
       * %c print a character                                                   
       * %d print a   decimal                                                   
       * %i print an integer                                                    
       * %b print a binary format number                                        
       * %r print the reversed string                                           
       * %R print the rot-13ed string                                           
                                                                                
## Example

#include "holberton.h"                                                          
int main(void)                                                                  
{                                                                               
   _printf("%s\n", "My name is _printf");                                       
   return (0);                                                                  
 }                                                                              
                                                                                
## Prerequisites

for this function you need knowledge about loops(if, else, else if, for, while)
16 arrays, pointers, malloc, free, structs, typedef, variadic functions and recursion

### Installing

for have the code in your local machine you only need download the code files and put it into a directory and compile it with gcc compiler 
```
gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```
## Built With

All the code was write under ubuntu 14.04 using the compiler version
gcc 4.84 for 64 bits

## Contributing

-- Emma Gachancipa - Holberton Student                                          
-- Yesid Gutierrez - Holberton Student                                          

## Versioning

V 0.0 for manual review

## Authors

---Emma Gachancipa---925@holbertonschool.com                                    
---Yesid Guttierrez--944@holbertonshcool.com                                    

## Tasks

| Task             | Description                              |
| ------------------ | ---------------------------------------- |
| Task 0  | function that produces output according to a format: c, s and % |
| Task 1  | Function that produces conversion specifier d and i |
| Task 2  | Manpage |
| Task 3  | Function that produces conversion specifier b |
| Task 4  | Function that produces conversion specifier u, o, x X |
| Task 5  | Use a local buffer of 1024 chars in order to call write as little as posible |
| Task 6  | Function that produces conversion specifier s \x |
| Task 7  | Function that produces conversion specifier p |
| Task 8  | Function that produces conversion specifier + space and # |
| Task 9  | Function that produces length modifiers for non-custom conversion specifiers l and h |
| Task 10 | Function that handle the field width for non-custom conversion specifiers |
| Task 11 | Function that handle the precision for non-custom conversion specifiers|
| Task 12 | Function that handle the 0 flag for non-custom conversion specifiers|
| Task 13 | Function that handle the - flag for non-custom conversion specifiers|
| Task 14 | Function that handle the r custom conversion specifiers|
| Task 15 | Function that handle the R custom conversion specifiers|
| Task 16 | All the above options work well together|
## Files

| File               | Description                              |
| ------------------ | ---------------------------------------- |
|   _printf.c      | Main code about the function |
|   _putchar.c     | To print a character |
|   _puts.c        | To print an string |
|   f_binary.c     | To print a decimal number to binary number |
|   f_character.c  | To print one character |
|   f_integer.c    | To print an integer number |
|   f_reverse.c    | To print an string in reverse |
|   f_rot13.c      | To encryp text in rot 13 |
|   f_string.c     | To print an sring |
|   holberton.h    | Libraries and prototypes |
|   man_3_printf   | Man page for _printf |
|   rev_str.c      | To print an string in reverse|
