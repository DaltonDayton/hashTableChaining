#include <gtest/gtest.h>
#include "HashTable.h"

TEST(HashTableConstructor, constructor)
{
    HashTable<int> htable;
    EXPECT_EQ(htable.getSize(), 0);
    EXPECT_EQ(htable.getCapacity(), 10);
}
