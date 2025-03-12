from komponen import Komponen

class Storage(Komponen):
    def __init__(self, kapasitas_gb: int, merk: str, nama: str):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas_gb
