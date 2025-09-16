#include <iostream>
int main() {
 int a = 20;
 a += 10; // a = a + 10
 std::cout << "a += 10 : " << a << std::endl;
 a -= 6; // a = a - 6
 std::cout << "a -= 6 : " << a << std::endl;
 a *= 4; // a = a * 4
 std::cout << "a *= 4 : " << a << std::endl;
 a /= 8; // a = a / 8
 std::cout << "a /= 8 : " << a << std::endl;
 a %= 6; // a = a % 6
 std::cout << "a %= 6 : " << a << std::endl;
 return 0;
}
