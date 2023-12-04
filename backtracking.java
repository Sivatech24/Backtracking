import java.util.Arrays;

public class backtracking {
    public static void backtarcking(int[] elements,int start){
        if(start == elements.length-1){
            System.out.println(Arrays.toString(elements));
            return;
        }
        for(int i = start; i < elements.length; i++){
            int temp = elements[start];
            elements[start] = elements [i];
            elements [i] = temp;
            backtarcking(elements, start + 1);
            temp = elements[start];
            elements [start] = elements[i];
            elements[i] = temp;
        }
    }
    public static void main(String[] args) {
        int[] elements={1,2,3};
        backtarcking(elements,0);
    }
}
