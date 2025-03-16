#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	const char *local_dir = "/path/to/local/directory";
	const char *remote_user = "user";
	const char *remote_host = "remote_host";
	const char *remote_dir = "/path/to/remote/diectory";

	// Constructting the rsync command
	char command[256];
	sprintf(command, "rsync -avz %s %s@%s:%s", local_dir, remote_user, remote_host, remote_dir);

	// execution of rsync command
	system(command);

	// acknowledgement
	printf("Local directory synced with remote directory \n");
	return 0;
}