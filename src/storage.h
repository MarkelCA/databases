#ifndef STORAGE_H
#define STORAGE_H

char* get(char* key);
void set(const char* key, const char* value);
void del(const char* key);
char* list();

#endif // STORAGE_H

