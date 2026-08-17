#include <iostream>
using namespace std;
class Tree {
public:
    void draw(int x, int y) {
        cout << "Drawing tree at "
             << x << ", " << y << endl;
    }
};
int main() {
    Tree tree;  // One shared tree object
    tree.draw(10, 20);
    tree.draw(50, 80);
    tree.draw(100, 150);
    return 0;
}
