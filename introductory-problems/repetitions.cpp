// https://cses.fi/problemset/task/1069
#include <iostream>

int solve(std::string s){

    int globalMax = 1;
    int currMax = 1;
    
    // Scan through the string and check for character breaks
    for(int i = 1; i < s.length(); i++){
        
        // Continuing progression
        if(s[i] == s[i-1]){
            currMax += 1;
        }

        // Character break
        else{
            globalMax = std::max(globalMax, currMax);
            currMax = 1;
        }
    }

    globalMax = std::max(globalMax, currMax);
    return globalMax;
}

int main(int argc, char const *argv[]){
    
    std::string s;
    std::cin >> s;
    std::cout << solve(s);
    return 0;
}
