public class Book {
    private String name, author, edition;
    private float costPrice;
    private int year;

    public Book(String name, String author, String edition, float costPrice, int year) {
        this.name = name;
        this.author = author;
        this.edition = edition;
        this.costPrice = costPrice;
        this.year = year;
    }

    public float calculateSalePrice(float profitMarginPercentage) {
        return this.costPrice + (profitMarginPercentage / 100 * this.costPrice);
    }

    public String getBookInfo() {
        return "Nome do livro: " + this.name +
                "\nAutor: " + this.author +
                "\nEdição: " + this.edition +
                "\nPreço de custo: " + this.costPrice +
                "\nAno: " + this.year;
    }

    public static void main(String[] args) {
        Book book = new Book("Teste", "Bel", "Especial", 50, 2025);
        float bookPrice = book.calculateSalePrice(20);
        String bookData = book.getBookInfo();

        System.out.println(bookData + "\nValor da venda: " + bookPrice);
    }
}
