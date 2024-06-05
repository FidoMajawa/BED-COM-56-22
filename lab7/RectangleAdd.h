#ifndef RECTANGLE_H
#define RECTANGLE_H

//create a class
class Rectangle {
private:
    float length;
    float width;

public:
   // constractor and destractor
    Rectangle();
    ~Rectangle();
    
    // Accessor methods
    void setLength(float len);
    void setWidth(float wid);
    float getLength() const;
    float getWidth() const;
    
    // Function to calculate area
    float calculateArea() const;
};

#endif // RECTANGLE_H
