#pragma once

class List
{
public:
    List();
    ~List();
    
    void pop_front(); //удаление первого элемента в списке
    void push_back(int data); //добавление элемента в конец списка
    void clear(); // очистить список
    int GetSize() { return Size; } // получить количество елементов в списке
    int& operator[](const int index); // перегруженный оператор []
    virtual void push_front(int data); //добавление элемента в начало списка
    void insert(int data, int index); //добавление элемента в список по указанному индексу
    void removeAt(int index); //удаление элемента в списке по указанному индексу
    void pop_back(); //удаление последнего элемента в списке
    virtual void get();
protected:
    class Node
    {
    public:
        Node* pNext; int data;
        Node(int data = int(0), Node* pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int Size;
    Node* head;
};
