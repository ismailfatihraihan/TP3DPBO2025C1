class Harddrive extends Storage implements PerangkatPenyimpanan {
  private String tipeDrive;

  public Harddrive(int kapasitasGB, String tipeDrive, String merk, String nama) {
      super(kapasitasGB, merk, nama);
      this.tipeDrive = tipeDrive;
  }

  @Override
  public void info() {
      System.out.println("Harddrive: " + tipeDrive + " " + merk + " " + nama + " (" + kapasitasGB + " GB)");
  }

  @Override
  public void kapasitasMaksimal() {
      System.out.println("Harddrive ini mendukung hingga 4TB penyimpanan.");
  }
}
