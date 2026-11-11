public class Main {

    public static void buscar(int[] vect, int n){
        int alcance = vect.length;
        for(int i=n; i>-1; i--){
            if(vect[i] % 2 ==0){
                System.out.println(vect[i]);
            }
        }
    }

    static void main(String[] args) {
        int[] numeros = {2,4,6,8,10,3,4,9, 33, 1, 3, 5, 7 ,9};
        Main.buscar(numeros, 13);
    }

}
