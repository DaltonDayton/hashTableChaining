#include <iostream>

#include "HashTable.h"

int main(int argc, char const *argv[])
{
    HashTable<int> htable;
    htable.add(2);
    htable.add(12);

    return 0;
}
