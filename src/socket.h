#ifndef SOCKET_H
#define SOCKET_H

#include <stddef.h>
#include <sys/types.h>

int init_socket();
ssize_t read_message(int socket, char* buffer, int flags);
void send_message(int socket, char* message, size_t size, int flags);
void close_socket(int socket);

#endif // SOCKET_H

