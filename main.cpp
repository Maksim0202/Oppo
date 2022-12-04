double my_pow(double num, int deg)
{
	int res = num;
	for (int i = 1; i < deg; i++)
	{
		res *= num;
	}
	return res;
}
