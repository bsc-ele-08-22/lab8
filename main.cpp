//main function for the program
#include <iostream>
#include "Box.h"
#include "Box.cpp"
using namespace std;

int main() {
    Box Box1;                 //declare Box1 of type Box
    Box Box2;                //declare Box2 of type Box
    Box Box3;               //declare box3 of type Box
    double volume = 0.0;      //store the volume of a box here

    //box1 specificatiions
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // box2 specifications
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    // volume of Box1
    volume = Box1.GetVolume();
    cout << "volume of box1 : "<< volume << endl;

    //volume of box 2
    volume = Box2.GetVolume();
    cout <<"volume of Box 2 : " << volume << endl;

    //add two objexts as follows:
    Box3 = Box1 + Box2;

    //volume of box 3
    volume = Box3.GetVolume();
    cout << "volume of box 3 : " << volume << endl;

    return 0;
}