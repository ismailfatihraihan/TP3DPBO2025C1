import java.util.ArrayList;

class Komputer {
    private String nama;
    private Cpu cpu;
    private ArrayList<Ram> ramList;
    private Harddrive harddrive;

    public Komputer(String nama, Cpu cpu, ArrayList<Ram> ramList, Harddrive harddrive) {
        this.nama = nama;
        this.cpu = cpu;
        this.ramList = new ArrayList<>(ramList);
        this.harddrive = harddrive;
    }

    public void addRam(Ram ram) {
        ramList.add(ram);
    }

    public void tampilkanInfo() {
        System.out.println("\nInformasi Komputer: ");
        System.out.println("Nama: " + nama);
        cpu.info();
        for (Ram ram : ramList) {
            ram.info();
        }
        harddrive.info();
    }
}
