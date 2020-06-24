#include <stdlib.h> /* abort() */

#include "../../src/cfg/info.h"

struct view_t;

int vifm_tests_exited;

void
vifm_restart(const char session[])
{
	if(session != NULL)
	{
		sessions_load(session);
	}
}

void
vifm_try_leave(int write_info, int cquit, int force)
{
	vifm_tests_exited = 1;
}

void
vifm_choose_files(struct view_t *view, int nfiles, char *files[])
{
	abort();
}

void
vifm_finish(const char message[])
{
	/* Do nothing. */
}

void
vifm_exit(int exit_code)
{
	/* Do nothing. */
}

int
vifm_testing(void)
{
	return 1;
}

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 filetype=c : */
