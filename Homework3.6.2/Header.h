#pragma once
class Counter
{
private:
    double num = 0;
public:
    Counter(double num) 
    {
        this->num = num;
    };
    Counter() {};
    void plus();
    void minus();
    void equal();
    double get();
};