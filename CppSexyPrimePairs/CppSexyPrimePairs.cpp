//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <math.h>
#include <vector>

bool check_prime(int num) {
    bool flag = 1;
    if (num % 2 != 0) {
        for (int i = 3; i <= sqrt(num); i += 2)
        {
            if (num % i == 0)
            {
                flag = 0;
            }
        }
    }
    else { flag = 0; }
    return flag;
}

int main()
{
    std::vector <int> prime_vector;
    int num;
    std::cout << "enter a number\n";
    std::cin >> num;
    for (int i = 2; i <= num; i++) {
        if (check_prime(i))
        {
            prime_vector.push_back(i);
        }
    }
    std::cout << "sexy prime pairs till your inputs are:\n ";
    int back = 0;
    for(auto x : prime_vector)
    {
        for (auto y : prime_vector)
        {
            if (x-y ==6) {
                std::cout << "(" << y << "," << x << ")   ";
            }
        }
    }

}
