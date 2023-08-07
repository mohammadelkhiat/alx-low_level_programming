#include "main.h"

#define ELF_MAGIC_SIZE 4

void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header(const ElfHeader *header)
{
	printf("  Magic:   %02X %02X %02X %02X\n",
		   header->magic[0], header->magic[1], header->magic[2], header->magic[3]);
	printf("  Class:			%d-bit\n", header->class == 1 ? 32 : 64);
	printf("  Data:				%s\n", header->data == 1 ? "2's complement, little endian" : "unknown");
	printf("  Version:			%d (current)\n", header->version);
	printf("  OS/ABI:			%s\n", header->os_abi == 0 ? "System V" : "unknown");
	printf("  ABI Version:			%d\n", header->abi_version);
	printf("  Type:				0x%04X (EXEC)\n", header->type);
	printf("  Entry point address:		0x%016lX\n", header->entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Invalid number of arguments. Usage: elf_header elf_filename");
	}

	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Failed to open the file.");
	}

	ElfHeader header;
	ssize_t bytes_read = read(fd, &header, sizeof(ElfHeader));

	if (bytes_read != sizeof(ElfHeader))
	{
		print_error("Failed to read the ELF header.");
	}

	if (header.magic[0] != 0x7F || header.magic[1] != 'E' || header.magic[2] != 'L' || header.magic[3] != 'F')
	{
		print_error("Not an ELF file.");
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
