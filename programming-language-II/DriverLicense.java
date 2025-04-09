import java.time.LocalDate;

public class DriverLicense {
    private static int idCounter = 0;
    private int licenseNumber, points;
    private String cpf, status, category;
    private LocalDate expirationDate, issueDate;

    public DriverLicense(String cpf, String category) {
        this.licenseNumber = ++idCounter;
        this.points = 0;
        this.cpf = cpf;
        this.status = "Válida";
        this.category = category;
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
