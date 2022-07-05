// https://cses.fi/problemset/task/1083

#include <iostream>
#include <vector>
#include <algorithm>

int solve(int n, std::vector<int>&v){
    
    // Initialise hashmap
    int hash[n+1];
    std::fill_n(hash, n+1, 0);

    // Update entries
    for(int x : v){
        hash[x] += 1;
    }

    // Find missing number
    for(int i = 1; i <= n; i++){
        if(hash[i] == 0){
            return i;
        }
    }

    return -1;
}

int main(int argc, char const *argv[]){
    int n,k;
    std::vector<int> v;
    int temp;

    std::cin >> n;
    k = n-1;

    while(k--){
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << solve(n,v);
    return 0;
}
