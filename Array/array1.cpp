#include <iostream>

using namespace std;
int main()
{
    int n;
    std::cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        std::cin>> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << array[i]<<" ";
    }
}