#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double base, double height);
        ~Triangle();

        // Accessor methods
        void setBase(double base);
        void setHeight(double height);
        double getBase() const;
        double getHeight() const;
    };
}

#endif // TRIANGLE_H
