#ifndef MESHVIEWER_H
#define MESHVIEWER_H

#include <QGLViewer/qglviewer.h>

class MeshViewer : public QGLViewer
{
protected :
  virtual void draw();
  virtual void init();
  virtual QString helpString() const;
};

#endif // MESHVIEWER_H
