#include <iostream>  
#include <string>  
#include <cmath>  
using namespace std;

class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}
 
    explicit operator string() const {
        return "Point(x: " + to_string(x) + ", y: " + to_string(y) + ")";
    }
 
    Point& operator=(const Point& other) {
        if (this == &other) return *this;  
        x = other.x;
        y = other.y;
        return *this;
    }
};

class Circle {
public:
    Point center;
    double radius;

    Circle(int x, int y, double radius) : center(x, y), radius(radius) {}

    explicit operator string() const {
        return "Circle(center: " + string(center) + ", radius: " + to_string(radius) + ")";
    }

    Circle& operator=(const Circle& other) {
        if (this == &other) return *this;  
        center = other.center;
        radius = other.radius;
        return *this;
    }
};

class Rectangle {
public:
    Point topLeft;
    int width, height;

    Rectangle(int x, int y, int width, int height) : topLeft(x, y), width(width), height(height) {}
 
    explicit operator string() const {
        return "Rectangle(topLeft: " + string(topLeft) + ", width: " + to_string(width) + ", height: " + to_string(height) + ")";
    }
 
    Rectangle& operator=(const Rectangle& other) {
        if (this == &other) return *this; 
        topLeft = other.topLeft;
        width = other.width;
        height = other.height;
        return *this;
    }
};

class Triangle {
public:
    Point a, b, c;

    Triangle(int ax, int ay, int bx, int by, int cx, int cy) : a(ax, ay), b(bx, by), c(cx, cy) {}
  
    explicit operator string() const {
        return "Triangle(a: " + string(a) + ", b: " + string(b) + ", c: " + string(c) + ")";
    }
 
    Triangle& operator=(const Triangle& other) {
        if (this == &other) return *this; 
        a = other.a;
        b = other.b;
        c = other.c;
        return *this;
    }
};

class Square {
public:
    Point topLeft;
    int side;

    Square(int x, int y, int side) : topLeft(x, y), side(side) {}
 
    explicit operator string() const {
        return "Square(topLeft: " + string(topLeft) + ", side: " + to_string(side) + ")";
    }
 
    Square& operator=(const Square& other) {
        if (this == &other) return *this; 
        topLeft = other.topLeft;
        side = other.side;
        return *this;
    }
};

int main() {
    Point p1(3, 4);
    Circle c1(0, 0, 5);
    Rectangle r1(1, 2, 3, 4);
    Triangle t1(1, 1, 2, 3, 3, 1);
    Square s1(0, 0, 4);
  
   cout << string(p1) << endl;
   cout << string(c1) << endl;
   cout << string(r1) << endl;
   cout << string(t1) << endl;
   cout << string(s1) << endl;

    Point p2(1, 1);
    p2 = p1;  
    cout << "After assignment: " << string(p2) << endl;

    Circle c2(1, 1, 1);
    c2 = c1;
    cout << "After assignment: " << string(c2) << endl;

    return 0;
}