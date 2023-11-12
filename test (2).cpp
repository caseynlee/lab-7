/**
 * test.cpp
 *
 * EECS 183
 * Lab 7
 *
 * Casey Lee
 * leecasey
 *
 * testing for bugs
 */

#include <iostream>
#include <fstream>
using namespace std;

#include "Point.h"

void test_Point();

int main() {
    test_Point();

    return 0;
}

void test_Point() {
    // test default
    Point pt1;
    pt1.setX(15);
    cout << "Expected: (15,0), actual :" << pt1 << endl;
    
    pt1.setY(25);
    cout << "Expected: (15,25), actual :" << pt1 << endl;
    
    pt1.setX(-3);
    cout << "Expected: (1,25), actual :" << pt1 << endl;
    
    pt1.setY(-6);
    cout << "Expected: (0,0), actual :" << pt1 << endl;
    
    pt1.setX(0);
    cout << "Expected: (1,25), actual :" << pt1 << endl;
    
    pt1.setY(-6);
    cout << "Expected: (0,0), actual :" << pt1 << endl;
        
    ifstream input_file;
    input_file.open("data1.txt");
    pt1.read(input_file);
    cout << "Expected: (42,7), actual :" << pt1 << endl;
    cout << "Expected: (99,0), actual :" << pt1 << endl;
    cout << "Expected: (0,0), actual :" << pt1 << endl;
    
    cout << "(" << pt1.getX() << ", " << pt1.getY() << ")" << endl;

    //test non default
    Point pt2 (1,1);
    cout << "(" << pt2.getX() << ", " << pt2.getY() << ")" << endl;
    
    Point pt3 (-1,100);
    cout << "(" << pt3.getX() << ", " << pt3.getY() << ")" << endl;
    
}
