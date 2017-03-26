#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "Anatoliy_Korovkin_201755322_Task1.h"

int main(int argc, char *argv[])
{
    mvms_2017::Anatoliy_Korovkin_201755322_Task1 x(true);
    mvms_2017::Task2 x1(true);
    mvms_2017::Task3 x2(true);
    mvms_2017::Task4 x3(true);
    mvms_2017::Task5 x4(true);
    try{
        x.drawParallelepiped("/home/tolyas/test.png",200,200,50,100,30);
    }catch(std::exception ex){
        std::cout << ex.what();
    }

    return 0;
}
