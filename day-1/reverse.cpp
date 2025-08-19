#include<iostream>

void reverseString(char* str){
    if(str == nullptr){
        return;
    }
    char* left = str;
    char* right = str;
    
    while(*right != '\0'){
        right++;
    }
    right--;

    while(left<right){
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
int main(){
    char arr[] = "GPUProgramming";
    std::cout<< arr <<std::endl;
    reverseString(arr);
    std::cout<< arr <<std::endl;
    return 0;
}