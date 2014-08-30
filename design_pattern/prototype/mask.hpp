#ifndef MASK_HPP
#define MASK_HPP

#include <stdio.h>

class MaskFigure{
  public:
    virtual ~MaskFigure()=0;
    virtual MaskFigure* clone()=0;
  protected:
    MaskFigure();
    MaskFigure(const MaskFigure&);
};

class MaskRound:public MaskFigure {
  public:
    MaskRound();
    MaskRound(const MaskRound&);
    MaskRound* clone();
    ~MaskRound();
};

class MaskRec:public MaskFigure {
  public:
    MaskRec();
    MaskRec(const MaskRec&);
    MaskRec* clone();
    ~MaskRec();
};

class MaskTri:public MaskFigure {
  public:
    MaskTri();
    MaskTri(const MaskTri&);
    MaskTri* clone();
    ~MaskTri();
};

#endif
