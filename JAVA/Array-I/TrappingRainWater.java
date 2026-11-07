public class TrappingRainWater {
    public static int Trap(int bar[]){
        int n=bar.length;
        //calculate left max
            int leftMax[]=new int[n];
            leftMax[0]=bar[0];
            for(int i=1;i<n;i++){
                leftMax[i]=Math.max(bar[i],leftMax[i-1]);
            }
    
        int rightMax[]=new int[n];
        rightMax[n-1]=bar[n-1];
        for(int i=n-2;i>=0;i--){
            rightMax[i]=Math.max(bar[i],rightMax[i+1]);
        }

        //loop
        int trappedwater=0;
        for(int i=0;i<n;i++){
            int Waterlevel=Math.max(leftMax[i],rightMax[i]);
            trappedwater+=Waterlevel-bar[i];
        }
        return trappedwater;
    }
    public static void main(String args[]){
        int bar[]={4,2,0,6,3,2,5};
        System.out.println(Trap(bar));
    }
    
}
