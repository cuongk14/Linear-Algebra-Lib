//multiply a matrix of size M*N with a matrix of size N*P
template<class dataType>
dataType ** multiplyMat(dataType ** A, dataType  **B,int M, int N, int P)
{
    dataType** C=new dataType *[M];
    int i,j,k;
    for (i=0;i<M;i++)
     C[i]=new dataType[P];
    
    for (i=0; i <M; i++)
      for(j=0; j<P; j++) 
        {
        C[i][j]=0;
        for(k=0;k<N;k++)
          C[i][j]+=A[i][k]*B[k][j];
        }
    return C; 
}
