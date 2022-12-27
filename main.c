#include <stdio.h>

struct list_element
{
    void* data;
    struct list_element* next;
};

int main(int argc, char** argv)
{
    struct list_element head;
    head.data = "hello world";
    head.next = NULL;

    struct list_element* cur = &head;
    while(cur != NULL)
    {
        printf("%s\n", (const char*) cur->data);
        cur = cur->next;
    }
    return 0;
}
