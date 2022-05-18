#include "hsh.h"

/**
  * _sigint - reprompts
  * @signal: signal passed
  */
void _sigint(__attribute__((unused)) int signal)
{
	fflush(STDIN_FILENO);
	write(STDERR_FILENO, "\n$ ", 3);
}
