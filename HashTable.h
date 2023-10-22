#pragma once

template <class Type>
struct Node
{
    Type data;
    Node<Type> *next{nullptr};
};

template <class Type>
class HashTable
{
private:
    Node<Type> **array;
    int capacity;
    int size;

public:
    HashTable();
    ~HashTable();
    void add(Type data);
    void remove(Type data);
    bool contains(Type data) const;
    bool empty() const;
    int getSize() const;
    int getCapacity() const;
};

template <class Type>
HashTable<Type>::HashTable() : capacity{10}, size{0}
{
    array = new Node<Type> *[capacity];
}

template <class Type>
HashTable<Type>::~HashTable()
{
}

template <class Type>
void HashTable<Type>::add(Type data)
{
    Node<Type> *newNode = new Node<Type>;
    newNode->data = data;

    int index = data % capacity;

    if (array[index] == nullptr)
    {
        array[index] = newNode;
    }
    else
    {
        array[index]->next = newNode;
    }

    size++;
}

template <class Type>
void HashTable<Type>::remove(Type data)
{
}

template <class Type>
bool HashTable<Type>::contains(Type data) const
{
    return false;
}

template <class Type>
bool HashTable<Type>::empty() const
{
    return false;
}

template <class Type>
int HashTable<Type>::getSize() const
{
    return size;
}

template <class Type>
int HashTable<Type>::getCapacity() const
{
    return capacity;
}