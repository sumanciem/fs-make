#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

void yyerror(const char* msg); // prints the message msg to stderr after an error is detected

#ifdef __cplusplus
}
#endif
