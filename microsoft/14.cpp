class Solution{
public:
    int minSteps(int D){
        // code here
        D=abs(D);
        int sum=0;
        int steps=0;
        while(sum<D){
            sum+=steps;
            steps++;
        }
        while((sum-D)%2 == 1){
            sum+=steps;
            steps++;
        }
        return steps-1;
    }
};