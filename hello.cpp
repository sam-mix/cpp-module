module hello;

void internal_helper() { cout << "internal_helper()" << endl; }

void say_hello_to(const string_view& someting) {
  internal_helper();
  cout << "Hello, " << someting << "!" << endl;
}

void func_b() { cout << "func_a()" << endl; }
void func_b() { cout << "func_b()" << endl; }
