#include "list.h"
#include "queue.h"

class Stack : public List
{
public:
    void push_front(int) override;
    void get() override;
};
