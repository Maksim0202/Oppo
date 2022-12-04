double my_pow(double num, int deg)
{
	int res = num;
	for (int i = 1; i < abs(deg); i++)
	{
		res *= num;
	}
	if(deg < 0)
	{
		res = 1 / res;
	}
	return res;
}
