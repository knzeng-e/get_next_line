unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int	cpt;

	cpt = 0;
	while ((cpt < size - 1) && (src[cpt] != '\0'))
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = '\0';
	while (src[cpt] != '\0')
		cpt++;
	return (cpt);
}
