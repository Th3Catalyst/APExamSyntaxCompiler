#include <iostream>
#include <fstream>
#include <istream>

int main()
{
    std::ifstream in("main.apexam");     

    while(!in.eof())
    {
        std::string text;
        std::istream getline(in, text);
    }

    return 0;
} 
