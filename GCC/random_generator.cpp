#include <random>
#include <iostream>

int main()
{
    std::cin >> n;
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,n); // distribution in range [1, n]

    std::cout << dist6(rng) << std::endl;
}
