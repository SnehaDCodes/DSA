public class BinarySearch {
    public static int binarysearch(int n[], int key){
        int start=0,end=n.length-1;
        while(start<=end){
            int mid=(start+end)/2;
            
            if(n[mid]==key){
                return mid;
            }if(n[mid]<key){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int n[]={23,56,89,11,13};
        int key=89;
        System.out.println("index for key is "+ binarysearch(n,key));
    }
}
