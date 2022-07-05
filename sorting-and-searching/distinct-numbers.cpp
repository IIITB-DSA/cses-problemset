// https://cses.fi/problemset/task/1621

#include <iostream>
#include <vector>
#include <set>

long long int solve(std::vector<long long int> &v){

    // Creating the hashmap
    std::set<long long int> s;

    // Populating the hashmap
    for(int x : v){
        if(s.find(x) == s.end()){
            s.insert(x);
        }
    }

    // Getting the number of elements
    return (long long int)s.size();
}

int main(){
    int n;
    long long int temp;
    std::vector<long long int> v;

    std::cin >> n;
    while(n--){
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << solve(v);
    return 0;
}