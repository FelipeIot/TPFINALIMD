#include <stdio.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    unsigned char transmitDataBuffer[2];
    transmitDataBuffer[0] = 0xAE;
    transmitDataBuffer[1] = 64;

   
    int my_dev = open("/dev/ssd1306", O_RDWR);

    if (my_dev < 0)
    {
        perror("Fail to open device file: /dev/ssd1306.");
    }
    else
    {
        if (write(my_dev, transmitDataBuffer, 1)) 
        {
            printf("Error writing for I2C\n");
            return 0;
        }
        close(my_dev);
    }

    return 0;
}
