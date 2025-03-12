from komponen import Komponen
from perangkat_tambahan import PerangkatTambahan

class Cpu(Komponen, PerangkatTambahan):
    def __init__(self, jumlah_core: int, kecepatan_ghz: float, merk: str, nama: str):
        super().__init__(merk, nama)
        self.jumlah_core = jumlah_core
        self.kecepatan_ghz = kecepatan_ghz

    def info(self):
        print(f"CPU: {self.merk} {self.nama} ({self.jumlah_core} Core, {self.kecepatan_ghz} GHz)")

    def info_tambahan(self):
        print("Tambahan CPU: Overclocking support.")
