/**
 * hash_djb2 - Hash function, takes a string and turns it into a hash number
 * @str: the string, constant value unrepeated in the hash table
 *
 * Return: a hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
