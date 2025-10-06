#include <iostream>

int main(void){
    // if n even, divide by two, else x3 + 1

    long long n; std::cin >> n;
    while(n>1){
        std::cout << n << ' ';
        n = (!(n%2)) ? n/2 : (n*3) + 1;
    }
    std::cout << n << std::endl;

    return 0;
}