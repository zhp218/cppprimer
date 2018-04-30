#include <iostream>



int main(){

    int i, j;
    i = 1;
    j = 2;
    int* temp1;
    int* temp2;
    temp1 = &i;
    temp2 = &j;

    std::cout << *temp1 << std::endl;
    std::cout << *temp2 << std::endl;

    // 更改指针的值
    temp1 = &j;
    temp2 = &i;

    std::cout << *temp1 << std::endl;
    std::cout << *temp2 << std::endl;

    // 更改指针指向的值
    *temp1 = 1;
    *temp2 = 2;
    std::cout << i << std::endl;
    std::cout << j << std::endl;

    return 0;
}
