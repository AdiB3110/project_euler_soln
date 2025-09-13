#include "benchmark.h"
#include <string>
#include <fstream>

void greatestprod(const std::string &line , size_t subscr_final)
{
    size_t maxpos = line.length();
    size_t subscr{subscr_final};
    size_t initialpos{0};
    long long maxprod{0};
    int tempnum{0};
    std::string temp{""};

    while ((initialpos+subscr) <= maxpos)
    {
        long long currprod{1};
        temp = line.substr(initialpos, subscr);
        for (auto &num : temp)
        {
            tempnum = num -'0';            
            currprod *= tempnum;
        }

        maxprod = std::max(currprod,maxprod);
        initialpos+=1;
    }
    std::cout << "\n"<<maxprod << " is the greatest product\n";
}

int main(int argc, char *argv[])
{

    // std::string filepath = argv[1];
    std::string filepath{"question_string.txt"};

    std::cout << "The file path is - " << filepath << "\n";

    std::ifstream f(filepath);
    if (!f)
    {
        std::cerr << "Failed to open file: " << filepath << std::endl;
        return 1;
    }

    std::string line{""};

    std::getline(f, line);

    std::cout << "Length of string - " << line.length() << "\n";
    
    size_t len{13};
    greatestprod(line , len);

    return 0;
}
