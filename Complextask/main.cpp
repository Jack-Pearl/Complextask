#include <iostream>
#include <vector>

class Product {
public:
    Product(std::string name, double price) : name(name), price(price) {}

    std::string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

private:
    std::string name;
    double price;
};

int main() {


    return 0;
}