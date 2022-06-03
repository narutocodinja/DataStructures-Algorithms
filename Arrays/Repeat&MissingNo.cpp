vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int xor1;

    int set_bit_no;

    int i;
    int x = 0; // missing
    int y = 0; // repeated
    int n = A.size();

    xor1 = A[0];

    for (i = 1; i < n; i++)
        xor1 = xor1 ^ A[i];

    for (i = 1; i <= n; i++)
        xor1 = xor1 ^ i;

    set_bit_no = xor1 & ~(xor1 - 1);

    for (i = 0; i < n; i++) {
        if (A[i] & set_bit_no)
            x = x ^ A[i];

        else
            y = y ^ A[i];
    }

    for (i = 1; i <= n; i++) {
        if (i & set_bit_no)
            x = x ^ i;

        else
            y = y ^ i;
    }

    int x_count = 0;
    for (int i=0; i<n; i++) {
        if (A[i]==x)
            x_count++;
    }
    
    if (x_count==0)
        return {y, x};
    
    return {x, y};


}
