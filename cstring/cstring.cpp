#include <stdio.h>

char *strcpy (char *dst,const char *src) {
	char *rs = dst;
	while ((*dst++=*src++) != '\0') ;
	return rs;
}

char *strncpy (char *dst, const char *src, int n) {
	char *rs = dst;
	while ((*dst++=*src++)!='\0' && 0<n) --n;
	return rs;
}

char *strcat (char *dst, const char *ct) {
	char *rs = dst;
	while (*dst != '\0') ++dst ;
	while ((*dst++=*ct++) != '\0') ;
	return rs;
}

int strcmp (const char *cs, const char *ct) {
	int rval = 0;
	while (*cs!='\0' && (*cs==*ct)) {
		cs++;
		ct++;
	}
	if (*cs < *ct) rval = -1;
	else if (*cs > *ct) rval = 1;
	else rval = 0;
	return rval;
}

char *strchr(const char *cs, int c){
	const char ch = c;
	while (*cs!=ch && *cs!='\0') ++cs;
	if (*cs == ch) return (char*)cs;
	return NULL;
}

char *strrchr(const char *cs, int c){
	const char ch = c;
	const char *rs = NULL;
	while (*cs!='\0'){
		if(*cs == ch) rs = cs;
		++cs;
	}
	return (char*)rs;
}

int strspn (const char *cs,const char *ct){
	const char *c = ct;
	const char *cs1 = cs;
	for (; *cs1!='\0'; ++cs1)
		for (c=ct; *c!=*cs1; ++c)
			if (*c=='\0') return cs1-cs;
	return cs1-cs;
}

int strcspn (const char *cs,const char *ct){
	const char *c = ct;
	const char *cs1 = cs;
	for (; *cs1!='\0'; ++cs1)
		for (c=ct; *c!='\0'; ++c)
			if (*c==*cs1) return cs1-cs;
	return cs1-cs;
}

char *strpbrk(const char *cs, const char *ct){
    const char *c = ct;
	for (; *cs!='\0'; ++cs)
		for (c=ct; *c!='\0'; ++c) 
			if (*c==*cs) return (char*)cs;
	return NULL;
}

char *strstr (const char *cs,const char *ct){
	const char *s1 = cs;
	const char *s2 =ct;
	while (*cs!='\0'){
		for (s1=cs,s2=ct; *s1==*s2 && *s2!='\0'; ++s1,++s2);
			if(*s2 == '\0') return (char*)cs;
		++cs;
	}
	return NULL;
}

unsigned int strlen (const char *cs){
	unsigned int len = 0;
	while (*cs++ != '\0') ++len;
	return len;
}
