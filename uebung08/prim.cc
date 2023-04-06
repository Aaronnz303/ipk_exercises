#include <iostream>
#include <vector>

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }            
    }
    //Wenn wir hier durch "den Sieb" durchgekommen sind gibt es keine Teiler,
    //also
    return true; 
}

void printPrimes(int upto)
{
    if (upto < 0)
    {
        std::cout << "The number must not be negative! " << std::endl;
    }
    else if (upto < 2)
    {
        std::cout << "The number is too small, there are no available prime numbers!" << std::endl;
    }
    else
    {
        for (int i = upto; i >= 2 ; i--)
        {
            if (isPrime(i) == true)
            {
                std::cout << " " << i << " ";
            }
        } 
    }    
}

int main(int argc, char** argv[])
{
    std::vector<int> test = { -5, -3, 0, 1, 2, 3, 4, 5, 20, 40, 66, 67};
    
    for(int& itest : test)
    {
        if(isPrime(itest) == true)
        {
            std::cout << itest << " is prime! " << std::endl;
        }
        else
        {
            std::cout << itest << " isn't prime! " << std::endl;
        }
        printPrimes(itest);
        std::cout << " " << std::endl;  
    }

    
}