// https://cses.fi/problemset/task/1094

#include <iostream>
#include <vector>

long long int solve(std::vector<long long int> &v){
    
    // Accumulate values
    long long int diff_vals = 0;

    // Loop through the array
    for(int i = 1; i < v.size(); i++){

        // Calculate differences and update array accordingly
        long long int arrDiff = v[i-1] - v[i];
        long long int diff = std::max(arrDiff, (long long int)0);
        diff_vals += diff;
        v[i] += diff;
    }

    return diff_vals;
}

int main(int argc, char const *argv[]){
    
    int n;
    std::cin >> n;
    std::vector<long long int> v;
    long long int temp;

    while(n--){
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << solve(v);
    return 0;
}
