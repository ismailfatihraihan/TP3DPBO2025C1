from cpu import Cpu
from ram import Ram
from harddrive import Harddrive

class Komputer:
    def __init__(self, nama: str, cpu: Cpu, ram_list: list, harddrive: Harddrive):
        self.nama = nama
        self.cpu = cpu
        self.ram_list = ram_list.copy()
        self.harddrive = harddrive

    def add_ram(self, ram: Ram):
        self.ram_list.append(ram)

    def tampilkan_info(self):
        print("\nInformasi Komputer:")
        print(f"Nama: {self.nama}")
        self.cpu.info()
        for ram in self.ram_list:
            ram.info()
        self.harddrive.info()
