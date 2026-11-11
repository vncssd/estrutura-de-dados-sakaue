import java.util.Arrays;

public class ordernarVetor {

    public static int[] ordenar(int[] vect){
        int max = vect.length;

        for(int i=0;i<max;i++){
            for(int j=0; j<max; j++){
                if(vect[j]>vect[i]){
                    int temp = vect[i];
                    vect[i] = vect[j];
                    vect[j] = temp;
                }
            }
        }
        return vect;
    }

    static void main(String[] args) {
        int[] vect = {20, 40, 10, 50, 30, 90, 100, 1090, 2000};
        System.out.print(Arrays.toString(ordernarVetor.ordenar(vect)));
    }
}
