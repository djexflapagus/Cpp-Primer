// Print each number in the range specified by two integers.

#include <iostream>

int main()
{
    int small = 0, big = 0;
    std::cout << "please input two integers:\n";
    std::cin >> small >> big;
    while (small > big) {
       std::cout << "Some values in this range are " << small;
       small++;
}
    return 0;
}
