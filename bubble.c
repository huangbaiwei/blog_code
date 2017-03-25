//普通方法
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

//优化1
void bubble1(int a[],int n)
{

	int tmp,flag;
	for(int i=0;i<n-1;i++)
	{
		flag = 0;
		for(int j=0;j<n-1-i;j++)
		{
			if(a[i]>a[j])
			{
				flag = 1;
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		if(flag == 0)
			break;
	}
}

int main()
{
	int arr[] = {3,5,5,7,2,8,4};
	bubble1(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
