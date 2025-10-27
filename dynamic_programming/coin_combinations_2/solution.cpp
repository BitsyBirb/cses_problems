#include <iostream>
#include <vector>

using ll = long long;
const ll mod = 1e9+7;

int main(void){
    // this one is a bit more fascinating.
    ll n; std::cin >> n;
    ll sum; std::cin >> sum;

    ll c;
    std::vector<ll> coins;
    while(n--){
        std::cin >> c;
        coins.push_back(c);
    }

    std::vector<ll> sums(sum+1, 0);
    sums[0] = 1;
    for(auto &coin : coins){
        for(ll i=coin; i < sums.size(); i++){
            sums[i] = (sums[i] + sums[i-coin]) % mod; // does this always work???
        }
    }

    std::cout << sums[sums.size()-1];


    return 0;
}