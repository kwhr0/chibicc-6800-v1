int lt(int a, int b)
{
	return a<=b;
}
int gt(int a, int b)
{
	return a>=b;
}

int main(int argc, char **argv)
{
	return lt(1,0) + gt(0,1);
}
