#pragma once
#include "list.h"

class Queue : public List
{
public:
    void push_front(int) override; //добавление элемента в начало списка
    void print(std::ostream& out=std::cout);
};

