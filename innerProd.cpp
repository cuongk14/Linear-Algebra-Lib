//multiply two vectors of size N
template<class dataType>
dataType  innerProd(dataType *v1, dataType *v2, int N)
{
    dataType res=0;
    for(int i=0; i<N;i++)
     res+=v1[i]*v2[i];
     
    return res;
}
