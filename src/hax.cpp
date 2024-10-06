#include <iostream>
#include <map>



int main()
{
    std::map<char, char> slownik = {
        {'a', '4'},
        {'e', '3'},
        {'i', '1'},
        {'o', '0'},
        {'s', '5'}
    };

    std::string text, out_text;
    std::cin >> text;
    for (char c : text)
    {
        if (slownik.find(c) != slownik.end()) out_text += slownik[c];
        else out_text += c;
    }
    std::cout << out_text;
    return 0;
}