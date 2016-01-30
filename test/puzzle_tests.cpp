//
//  puzzle_tests.cpp
//  solver2
//
//  Created by Pete Eigel on 8/24/15.
//  Copyright (c) 2015 Pete Eigel. All rights reserved.
//

#include "catch.hpp"
#include "puzzle.h"
#include "cell.h"
#include "cellGroup.h"

SCENARIO("A new puzzle is constructed") {
    Puzzle testP;
    
    WHEN("We look cell(0, 0)") {
        Cell* cellPtr = testP.cell(0, 0);
        
        THEN("it is row(0) [0]") {
            REQUIRE(testP.row(0)->getCell(0) == cellPtr);
        }
        THEN("it is col(0) [0]") {
            REQUIRE(testP.col(0)->getCell(0) == cellPtr);
        }
        THEN("it is box(0) [0]") {
            REQUIRE(testP.box(0)->getCell(0) == cellPtr);
        }
    }
    
    WHEN("We look cell(8, 8)") {
        Cell* cellPtr = testP.cell(8, 8);
        
        THEN("it is row(8) [8]") {
            REQUIRE(testP.row(8)->getCell(8) == cellPtr);
        }
        THEN("it is col(8) [8]") {
            REQUIRE(testP.col(8)->getCell(8) == cellPtr);
        }
        THEN("it is box(8) [8]") {
            REQUIRE(testP.box(8)->getCell(8) == cellPtr);
        }
    }
    
    
    WHEN("We look cell(3, 5)") {
        Cell* cellPtr = testP.cell(3, 5);
        
        THEN("it is row(5) [3]") {
            REQUIRE(testP.row(5)->getCell(3) == cellPtr);
        }
        THEN("it is col(3) [5]") {
            REQUIRE(testP.col(3)->getCell(5) == cellPtr);
        }
        THEN("it is box(4) [6]") {
            REQUIRE(testP.box(4)->getCell(6) == cellPtr);
        }
    }
    
    
    WHEN("We look cell(4, 0)") {
        Cell* cellPtr = testP.cell(4, 0);
        
        THEN("it is row(0) [4]") {
            REQUIRE(testP.row(0)->getCell(4) == cellPtr);
        }
        THEN("it is col(4) [0]") {
            REQUIRE(testP.col(4)->getCell(0) == cellPtr);
        }
        THEN("it is box(1) [1]") {
            REQUIRE(testP.box(1)->getCell(1) == cellPtr);
        }
    }
}