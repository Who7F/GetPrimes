//6454th prime is 64513
//i += 2 not i++ to cut down on run time
//2 is the only even prime
#include <iostream>

//__int16 
bool isPrime(unsigned __int16 n, unsigned __int16 x)
{
    //Blow line was used for testing
    //std::cout << "*" << x << "_" << n/3 << "\n";

    //Only checking odd, so only testing with odd
    for (unsigned __int16 i = 3; i <= x; i +=  2)//Needs a speed test to see if n/3 or x is faster 
        if (!(n % i))
            return false;
    return true;
}


void main()
{
    std::cout << 2 << "\n";
    unsigned __int16 x = 2;
    bool numPrime = false;
    //As all even numbers other than 2 are not prime. 
    //Only counting odd
    for (unsigned __int16 i = 3; i < 64532; i += 2)//32767 is the max for an __int16. 64532 for unsigned __int16 
        if (isPrime(i, x)) 
        {
            std::cout << i << "\n";
            //square root. if i is grater then (x+1)*(x+1) then x+1
            if(i > (x+1)*(x+1))
                x ++;  
        }     
    std::cout << "End Progam!\n";
}
