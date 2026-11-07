public class Subarray {

    public static void printSubarrays(int numbers[]) {
        int ts = 0; // total subarrays count

        for (int i = 0; i < numbers.length; i++) {
            
            for (int j = i; j < numbers.length; j++) {
                
                for (int k = i; k <= j; k++) {
                    // print subarray elements
                    System.out.print(numbers[k] + " ");
                }
                ts++; // count total subarrays
                System.out.println();
            }
            System.out.println();
        }

        System.out.println("Total subarrays = " + ts);
    }

    public static void main(String args[]) {
        int numbers[] = {2, 4, 6, 8, 10};
        printSubarrays(numbers);
    }
}


