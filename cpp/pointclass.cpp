#include <iostream>
using namespace std;
class point {
private:
    int x,y;
public:
    point() :
	x(0), y(0) {}
    point(int x, int y) : x(x), y(y) {}
    point operator+(const point &p) const {
        return point(x + p.x, y + p.y);
    }
    point operator-(const point &p) const {
        return point(x - p.x, y - p.y);
    }
    point operator/(const point &p) const {
        return point((p.x != 0 ? x / p.x : 0),
                     (p.y != 0 ? y / p.y : 0));
    }
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    point p1(2, 3);
    point p2(3, 4);
    point p3;
    p3 = p2 + p1;
    p3.display();
    return 0;
}
