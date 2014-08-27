#ifndef CSTRING_HPP
#define CSTRING_HPP

char *strcpy(char *dst, const char *src);
char *strncpy(char *dst, const char *src, int n);
char *strcat(char *s, const char *ct);
int strcmp(const char *cs,const char *ct);
char *strchr(const char *cs, int c);
char *strrchr(const char *cs, int c);
int strspn(const char *cs,const char *ct);
int strcspn(const char *cs,const char *ct);
char *strpbrk(const char *cs,const char *ct);
char *strstr(const char *cs,const char *ct);

unsigned int strlen(const char *cs);


#endif
