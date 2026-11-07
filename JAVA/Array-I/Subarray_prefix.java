public class Subarray_prefix {
    public static void MaxSubarray(int num[]) {

        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;
        int prefix[]=new int [num.length];
        //cal prefix array
        for(int i=1;i<prefix.length;i++)
        {
            prefix[i]=prefix[i-1]+num[i];
        }

        for(int i = 0; i < num.length; i++) {

            for(int j = i; j < num.length; j++) {

                currSum = i ==0 ? prefix[j]: prefix[j]-prefix[i-1];

                    if(maxSum < currSum) {
                    maxSum = currSum;
                }
            }
        }
        System.out.println("Maximum sum = " + maxSum);
    }
    public static void main(String args[]) {
        int num[] = {2, 4, 6, 8, 10};
        MaxSubarray(num);
    }
}