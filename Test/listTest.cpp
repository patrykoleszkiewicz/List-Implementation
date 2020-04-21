#include "OneWayList.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(OneWayListTest, OneElementSizeTest)
{
    OneWayList<int> list;
    
    list.pushBack(5);
    
    ASSERT_EQ(list.size(), 1);
}

TEST(OneWayListTest, TwoElementSizeTest)
{
    OneWayList<int> list;
    
    list.pushBack(5);
    list.pushBack(5);
    
    ASSERT_EQ(list.size(), 2);
}

TEST(OneWayListTest, TenElementSizeTest)
{
    OneWayList<int> list;
    
    list.pushBack(5);
    list.pushBack(5);
    list.pushBack(5);
    list.pushBack(5);
    list.pushBack(5);
    
    list.pushBack(5);
    list.pushBack(5);
    list.pushBack(5);
    list.pushBack(5);
    list.pushBack(5);
    
    ASSERT_EQ(list.size(), 10);
}