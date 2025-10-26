#include <iostream>
#include <vector>

using ll = long long;
const ll mod = 10e8 + 7;

int main(void){
    ll n; std::cin >> n;
    std::vector<std::vector<ll> > dp;
    dp.resize(n+1);
    for(auto &d : dp){
        d.resize(6);
    }
    
    // we have a recurrence relation of:
    // dp[j][k] = dp[j-k-1][5] + dp[j][k-1]; get runnin total left to right and total combos is far right. if out of bounds, simply 0 + far right
    // should work i think
    // 0th row will always just be 1 across. not much special goin on there
    for(int i{}; i < 6; i++){dp[0][i] = 1;}

    // uhhhhh pawgfeesh :^o
    ll pawgfeesh = 0;

    for(ll i = 1; i < dp.size(); i++){
        for(ll j = 0; j < 6; j++){
            //bounds checking first and foremost
            if(j==0) dp[i][j] = dp[i-1][5] % mod; // this is just vacuously true. results from last one.
            else{
                if((j+1) > i) pawgfeesh = 0; // early iterations would need this
                else pawgfeesh = dp[i-(j+1)][5];
                dp[i][j] = (pawgfeesh + dp[i][j-1]) % mod;
            }
        }
    }
    std::cout << dp[dp.size()-1][5];

    return 0;
}