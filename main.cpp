double my_pow(double num, int deg)
{

	 if (deg == 0)
        return 1;
    else if (deg == 1)
        return num;
    else if (deg % 2 == 0 )
        return my_pow(num * num, deg / 2);
    else
        return my_pow(num * num, deg / 2) * num;
}
