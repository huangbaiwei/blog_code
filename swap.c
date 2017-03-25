int swap(int a,int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	return 0;
}

int swap1(int * a,int * b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return 0;
}

int swap2(int a,int b)
{
	a = a^b;
	b = a^b;
	a = a^b;
	return 0;
}
