#include <iostream>
#include <string>

int solution(int a, int b);

int Quiz()
{
    solution(98, 5);
    return 0;
}

int solution(int a, int b)
{
    int answer = 0;
    std::string str_0 = std::to_string(a);
    std::string str_1 = std::to_string(b);
    std::string x = str_0 + str_1;
    std::string y = str_1 + str_0;
    if (std::stoi(x) > std::stoi(y))
    {
        return std::stoi(x);
    }
    
    return std::stoi(y);
}