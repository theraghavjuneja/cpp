int a=0;
    int b=1;
    int n;
    int nextNumber;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        nextNumber=a+b;
        a=b;
        b=nextNumber;
    }
    cout<<nextNumber;