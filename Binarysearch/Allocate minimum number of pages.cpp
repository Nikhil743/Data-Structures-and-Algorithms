class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool solve(int *a, int n, int mid, int m){
        int sum = 0;
        int student = 1;
        for(int i = 0; i <n; i++){
            if(a[i] > mid)return false;
            if(sum + a[i] > mid){
                student++;
                sum = a[i];
                if(student > m)return false;
            }
            else sum += a[i];
        }
        return true;
    }
    int findPages(int a[], int n, int m) 
    {
        //code here
        if(n<m)return -1;
        int lb = 0;
        int ans = 0;
        int sum = accumulate(a,a+n,0);
        int ub = sum;
        while(lb <= ub){
            int mid = (lb + ub)/2;
            if(solve(a,n,mid,m)){
                ans = mid;
                ub = mid - 1;
            }
            else{
                lb = mid + 1;
            }
        }
        return ans;
        
        
    }
};
