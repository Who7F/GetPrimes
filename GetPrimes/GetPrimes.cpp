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
    for (unsigned __int16 i = 3; i <= n/3; i +=  2)// i <= n/3 is faster speed then x as its a smaller number 
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
            //If i can't be divided by any number up to the lost prime. i is prime
            x = i;  
        }     
    std::cout << "End Progam!\n";
}
