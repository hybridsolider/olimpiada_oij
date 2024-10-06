#include <iostream>
#include <vector>



std::vector<long long> longlongtolist(long long x) // 2137 -> {2,1,3,7}  
{
	std::string text = std::to_string(x);
	std::vector<char> char_vector(text.begin(), text.end());
	std::vector<long long> int_vector;
	for (char c : char_vector)
	{
		int_vector.push_back(c - '0');
	}
	return int_vector;
}



long long vector_int_to_int(std::vector<long long> x) // {2,1,3,7} -> 2137
{
	int result;
	for (int num : x)
	{
		result = result * 10 + num;
	}
	return result;
}

long long bruteforce(std::vector<long long> x) // ta funkcja bruteforceuje dzielenie np. 11 -> 12 -> 13 -> 14 -> 15 -> 16 -> 17 -> 18
{
    // x[y] = x[y] + 1
    // x[y] = 9? y++ 

    int true_value;
    bool new_index = true;
    long long to_return;
	int y = x.size();

    true_value = x[y];
    x[y] = 0;
	while (x[y] != 9)
    {
		x[y]++;
        to_return = vector_int_to_int(x);
        if(to_return % 9 == 0) return to_return;
    }
    x[y] = true_value;
}

int main()
{
	long long input_value;
	std::vector<long long> x; 
	int shortest_addr;

	std::cin >> input_value;


	if (input_value % 9 == 0) // czy input jest podzielny na 9
	{
		std::cout << input_value;
	} else {
        x = longlongtolist(input_value);
        std::cout << bruteforce(x);
    }
    return 0;
}
