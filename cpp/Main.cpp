#include <bits/stdc++.h>
#include "Komputer.cpp"

using namespace std;

int main() {
  Cpu cpu1(8, 3.4, "Intel", "Core i7");
  Ram ram1(16, "DDR5", "Corsair", "Vengeance");
  Harddrive harddrive1(1024, "SSD", "Samsung", "Evo");
  
  Komputer komputer1("PC Abdul", cpu1, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, harddrive1);
  komputer1.addRam(Ram(16, "DDR5", "Kingston", "FURY"));
  
  Cpu cpu2(6, 2.9, "AMD", "Ryzen 5");
  Ram ram2(32, "DDR4", "G.Skill", "Trident Z");
  Harddrive harddrive2(512, "NVMe", "WD", "Black SN750");
  
  Komputer komputer2("PC Furqon", cpu2, {ram2, Ram(16, "DDR4", "Corsair", "Vengeance")}, harddrive2);
  komputer2.addRam(Ram(8, "DDR4", "Kingston", "HyperX"));
  
  komputer1.tampilkanInfo();
  cout << "\n";
  komputer2.tampilkanInfo();
  
  return 0;
}