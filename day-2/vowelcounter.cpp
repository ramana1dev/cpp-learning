#include<iostream>
#include <algorithm>
#include<unordered_map>
#include<vector>

int main(){
    std::vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    std::unordered_map<char,int> charcount;
    std::string toTest = "GPU Prograamming";
    for(char c: toTest){
        auto it = charcount.find(c);
        auto it2 = std::find(vowels.begin(), vowels.end(), c);
        if(c != ' ' && it2 != vowels.end()){
            if (it != charcount.end()) {
                it->second++;
            } else {
                charcount.insert({c, 1});
            }
        }
    }
    for(auto &an: charcount){
        std::cout<< an.first << " -> " << an.second <<std::endl;
    }
}