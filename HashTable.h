#pragma once

class HashTable
{
private:
    int *array;

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

HashTable::HashTable()
{
}

HashTable::~HashTable()
{
}
