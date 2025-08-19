#include<iostream>
#include<deque>

void push(std::deque<int> &a){
    int n;
    std::cout<<"Please enter a number to enter: " << std::endl;
    std::cin>> n;
    a.push_back(n);
    std::cout<<"Entered number is: " << n << std::endl;
}

void pop(std::deque<int> &a){
    a.pop_back();
    std::cout<<"Dropped top value " << std::endl;
}

void top(std::deque<int> &a){
    std::cout<<"top value: "<< a.back() <<std::endl;
}

void empty(std::deque<int> &a){
    if(a.size() == 0){
        std::cout<< true;
    }else{
        std::cout<< false;
    }
}

int main(){
    std::deque<int> que = {1,2,3,4,5};
    push(que);
    pop(que);
    top(que);
    empty(que);
    std::cout<< "" <<std::endl;
}