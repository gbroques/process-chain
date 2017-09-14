#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char * argv[]) {
  pid_t childpid = 0;
  int i, j, n, nchars;
  if (argc != 3) {
    /* check for valid number of command-line arguments */
    fprintf(stderr, "Usage: %s processes nchars\n", argv[0]);
    return 1;
  }
  n = atoi(argv[1]);
	nchars = atoi(argv[2]);

  for (i = 1; i < n; i++)
    if (childpid = fork())
      break;

	char mybuf[nchars];
	for (j = 0; j < nchars; j++) {
		scanf("%c", &mybuf[j]);
	}
	mybuf[nchars] = '\0';
	fprintf(stderr, "\nProcess ID: %ld %s\n", (long)getpid(), mybuf);
	
  return 0;
}
