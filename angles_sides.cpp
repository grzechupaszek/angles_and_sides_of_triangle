//
// Created by grzegorz on 10/14/24.
//
#include <iostream>
#include <cmath>
using namespace std;

double third_angle_of_triangle(double first_angle, double second_angle){
    double third_angle = 180 - (first_angle + second_angle);
    if (first_angle && second_angle >= 90){
        cout<<"Triangle doesn't exists!\n";
        return 0;
    }
    return third_angle;
}
double third_side_of_triangle(double first, double second){
    if (first <= 0 || second <= 0) {
        cout << "Sides must be positive!\n";
        return -1; // Return an invalid value to indicate error
    }
    double third = sqrt(pow(first, 2) + pow(second, 2));
    if (first + second <= third || first + third <= second || second + third <= first) {
        cout << "Invalid sides for a triangle!\n";
        return -1; // Return an invalid value to indicate error
    }
    return third;
}
int main() {

    double first, second;
    cout<<"First angle is: ";
    cin>> first;
    cout<<"Second angle is: ";
    cin>> second;
    cout<<"Third angle is: "<<third_angle_of_triangle(first, second) << endl;
    double f, s;
    cout<<"first side: ";
    cin>>f;
    cout<<"second side: ";
    cin>>s;
    cout<<"Third side is "<<third_side_of_triangle(f,s)<<endl;

    return 0;
}
