public class Main {

    public static void imprimirValores(int x){
        if(x == 0){
            System.out.println(x);

        }
        else{
            System.out.println(x);
            x--;
            imprimirValores(x);
        }
    }

    static void main(String[] args) {
        Main.imprimirValores(10);
    }

}
