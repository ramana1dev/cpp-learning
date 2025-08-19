#include <bits/stdc++.h>
#include<vector>

int main(){
    std::map<int,int> mymap;
    std::vector<int> a = {1,5,8,6,4,4,8,8,1};
    int count = 0;
    for(int i=0; i<a.size(); i++){
        auto it = mymap.find(a[i]);
        if(it != mymap.end() && it->first == a[i]){
            count = it->second;
            mymap.at(a[i]) = count+1;
        }else{
            mymap.insert({a[i], count+1});
        }
    }
    for (auto& p : mymap)
        std::cout << p.first << " " <<
        p.second << std::endl;
}