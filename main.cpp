#include <iostream>



int main(){

    int i, j;
    i = 1;
    j = 2;
    int& temp = j;
    temp = i;
    std::cout << temp << std::endl;
    std::cout << i << std::endl;
    std::cout << j << std::endl;
    return 0;
}
