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
    Product product1("Cheese", 150.50);
    Product product2("Bread", 25.31);
    Product product3("Meat", 220.75);

    Order order;
    order.addProduct(product1);
    order.addProduct(product2);
    order.addProduct(product3);

    order.displayOrder();

    return 0;
}