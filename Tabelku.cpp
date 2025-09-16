#include <iostream>
#include <iomanip>
#include <string>
int main() {
 std::string Judul = "Tabel Penjualan"; 
 std::string Garis = "--------------------";
 std::string Judul2 = "Bulan      Penjualan";
 
 std::cout << std::left;
 std::cout << std::setw(20) << Judul << std::endl;
 std::cout << std::setw(20) << Garis << std::endl;
 std::cout << std::setw(10) << Judul2 << std::endl;
 std::cout << std::setw(20) << Garis << std::endl;
 
 
 std::string num1 = "Januari         2000";
 std::string num2 = "Februari       39800"; 
 std::string num3 = "Maret         489688";
 std::string num4 = "April              0";
 std::cout << std::right;
 std::cout << std::setw(20) << num1 << std::endl;
 std::cout << std::setw(20) << num2 << std::endl;
 std::cout << std::setw(20) << num3 << std::endl;
 std::cout << std::setw(20) << num4 << std::endl;
 std::cout << std::setw(20) << Garis << std::endl;
 return 0;
}
