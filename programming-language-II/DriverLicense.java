import java.time.LocalDate;

public class DriverLicense {
    private static int idCounter = 0;
    private int licenseNumber = 0, points = 0;
    private String cpf, status = "Válida";
    private LocalDate expirationDate, issueDate;

    public DriverLicense(String cpf) {
        this.licenseNumber = ++idCounter;
        this.cpf = cpf;
        this.issueDate = LocalDate.now();
        this.expirationDate = issueDate.plusYears(1);
    }

    public void seizeLicense() {
        this.status = "Apreendida";
    }

    public void addPoints(int points) {
        this.points += points;
        if (this.points > 20) {
            seizeLicense();
        }
    }

    public void printPoints() {
        System.out.println("\n Você tem " + this.points + " pontos na sua carteira!");
    }

    public void clearLicense() {
        this.points = 0;
    }

    public boolean validLicense() {
        return !(LocalDate.now().isAfter(expirationDate) || this.status.equals("Apreendida"));
    }
}
