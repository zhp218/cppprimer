#include <iostream>



int main(){

    int i = 14;
    int *pr = & i;
    *pr = *pr * *pr;

    std::cout << i << std::endl;
    std::cout << *pr << std::endl;

    return 0;
}
