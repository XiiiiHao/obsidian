void BubbleSort(vector<int> A, int n){
  for(int i = 0; i<n-1;i++){
    bool flag = true;
    for(int j=n-1;j>i;j--){
      if(A[j-1]>A[j]){
        int tmp = A[j];
        A[j-1] = A[j];
        A[j] = tmp;
        flag = true;
      }
      if(flag == false) return ;
    }

  }
}
