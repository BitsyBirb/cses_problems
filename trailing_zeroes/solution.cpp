#include <iostream>
using ll = long long;

int main(void){
    ll n; std::cin >> n;
    // this works and i have devised proofs of bounds but not entirely convinced it works?
    // needs more in-depth analysis as to why it works. hmge.
    ll zeroes = 0;
    while(n > 0){
        zeroes += n/5;
        n/=5;
    }
    std::cout << zeroes << std::endl;


    return 0;
}