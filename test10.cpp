#include <iostream>

    using namespace std;
    
    float areaTriangle(float base, float height) {
        return 0.5 * base * height;
    }
    
    // Function to calculate the area of a rectangle
    float areaRectangle(float length, float width) {
        return length * width;
    }
    
    // Function to calculate the area of a square
    float areaSquare(float side) {
        return side * side;
    }
    
    int main() {
        char choice;
        float base, height, length, width, side;
    
        do {
            cout << "Please select the are of the shape to calculate:" << endl;
            cout << "1. Triangle" << endl;
            cout << "2. Rectangle" << endl;
            cout << "3. Square" << endl;
            cout << "4. To quit program" << endl;
            cout << "Enter selection: ";
            cin >> choice;
    
            switch (choice) {
                case '1':
                    cout << "Enter base and height of the triangle: ";
                    cin >> base >> height;
                    cout << "Area of the triangle: " << areaTriangle(base, height) << endl;
                    break;
                case '2':
                    cout << "Enter length and width of the rectangle: ";
                    cin >> length >> width;
                    cout << "Area of the rectangle: " << areaRectangle(length, width) << endl;
                    break;
                case '3':
                    cout << "Enter the side length of the square: ";
                    cin >> side;
                    cout << "Area of the square: " << areaSquare(side) << endl;
                    break;
                default:
                    cout << "Invalid choice. Please enter a valid choice." << endl;
            }
    
            cout << "Do you want to calculate the area of another shape or press 4 to Quit. ";
            cin >> choice;
        } while (choice == 4 || choice == 4);
    
        cout << "Program quitting" << endl;
    
        return 0;
    }
    