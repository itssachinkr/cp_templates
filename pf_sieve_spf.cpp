const int N = 100;
int spf[N+1]; // spf[i] = smallest prime factor of i;
// is spf[i] => i is prime

void sieve(){
    iota(spf, spf+N+1, 0);  // 0,1,2,3,4....
    for(int i=2; i<=N; i++){
        if(spf[i] == i){
            for(int j=i*i; j<=N; j+=i){
                // spf[j] = min(i, spf[j]) or
                if(spf[j] == j){
                    spf[j] = i;
                } 
            }
        }
    }
    int x;
    cin >> x;
    cout << x << ": ";
    while(x > 1){
        cout << spf[x] << " ";
        x = x/spf[x];
    }
}