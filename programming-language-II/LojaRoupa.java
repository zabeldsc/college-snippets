public class LojaRoupa {
    private String nomeFantasia, razaoSocial, cnpj, publicoAlvo;
    private float valorFaturamento, area;

    public LojaRoupa(String nomeFantasia, String razaoSocial, String cnpj, String digitoCNPJ, float valorFaturamento,
            String publicoAlvo) {
        this.nomeFantasia = nomeFantasia;
        this.razaoSocial = razaoSocial;
        this.cnpj = cnpj + digitoCNPJ;
        this.valorFaturamento = valorFaturamento;
        this.publicoAlvo = publicoAlvo;
    }

    public LojaRoupa(String nomeFantasia, String razaoSocial, String cnpj, String digitoCNPJ) {
        this(nomeFantasia, razaoSocial, cnpj, digitoCNPJ, 0, null);
    }

    public LojaRoupa(String nomeFantasia, String cnpj, String digitoCNPJ, float valorFaturamento, String publicoAlvo) {
        this(nomeFantasia, nomeFantasia, cnpj, digitoCNPJ, valorFaturamento, publicoAlvo);
    }

    float getValorFaturamento()
    {
        return this.valorFaturamento;
    }

    float getArea()
    {
        return this.area;
    }

    boolean faturamentoSuperior(float faturamentoLoja)
    {
        if (faturamentoLoja > getValorFaturamento()) return true;
        return false;
    }

    float valorAluguel()
    {
        return 50 * getArea();
    }

    public static void main(String[] args) {

    }
}
