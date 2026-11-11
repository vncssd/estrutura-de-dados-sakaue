public class Main {

    public static int somar(int[] vect){
        int range = vect.length;
        int total = 0;
        for (int i=0; i<range; i++){

            total = total + vect[i];
        }
        return total;
    }

    static void main(String[] args) {
        int[]vect = {1,2,3,4,5,6};
        System.out.print(Main.somar(vect));
    }
}
