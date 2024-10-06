#include <iostream>

std::string text;
std::string text2;

std::string to_return;

bool is_in_text(char a)
{

    size_t index = text.find(a);
    if (index != std::string::npos) // std::string::npos - nie znaleziono znaczka a w liście text
    {
        text.erase(index, 1);
        return true;
    } else 
    {
        return false;
    }
}

void check(bool state)
{
    if (state) to_return += 'T';
    else to_return += 'N';
}


int main()
{
    std::cin >> text;
    text2 = text;
    
    bool oij = (is_in_text('O') && is_in_text('I') && is_in_text('J'));
    text = text2;
    bool ejoi = (is_in_text('E') && is_in_text('J') && is_in_text('O') && is_in_text('I'));
    text = text2;
    bool ioi = (is_in_text('I') && is_in_text('O') && is_in_text('I'));
    
    check(oij);
    check(ejoi);
    check(ioi);

    std::cout << to_return;

    return 0;
}