int main(void) {
	int var = 42;
	int y = 0;
	int arr[4][6];
	int (*xp[10]); /* pointer to an array */
	*xp = arr;
	(*xp)[1] = var;
	y = (*xp)[1];
	printf("%i\n", y);
	return 0;
}
