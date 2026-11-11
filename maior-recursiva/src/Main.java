public class Main {

    static int i = 0;
    static int maior = 0;

    public static int acharMaior(int[]vect, int tamanho){
        if(tamanho == 1){
            return vect[0];
        }
        if(i == tamanho){
            return maior;
        }
        else{
            if(vect[i] > maior){
                maior = vect[i];
            }
            i++;
            acharMaior(vect, tamanho);
        }
        return maior;
    }

    static void main(String[] args) {
        int[] vect = {3,15,7,22, 42,9, 1000};
        System.out.println(acharMaior(vect, 7));
    }

}