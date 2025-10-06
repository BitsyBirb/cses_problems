#include <iostream>
#include <string>
using ll = long long; // brevity

int main(void){
    std::string s;
    std::getline(std::cin, s);
    char cur = s[0];
    ll longest = 0, curr_count = 0;
    for(unsigned long c = 0; c < s.length(); c++){
        //std::cout << "CUR: " << cur << " VS " << s[c] << std::endl;
        if(s[c] == cur){
            //std::cout << "MATCHING!\n";
            ++curr_count;
        }else{
            //std::cout << "RESETTING!\n";
            cur = s[c];
            curr_count = 1;
        }
        longest = (longest > curr_count) ? longest : curr_count;
    }

    std::cout << longest;

    return 0;
}