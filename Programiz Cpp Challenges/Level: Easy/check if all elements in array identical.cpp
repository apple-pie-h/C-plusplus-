string checkIdenticalItems(int arr[], int arrSize) {
    int s=0;
    for (int i=0; i<arrSize-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            s++;
        }
    }
    if (s==arrSize-1)
    {
        return "Identical";
    }
    else 
    return "Not Identical";
}
