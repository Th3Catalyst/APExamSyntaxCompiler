#include <iostream>
#include <fstream>
#include <istream>
#include <filesystem>

int main()
{
    unsigned short int lineNumber = 1;
    std::string fileContents;
    std::ifstream in("test.apexam");     

    while (getline(in, fileContents)) {
        if(lineNumber < 10)
        {
            std::cout << lineNumber << "  " << fileContents << "\n";
        } else {
            std::cout << lineNumber << " " << fileContents << "\n";
        }

        lineNumber++;
    }

    while(!in.eof())
    {
        //std::string text;
        //std::istream getline(in, text);
    }

    in.close();

    return 0;
} 
