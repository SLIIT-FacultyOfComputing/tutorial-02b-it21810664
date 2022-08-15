/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{
    int num, fac = 1, i;
    
    std::cout<<"Enter number : ";
    std::cin>>num;
    
    for( i = num; i > 0; i-- )
    {
        fac = fac * i;
    }
    
    std::cout<<"Factorial : " <<fac <<std::endl;
    return 0;
}
