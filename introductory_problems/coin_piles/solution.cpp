#include <iostream>
using ll = long long;


int main(void){
    // math is obliterating me. revisit later.
    ll t; std::cin >> t;
    ll x, y;
    while(t--){
        std::cin >> x >> y;
        if((x+y)%3) std::cout << "NO" << std::endl;
        else std::cout << "YES" << std::endl;
    }

    return 0;
}