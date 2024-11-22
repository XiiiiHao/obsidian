void InsertSort(vector<int>A,int n){
  int j=0;
  for (int i = 2;i<n;i++) {
    if(A[i]<A[i-1]){
      A[0] = A[i];
      for (i = i-1;A[0]<A[j];--j) {
        A[j+1] = A[j]
      }
      A[j+1] = A[0]
    }

  }
}
