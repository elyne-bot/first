#include <iostream>
int main() {
 bool hasil;
 hasil = (20 < 100) && (100 > 20);
 std::cout << "20 < 100 AND 100 > 20 : " << hasil << std::endl;
 hasil = (20 < 100) || (100 < 20);
 std::cout << "20 < 100 OR 20 > 100 : " << hasil << std::endl;
 hasil = !(100 > 20);
 std::cout << "NOT (100 > 20) : " << hasil << std::endl;
 return 0;
}