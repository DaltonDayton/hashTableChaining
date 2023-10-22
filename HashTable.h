#pragma once

template <class Type>
class HashTable
{
private:
public:
    HashTable();
    HashTable(int size);
    HashTable(int, double);
    HashTable(const HashTable &other);
    HashTable &operator=(const HashTable &other);
    ~HashTable();
    int size() const;
    int capacity() const;
    double getLoadFactorThreshold() const;
    bool empty() const;
    void insert(const int);
    void remove(int);
    bool contains(int) const;
    int indexOf(int) const;
    void clear();
};

template <class Type>
HashTable<Type>::HashTable()
{
}

template <class Type>
HashTable<Type>::~HashTable()
{
}
