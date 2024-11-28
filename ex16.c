#include <stdio.h>
#include <assert.h>
#include <string.h>

struct Person {
    char name[100];  // 假设名字的最大长度为 100
    int age;
    int height;
    int weight;
};

typedef struct Person My_person;

void Person_print(My_person who) {
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[]) {
    // 创建两个 Person 结构体，直接在栈上分配空间
    My_person joe = {"Joe Alex", 32, 64, 140};   // Joe 的信息
    My_person frank = {"Frank Blank", 20, 72, 180};  // Frank 的信息

    printf("Joe is at memory location %p:\n", (void*)&joe);  // 打印地址
    Person_print(joe);

    printf("Frank is at memory location %p:\n", (void*)&frank);  // 打印地址
    Person_print(frank);

    joe.age += 20;
    joe.height -= 2;
    joe.weight += 40;
    Person_print(joe);

    frank.age += 20;
    frank.weight += 20;
    Person_print(frank);

    return 0;
}
