#ifndef MASK_HPP
#define MASK_HPP

class MaskFigure{
  public:
    virtual ~MaskFigure()=0;
  protected:
    MaskFigure();
};

class MaskRound:public MaskFigure {
  public:
    MaskRound();
    ~MaskRound();
};

class MaskRec:public MaskFigure {
  public:
    MaskRec();
    ~MaskRec();
};

class MaskTri:public MaskFigure {
  public:
    MaskTri();
    ~MaskTri();
};

#endif
