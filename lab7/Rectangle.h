#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
    Rectangle(float len, float wid);
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
