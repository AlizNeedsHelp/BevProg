#include "my.h"
#include "std_lib_facilities.h"

namespace X {
int var {0};
void print() { 
	cout << "X::var value is " << var << '\n'; }
} // namespace X vege

namespace Y {
int var {0};
void print() { 
	cout << "Y::var value is " << var << '\n'; }
} // namespace Y vege

namespace Z
{
int var {0};
void print() { 
	cout << "Z::var value is " << var << '\n'; }
} // namespace Z vege

int main()
{
    X::var = 7;
    X::print();     // print X's var
    using namespace Y;
    var = 9;
    print();        // print Y's var
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();    // print Z's var
    }
    print();        // print Y's var
    X::print();     // print X's var
}
