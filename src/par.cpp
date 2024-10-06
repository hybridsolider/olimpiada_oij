#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n, y, x, i, 
    output = 0,
    temp = 0;
    std::cin >> n;
    std::vector<int> lista;
    x = n;
    

    while (n > 0 && std::cin >> y) 
    {
        lista.push_back(y);
        n--;
    }

    std::sort(lista.begin(), lista.end(), std::greater<int>());


    for (int i : lista)
    {


        if (i % 2 == 0) output += i;
        else 
        {
            if (temp == 0)
            {
                temp = i;
            } else
            {
                output += (i + temp);
                temp = 0;
            } 
        }

    }

    std::cout << output;
    return 0;
}