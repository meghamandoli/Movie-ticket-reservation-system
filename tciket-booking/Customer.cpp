#include <iostream>
#include <string>
using namespace std;

// Customer information
class Customer {
private:
    string name;
    string phone;

public:
    Customer(string customerName, string customerPhone) {
        name = customerName;
        phone = customerPhone;
    }

    string getName() {
        return name;
    }

    string getPhone() {
        return phone;
    }
};

