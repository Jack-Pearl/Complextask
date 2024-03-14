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
    };
}