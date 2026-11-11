public class Main {

    public static int buscar(int valor, int[] vect) {
        int min = 0;
        int max = vect.length - 1;

        while(min <= max){
            int meio = (min+max)/2;
            int chute = vect[meio];

            if (valor == vect[meio]){
                return meio;
            }
            if (chute > valor){
                max = meio - 1;
            }
            else{
                min = meio + 1;
            }
        }

        return 10000;
    }

    static void main(String[] args) {
        int[] vetorAlvo = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140};
        System.out.print(Main.buscar(30,vetorAlvo));

    }
}
