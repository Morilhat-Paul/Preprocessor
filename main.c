#define MACRO

#include "log.h"
#include "main.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
#ifndef MACRO
    #error Macro needed for this program (#define MACRO).
#else

    const char *home_dir = NULL;
    int VAR_NAME(token) = 1;
    const int CONST_NAME(token) = 2;

    printf("Var: %i\n", VAR_NAME(token));
    printf("Const: %i\n", CONST_NAME(token));

    LOG_DEBUG("DEBUG MESSAGE");
    LOG("LOG MESSAGE");
    LOG_ERROR("ERROR MESSAGE");

    home_dir = getenv("HOME");
    LOG_DEBUG(home_dir);

    if (likely(home_dir))
        printf("home directory: %s\n", home_dir);
    else
        LOG_ERROR(strerror(errno));

#endif /* !__MACRO__! */

    return 0;
}
