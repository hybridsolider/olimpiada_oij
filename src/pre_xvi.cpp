#include <iostream>

using std::cin, std::cout, std::string;


int r;
int pol_r;

void oblicz_parzyste()
{
    pol_r = r / 2;
    cout << pol_r << "\n";        
    for (int i = 1; i <= pol_r; i++)
    {
        r--;
        cout << "2 " << i << " " << r << "\n";
    }  
}

void oblicz_nieparzyste()
{
    int true_r = r;
    pol_r = (r - 1) / 2 + 1;
    cout << pol_r << "\n";
    for (int i = 1; i <= pol_r; i++)
    {
        if (i == pol_r)
        {
            cout << "1 " << true_r << "\n";
        } else 
        {
            r--;
            cout << "2 " << i << " " << r << "\n";        
        }
    }
}

int main()
{
    cin >> r;
    
    if (r % 2 == 0) oblicz_parzyste();
    else oblicz_nieparzyste();
    
    return 0;
    
}