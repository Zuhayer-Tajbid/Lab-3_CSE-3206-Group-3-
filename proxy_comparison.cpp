#include <iostream>
using namespace std;
class Database {
public:
    void access() {
        cout << "Database accessed" << endl;
    }
};
class DatabaseProxy {
private:
    Database database;
public:
    void access(bool authorized) {
        if (authorized)
            database.access();
        else
            cout << "Access denied" << endl;
    }
};
int main() {
    DatabaseProxy proxy;
    proxy.access(true);
    proxy.access(false);
    return 0;
}
