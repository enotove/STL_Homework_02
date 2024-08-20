
#include <iostream>
#include <set>

int main()
{
    unsigned count_of_numbers;
    std::set<int> arr;
    std::cout << "Enter count of numbers: \n";
    std::cout << "IN:" << std::endl;
    std::cin >> count_of_numbers;
    do
    {
        int value_for_array;
        std::cin >> value_for_array;
        arr.insert(value_for_array);
        count_of_numbers--;
    } while (count_of_numbers != 0);
    std::cout << "OUT: " << std::endl;
    for (auto i{arr.rbegin()}; i != arr.rend(); i++)
    {
        std::cout << *i << std::endl;
    }
    
}
