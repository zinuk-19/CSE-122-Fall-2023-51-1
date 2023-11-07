#include <iostream>
template <typename T>
class value_compare
{
public:
    T greatest_value(T v1, T v2, T v3)
    {
        if (v1 >= v2 && v1 >= v3)
        {
            return v1;
        }
        else if (v2 >= v1 && v2 >= v3)
        {
            return v2;
        }
        else
        {
            return v3;
        }
    }
};

int main()
{
    value_compare<int> int_Compare;
    int r1 = int_Compare.greatest_value(5, 9, 2);
    std::cout << "Greatest Integer Value: " << r1 << std::endl;

    value_compare<char> char_Compare;
    char r2 = char_Compare.greatest_value('a', 'b', 'c');
    std::cout << "Greatest Character Value: " << r2 << std::endl;

    value_compare<float> float_Compare;
    float r3 = float_Compare.greatest_value(3.14, 2.718, 1.618);
    std::cout << "Greatest Float Value: " << r3 << std::endl;

    return 0;
}
