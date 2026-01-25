#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print,
 *         0 if the file can't be opened or read, filename is NULL,
 *         or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes_read, bytes_written;
    char *buffer;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (0);

    /* Open the file in read-only mode */
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    /* Allocate buffer to hold the text */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    /* Read from the file */
    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Write to STDOUT (file descriptor 1) */
    bytes_written = write(1, buffer, bytes_read);
    
    /* Clean up */
    free(buffer);
    close(fd);

    /* Check if write succeeded and wrote all bytes */
    if (bytes_written == -1 || bytes_written != bytes_read)
        return (0);

    return (bytes_written);
}
