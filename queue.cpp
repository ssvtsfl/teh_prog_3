#include "list.h"
#include "queue.h"

void Queue::push_front(int data)
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
