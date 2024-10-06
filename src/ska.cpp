#include <iostream>

int main()
{
    int 
    b = 0,
    c = 0,
    w = 0;
    std::string i;
    std::cin >> i;
    for (char h : i)
    {
        if (h=='C') c++;
        else b++;
    }
    w += c / 2;
    w += b / 2;
    std::cout << w;
    return 0;

}