#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);

typedef struct
{
        uint8_t magic[ELF_MAGIC_SIZE];
        uint8_t class;
        uint8_t data;
        uint8_t version;
        uint8_t os_abi;
        uint8_t abi_version;
        uint16_t type;
        uint64_t entry;
} ElfHeader;

#endif