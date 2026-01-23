#include <iostream>
#include <fstream>
#include <istream>
#include <filesystem>

int main()
{
    std::string fileContents;
    std::ifstream in("test.apexam");     

    while (getline(in, fileContents)) {
        std::cout << fileContents << "\n";
    }

    while(!in.eof())
    {
        //std::string text;
        //std::istream getline(in, text);
    }

    in.close();

    return 0;
} 
