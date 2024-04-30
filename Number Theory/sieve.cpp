const int N = 1e5;
bool isPrime[N+1];
void sieve(){
    fill(isPrime, isPrime+N+1, 1);
    isPrime[0] = isPrime[1] = 0;
    for(int i=2; i*i<=N; i++){
        if(isPrime[i]){
            for(int j=i*i; j<=N; j+=i){
                isPrime[j] = 0;
            }
        }
    }
}