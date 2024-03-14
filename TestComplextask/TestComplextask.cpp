#include "pch.h"
#include "CppUnitTest.h"
#include "\Git\GitProjectAll\Complextask\Complextask\main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(GetCheese150_50)
        {
            Product product("Cheese", 150.50);
            Assert::AreEqual(product.getName(), std::string("Cheese"));
            Assert::AreEqual(product.getPrice(), 150.50);
        }

        TEST_METHOD(GetBread25_31)
        {
            Product product("Bread", 25.31);
            Order order;
            order.addProduct(product);
        }

        TEST_METHOD(OutputCheese150_50andBread25_31)
        {
            Product product1("Cheese", 150.50);
            Product product2("Bread", 25.31);
            Order order;
            order.addProduct(product1);
            order.addProduct(product2);
            order.displayOrder();
        }
    };
}