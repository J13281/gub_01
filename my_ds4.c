#include <stdio.h>

#ifndef WIN32
#define WIN32
#endif
#include <gimxusb/include/gusb.h>

int main()
{
    puts("hello gusb");

    struct gusb_device_info *info = gusb_enumerate(0x00, 0x00);
    while (info)
    {
        printf("info->vendor_id=0x%04X, info->product_id=0x%04X\n",
            info->vendor_id, info->product_id);

        info = info->next;
    }
}
