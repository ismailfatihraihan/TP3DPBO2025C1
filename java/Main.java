import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Cpu cpu = new Cpu(8, 3.4, "Intel", "Core i7");
        Ram ram1 = new Ram(16, "DDR5", "Corsair", "Vengeance");
        Harddrive harddrive = new Harddrive(1024, "SSD", "Samsung", "Evo");

        ArrayList<Ram> ramList = new ArrayList<>();
        ramList.add(ram1);
        ramList.add(new Ram(8, "DDR4", "Corsair", "Vengeance"));

        Komputer komputer1 = new Komputer("PC Abdul", cpu, ramList, harddrive);
        komputer1.addRam(new Ram(16, "DDR5", "Kingston", "FURY"));

        // Komputer 2 (PC Budi)
        Cpu cpu2 = new Cpu(6, 3.0, "AMD", "Ryzen 5");
        Ram ram2 = new Ram(32, "DDR4", "G.Skill", "Trident Z");
        Harddrive harddrive2 = new Harddrive(512, "NVMe", "WD", "Black SN850");

        ArrayList<Ram> ramList2 = new ArrayList<>();
        ramList2.add(ram2);
        ramList2.add(new Ram(16, "DDR4", "Corsair", "Vengeance"));

        Komputer komputer2 = new Komputer("PC Budi", cpu2, ramList2, harddrive2);

        // Tampilkan informasi komputer
        komputer1.tampilkanInfo();
        komputer2.tampilkanInfo();
    }
}
