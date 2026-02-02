#include "assets.h"


int main() {

    std::map<std::string, std::any> variables;

    std::ifstream in("main.apexam");
    std::string text;     

    while(std::getline (in, text))
    {
       std::cout << text;
    }

    in.close();
    return 0;
} 