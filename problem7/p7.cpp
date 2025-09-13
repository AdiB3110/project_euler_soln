#include "benchmark.h"
#include <cmath>
int is_prime(long number)
{

    if (number == 2)
    {
        return 1;
    }
    int range = static_cast<int>(std::sqrt(number));

    for (auto i = 2; i <= range; i += 1)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void find_nth_prime(int n)
{
    int counter = 0;
    long number{1};
    while (counter < n)
    {
        number+=1;
        if (is_prime(number) == 1)
        {
            counter += 1;
        }
        
    }
    std::cout << "\nThe number is :- " << number << "\n";
}
int main()
{
    int n = 10001;
     benchmark("trial:", find_nth_prime, n);
    //benchmark("prime" , is_prime , 11376);
    return 0;
}