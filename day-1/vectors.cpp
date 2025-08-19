#include<iostream>
#include<vector>

void printElements(const std::vector<int> &a){
    for(int i=0; i<a.size(); i++){
        std::cout << "item at " << i << " is " << a[i] << std::endl;
    }
}

int main(){
    std::vector<int> v1 = {1,2,3,4,5};
    int a;
    std::cout << "initialized vector using vector stl" << std::endl;
    std::cout << "Please enter an integer value: ";
    std::cin >> a;
    v1.push_back(a);
    std::cout << "inserted a value " << a << " the last position using push_back" << std::endl;
    printElements(v1);
    v1.pop_back();
    std::cout << "deleted the last item using pop_back" << std::endl;
    printElements(v1);
    std::cout << "Finished looping the dynamic array" << std::endl;
}