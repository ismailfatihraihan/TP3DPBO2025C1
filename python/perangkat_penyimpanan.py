from abc import ABC, abstractmethod

class PerangkatPenyimpanan(ABC):
    @abstractmethod
    def kapasitas_maksimal(self):
        pass
