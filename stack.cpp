#include <iostream>
#include "list.h"
#include "stack.h"

using namespace std;

void Stack::push_front(int data)
{
    if (head == nullptr)
    {
        head = new Node(data);
    } else {
        Node* current = this->head;
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node(data);
    }
    Size++;
}

void Stack::get()
{
    if (Size == 0)
    {
        cout << "Пусто" << endl;
    } else {
        Node* current = this->head;
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        cout << "Элемент: " << current->data << endl;
        removeAt(Size - 1);
    }
}

