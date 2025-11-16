#include <iostream>
using namespace std;

class Box {
public:
    float length, width, height;
    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    float volume() const {
        return length * width * height;
    }

    void compare(Box b) {
        float v1 = this->volume();  
        float v2 = b.volume();     

        if (v1 > v2)
            cout << "V1 has larger volume." << endl;
        else if (v2 > v1)
            cout << "V2 has larger volume." << endl;
        else
            cout << "Both boxes have equal volume." << endl;
    }
};

int main() {
    Box box1(5, 4, 3);   
    Box box2(6, 3, 3);   

    box1.compare(box2);  

    return 0;
}