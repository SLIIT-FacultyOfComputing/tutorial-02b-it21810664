/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double salary, netSalary = 0;
    int eType, oTRate, oTHours;
    
    cout<<"Enter Employee type : ";
    cin>>eType;
    
    cout<<endl;
    
    cout<<"Enter Salary : ";
    cin>>salary;
    
    cout<<endl;
    
    cout<<"Enter OT hours : ";
    cin>>oTHours;
    
    cout<<endl;
    
    
    
    switch ( eType )
    {
        case 1 :    oTRate = 1000;
                    break;
                    
        case 2 :    oTRate = 1500;
                    break;
                    
        default :   oTRate = 1700;
                    break;
        
    }
    
    netSalary = salary + ( oTHours * oTRate );
    
    cout<<"Net Salary : "<<netSalary<<endl;
    
    return 0;
}
