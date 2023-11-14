#include <iostream>
#include <cassert>
using namespace std;
class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int n, int d)
    {
        assert(d!=0);
        numerator=n;
        denominator=d;
    }
void reduce()
     {
        int gcd=1;
        int smaller=(numerator<denominator)?numerator:denominator;
        for(int i=1;i<=smaller;++i)
            {
            if(numerator%i==0 && denominator%i==0)
            {
                gcd=i;
            }
            }
        numerator/=gcd;
        denominator/=gcd;
    }

Fraction operator+(const Fraction&other)
    {
        int resultN=(numerator*other.denominator) + (other.numerator*denominator);
        int resultD=denominator*other.denominator;

        Fraction result(resultN,resultD);
        result.reduce();
        return result;
    }

    string str()
     {
        return to_string(numerator)+"/"+ to_string(denominator);
     }

    string repr()
     {
        return "Fraction(" + to_string(numerator)+", "+ to_string(denominator) + ")";
     }
};
int main()
 {
    Fraction f1(4,5);
    Fraction f2(6,7);
    Fraction result=f1+f2;
    cout<<"Result of addition:"<<result.str()<<endl;
return 0;
}
