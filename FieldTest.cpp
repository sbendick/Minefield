/**
 * Unit Tests for Field class
 **/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"

class FieldTest : public ::testing::Test
{
    protected:
        FieldTest(){}
        virtual ~FieldTest(){}
        virtual void SetUp(){}
        virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
    Field minefield;

    minefield.placeMine(4,5);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
    minefield.placeMine(9,9);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(9,9) );
    minefield.placeMine(0,0);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(0,0) );
    minefield.placeMine(0,9);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(0,9) );
    minefield.placeMine(9,0);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(9,0) );
}

TEST(FieldTest, constructorwithoutArgument)
{
    Field minefield;

    minefield.placeMine(9, 9);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(9, 9) );
}

TEST(FieldTest, constructorWithArgument)
{
    Field minefield(20);

    minefield.placeMine(19, 19);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(19, 19) );
}

TEST(FieldTest, RevealAdjacentAtEdge)
{
    Field minefield;

    minefield.placeMine(4,5);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
    minefield.placeMine(9,9);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(9,9) );
    minefield.placeMine(0,0);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(0,0) );
    minefield.placeMine(0,9);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(0,9) );
    minefield.placeMine(9,0);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(9,0) );
}
