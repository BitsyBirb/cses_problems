#include <iostream>
using ll = long long;


int main(void){
    // board of kxk size, choose two spots for knights. total orientations.
    // remove the amount of attacking positions.
    // there are 2 per 2x3, and 2 per 3x2. As such, do the math behind it. Sliding ideally.

    // doesn't start til 3 basically
    ll n; std::cin >> n;
    for(ll i=1; i <= n; i++){
        if(i==1){ std::cout << 0 << std::endl ; continue; }
        if(i==2){ std::cout << 6 << std::endl; continue; }

        // if here we have to do actual math. combination is just the permutation divided by permutation of subset
        ll total_positions = (i*i) * ( (i * i) - 1) / 2;
        // now calculate the attacking positions. first the 2x3. note that they are symmetric mathematically so can double first result
        ll attacking_positions = 2 * ( (2*(i-1))*(i-2));
        std::cout << total_positions - attacking_positions << std::endl; 
    }

    return 0;
}