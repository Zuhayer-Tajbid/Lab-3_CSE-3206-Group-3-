#include <iostream>
#include <map>
#include <string>
using namespace std;
// Flyweight
class Soldier {
private:
    string image;
public:
    Soldier(string img) {
        image = img;
    }
    void display(int x, int y) {
        cout << image << " at (" << x << ", " << y << ")" << endl;
    }
};
// Flyweight Factory
class SoldierFactory {
private:
    map<string, Soldier*> soldiers;
public:
    Soldier* getSoldier(string image) {
        if (soldiers.find(image) == soldiers.end()) {
            soldiers[image] = new Soldier(image);
            cout << "Creating new Soldier object\n";
        }
        return soldiers[image];
    }
};
int main() {
    SoldierFactory factory;
    Soldier* s1 = factory.getSoldier("Soldier.png");
    s1->display(10, 20);
    Soldier* s2 = factory.getSoldier("Soldier.png");
    s2->display(50, 80);
    Soldier* s3 = factory.getSoldier("Soldier.png");
    s3->display(100, 150);
    cout << "s1 address: " << s1 << endl;
    cout << "s2 address: " << s2 << endl;
    cout << "s3 address: " << s3 << endl;
    return 0;
}
