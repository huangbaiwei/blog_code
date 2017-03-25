//普通方法
void bubble(int a[],int n)
{
	int tmp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
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
			if(a[j]>a[j+1])
			{
				flag = 1;
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
		if(flag == 0)
			break;
	}
}

//优化2
void bubble2(int a[],int n)
{
	int tmp,k,flag=n-1;
	for(int i=0;i<flag;i++)
	{
		k = flag;
		flag = 0;
		for(int j=0;j<k;j++)
		{
			if(a[j]>a[j+1])
			{
				flag = j;
				tmp  = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = {3,5,5,7,2,8,4};
	bubble2(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
