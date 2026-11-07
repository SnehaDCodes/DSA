
public class linearSearch{
    public static int linearsearch(int n[],int key){
        for(int i=0;i<n.length;i++)
        {
            if(n[i]==key)
            {
                return i;
            }
        } return -1;
    }
    public static void main(String[] args) {
        int n[]={2,5,8,3,1,6,9};
        int key=9;
        int index=linearsearch(n,key);
        if(index==-1){
            System.out.println("NOT found");
        }else{
            System.out.println("key is at index "+index);
        }
    }
}