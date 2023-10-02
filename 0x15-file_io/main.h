#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#define ELF_SIZE 4
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters);
void print_elf_header(const char *filename);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
#endif
