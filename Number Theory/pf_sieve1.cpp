const int N = 50;
bool isPrime[N+1];

void sieve(){
    fill(isPrime, isPrime+N+1, 1);
    isPrime[0] = isPrime[1] = 0;
    vector<int> pfs[N+1];
    for(int i=2; i<=N; i++){
        if(isPrime[i]){
            pfs[i].pb(i);
            for(int j=2*i; j<=N; j+=i){
                isPrime[j] = 0;
                pfs[j].pb(i);
            }
        }
    }
    for(int i=2; i<=N; i++){
        cout << i << ": ";
        for(auto j: pfs[i]){
            int x = i;
            while(x%j == 0){
                cout << j << ", ";
                x /= j;
            }
        }
        cout << nline;
    }
}