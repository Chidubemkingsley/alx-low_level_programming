#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
void print_osabi(unsigned char *e_ident);
void print_version(unsigned char *e_ident);

/**
 * check_elf - scripted to show the file scripted elf
 * @e_ident: scripted to be the pointer ident scripted
 *
 * Description: scripted not elf perform exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
int index;

for (index = 0; index < 4; index++)
{
if (e_ident[index] != 127 &&
e_ident[index] != 'E' &&
e_ident[index] != 'L' &&
e_ident[index] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * print_magic - scripted to print the magic script
 * @e_ident: scriptd to give the ident of the magic script
 *
 * Description: scripted to show the magic script
 */
void print_magic(unsigned char *e_ident)
{
int index;

printf("  Magic:   ");

for (index = 0; index < EI_NIDENT; index++)
{
printf("%02x", e_ident[index]);

if (index == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
 * print_class - scripted to print class in the script
 * @e_ident: scripted to show the ident script
 */
void print_class(unsigned char *e_ident)
{
printf("  Class:  ");

switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_data - scripted to print data scripted
 * @e_ident: scripted to show the ident in the script
 */
void print_data(unsigned char *e_ident)
{
printf("  Data:  ");

switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_version - scripted to the print version script
 * @e_ident: scripted to find ident in script
 */
void print_version(unsigned char *e_ident)
{
printf("  Version:   %d",
e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
 * print_osabi - scripted to give print osabi
 * @e_ident: scripted to give the ident script
 */
void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:    ");

switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}

/**
 * print_abi - scripted to print abi in the version
 * @e_ident: scripted to show the ident in the version
 */

void print_abi(unsigned char *e_ident)
{
printf("  ABI Version:   %d\n",
e_ident[EI_ABIVERSION]);
}

/**
 * print_type - scripted to print type of value script
 * @e_type: scripted type of value
 * @e_ident: scripted to show the ident value
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

printf("  Type:   ");

switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}

/**
 * print_entry - scripted to show the print entry
 * @e_entry: scripted to give the entry value
 * @e_ident: scripted to give the ident value script
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:    ");

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);

else
printf("%#lx\n", e_entry);
}

/**
 * close_elf - scripted to show the close elf script
 * @elf: scripted to show the elf function in the value of the script
 *
 * Description: execution success perform - exit code 98
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", elf);
exit(98);
}
}

/**
 * main - expose the elf file at the beginning of the file
 *
 * @argc: scripted no of argumt given
 * @argv: scripted argument of the script
 *
 * Return: scripted to return 0 on success.
 *
 * Description: scripted to show the value
 *              failure perform - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int k, l;

k = open(argv[1], O_RDONLY);
if (k == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(k);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
l = read(k, header, sizeof(Elf64_Ehdr));
if (l == -1)
{
free(header);
close_elf(k);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}

print_type(header->e_type, header->e_ident);
check_elf(header->e_ident);
printf("ELF Header:\n");
print_magic(header->e_ident);
print_data(header->e_ident);
print_class(header->e_ident);
print_version(header->e_ident);
print_abi(header->e_ident);
print_osabi(header->e_ident);
print_entry(header->e_entry, header->e_ident);

free(header);
close_elf(l);
return (0);
}

