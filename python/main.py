from cpu import Cpu
from ram import Ram
from harddrive import Harddrive
from komputer import Komputer

def main():
    cpu1 = Cpu(8, 3.4, "Intel", "Core i7")
    ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
    harddrive1 = Harddrive(1024, "SSD", "Samsung", "Evo")

    komputer1 = Komputer("PC Abdul", cpu1, [ram1, Ram(8, "DDR4", "Corsair", "Vengeance")], harddrive1)
    komputer1.add_ram(Ram(16, "DDR5", "Kingston", "FURY"))

    # Komputer 2 (PC Budi)
    cpu2 = Cpu(6, 3.0, "AMD", "Ryzen 5")
    ram2 = Ram(32, "DDR4", "G.Skill", "Trident Z")
    harddrive2 = Harddrive(512, "NVMe", "WD", "Black SN850")

    komputer2 = Komputer("PC Budi", cpu2, [ram2, Ram(16, "DDR4", "Corsair", "Vengeance")], harddrive2)

    # Tampilkan informasi komputer
    komputer1.tampilkan_info()
    komputer2.tampilkan_info()

if __name__ == "__main__":
    main()
