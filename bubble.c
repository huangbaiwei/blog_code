void bubble(int a[],int n)
{
	int tmp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[i]>a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = {3,5,5,7,2,8,4};
	bubble(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
