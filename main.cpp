#include <QApplication>
#include "meshviewer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MeshViewer viewer;
    viewer.show();
    return app.exec();
}
