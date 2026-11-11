public class Main {

    static int total = 0;
    static int i=0;

    public static int somar(int[] vect, int tamanho){
        if(i == tamanho){
            return total;
        }
        else{
            total = total+vect[i];
            i++;
            somar(vect, tamanho);
        }
        return total;
    }

    static void main(String[] args) {
        int[] numeros = {1,2,3,4,5};
        System.out.println(Main.somar(numeros,5));
    }
}
