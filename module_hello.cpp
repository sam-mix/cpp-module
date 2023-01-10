export module hello;
import <iostream>;
import <string_view>;

using namespace std;

void internal_helper();

export void say_hello_to(const string_view&);
export auto square(const auto& x) { return x * x; }

export void func_b();
