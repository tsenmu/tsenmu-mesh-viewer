#ifndef MESHVIEWER_H
#define MESHVIEWER_H

#include <QGLViewer>

class MeshViewer : public QGLViewer
{
    Q_OBJECT
public:
    explicit MeshViewer(QObject *parent = 0);

signals:

public slots:

};

#endif // MESHVIEWER_H
