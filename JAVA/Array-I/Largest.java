public class Largest {
    public static int getlargest(int n[]){
        int largest=Integer.MIN_VALUE;
        int smallest=Integer.MAX_VALUE;
        for(int i=0;i<n.length;i++){
            if(largest<n[i]){
                largest=n[i];
            }
            if(smallest>=n[i]){
                smallest=n[i];
            }
        } System.out.println("smallest is " + smallest);
        return largest;
    }
    public static void main(String args[]){
        int n[]={2,55,89,22,10,15};
        System.out.println("Largest is " + getlargest(n));
    }
}
