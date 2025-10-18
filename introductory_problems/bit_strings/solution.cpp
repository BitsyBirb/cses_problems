#include <iostream>
using ll = long long;
const ll mod = 10e8 + 7;

int main(void){
    // basic math.
    ll n; ll res = 1;
    std::cin >> n;
    while(n--){
        res = (res*2) % mod;
    }
    std::cout << res << std::endl;
}