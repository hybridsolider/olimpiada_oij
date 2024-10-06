#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
    int x[3], temp;
    int n = 2;

    std::cin >> x[0] >> x[1] >> x[2];
    
    std::sort(x, x + n + 1);
    
    for (int i = n; i >= 0; i--) 
    {
        if (x[i] == 0 && i < n)  // 001 -> 010 -> 100
        {

            temp = x[i]; 
            x[i] = x[i + 1];
            x[i + 1] = temp;
        }        
    }

    for (int i : x) std::cout << i;
    
    return 0;
}
