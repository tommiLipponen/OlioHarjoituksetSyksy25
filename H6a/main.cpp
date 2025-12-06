#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    MyClass myObject;
    myObject.raiseMySignal();
    
    return 0;
}
