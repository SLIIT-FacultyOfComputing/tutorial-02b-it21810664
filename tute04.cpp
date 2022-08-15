/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

// This is my program

#include <iostream>
float nFac( int numN );
float rFac( int numR );
float fac( int N, int R, int NR );
float nFacR( int numN, int numR );

using namespace std;

int main()
{
    int n, r, noN, noR, nr;
    float fact;
    
    cout<<"Enter number for n : ";
    cin>>n;
    
    cout<<"Enter number for r : ";
    cin>>r;
    
    noN = nFac( n );
    noR = rFac( r );
    nr = nFacR( n, r );
    fact = fac( noN, noR, nr );
    
    cout<<"Answer : "<<fact<<endl;
    
    return 0;
}

float nFac( int numN )
{
    int i;
    
    for( i = numN; i > 0; i-- )
    {
        numN = numN * i;
    }
    return numN;
}

float rFac( int numR )
{
    int i;
    
    for( i = numR; i > 0; i-- )
    {
        numR = numR * i;
    }
    return numR;
}

float nFacR( int numN, int numR )
{
    int i, j, num = 1;
    
    j = numN - numR;
    
    for( i = j; i > 0; i-- )
    {
        num = num * i; 
    }
    
    return num;
}

float fac( int N, int R, int NR )
{
    return N / ( (float)R  *  (float)NR );
}