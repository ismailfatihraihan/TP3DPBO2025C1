class Ram extends Komponen {
  private int kapasitasGB;
  private String ddr;

  public Ram(int kapasitasGB, String ddr, String merk, String nama) {
      super(merk, nama);
      this.kapasitasGB = kapasitasGB;
      this.ddr = ddr;
  }

  @Override
  public void info() {
      System.out.println("RAM: " + merk + " " + nama + " (" + kapasitasGB + " GB, " + ddr + ")");
  }
}
