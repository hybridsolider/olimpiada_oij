// to zadanie ma problem z optymalizacja

#include <iostream>
#include <string>


bool sum(std::string s)
{
    int to_return = 0;
    for (char i : s)
    {

        to_return += (i - '0');

    }

    if (to_return == 13) 
    {  

        return true;
    }
    return false;
}

bool has_unlucky_number(std::string s)
{
    bool hasone = false;
    for (char i : s)
    {
        if (hasone == true && i == '3') 
        {    

            return true; 
            
        }
        else if (i == '1') hasone = true;
        else if (i != '1') hasone = false;
    }
    return false;
}

int main()
{
    int N, out = 0; 
    std::string N_string;
    std::cin >> N;

    while (N >= 0)
    {
        N_string = std::to_string(N);


        if (has_unlucky_number(N_string) && sum(N_string)) {
            out++;

        }
        N--;
    }
    std::cout << out;
    
    return 0;
}
