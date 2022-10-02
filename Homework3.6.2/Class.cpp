#include "Class.h"
#include <iostream>
    void Counter::plus() {
        num++;
    }
    void Counter::minus() {
        num--;
    }
    void Counter::equal() {
        std::cout << get() << std::endl;
    }
    double Counter::get() {
        return num;
    }