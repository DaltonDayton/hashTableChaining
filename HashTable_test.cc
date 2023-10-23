#include <gtest/gtest.h>
#include "HashTable.h"

// Test constructor
TEST(HashTableConstructor, constructor)
{
    HashTable<int> htable;
    EXPECT_EQ(htable.getSize(), 0);
    EXPECT_EQ(htable.getCapacity(), 10);
}

// Test add with one item
TEST(HashTableAdd, OneItem)
{
    HashTable<int> htable;
    htable.add(3);
    EXPECT_EQ(htable.getSize(), 1);
    EXPECT_TRUE(htable.contains(3));
}

// Test add with multiple items in the same index
TEST(HashTableAdd, MultipleItemsSameIndex)
{
    HashTable<int> htable;
    htable.add(3);
    htable.add(13);
    htable.add(23);

    EXPECT_EQ(htable.getSize(), 3);
    EXPECT_TRUE(htable.contains(23));
}

// Test contains where item is not in list
TEST(HashTableContains, ItemNotInList)
{
    HashTable<int> htable;
    EXPECT_FALSE(htable.contains(4));
}

// Test contains where index != null and value isn't present
TEST(HashTableContains, IndexButNoItem)
{
    HashTable<int> htable;
    htable.add(4);
    EXPECT_FALSE(htable.contains(14));
}
