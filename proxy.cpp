#include <iostream>
#include <string>
using namespace std;
// Subject
class Internet {
public:
    virtual void connect(string website) = 0;
};
// Real Subject
class RealInternet : public Internet {
public:
    void connect(string website) override {
        cout << "Connecting to " << website << endl;
    }
};
// Proxy
class ProxyInternet : public Internet {
private:
    RealInternet realInternet;
public:
    void connect(string website) override {
        if (website == "facebook.com") {
            cout << "Access Denied!" << endl;
        }
        else {
            realInternet.connect(website);
        }
    }
};
int main() {
    ProxyInternet internet;
    internet.connect("google.com");
    internet.connect("facebook.com");
    internet.connect("youtube.com");
    return 0;
}
