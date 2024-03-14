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

class Order {
public:
    Order() : total(0) {}

    void addProduct(const Product& product) {
        products.push_back(product);
        total += product.getPrice();
    }

    void displayOrder() {
        for (const auto& product : products) {
            std::cout << product.getName() << ": " << product.getPrice() << " UAH" << std::endl;
        }
        std::cout << "Total: " << total << " UAH" << std::endl;
    }
       
private:
    std::vector<Product> products;
    double total;
};

int main() {


    return 0;
}