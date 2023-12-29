if(n==1)
    {
        // a neither prime nor composite number
        return false;
    }
    if(n==2)
    {
        return true;
    }
    // now coming upon to the cases further on
    for(int i=2;i<n;i++)
    {
        if(i%n==0)
        {
            return false;
        }
    }
    return true;