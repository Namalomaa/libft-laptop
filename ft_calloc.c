void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	res = malloc(nmemb * size);
	if (! res)
		return (NULL);
	ft_bzero (res, (nmemb * size));
	return (res);
}
