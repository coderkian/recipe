#ifndef MASKB_HPP
#define MASKB_HPP

class MaskBFigure{
  public:
    virtual ~MaskBFigure()=0;
  protected:
    MaskBFigure();
};

class MaskBRound:public MaskBFigure {
  public:
    MaskBRound();
    ~MaskBRound();
};

class MaskBRec:public MaskBFigure {
  public:
    MaskBRec();
    ~MaskBRec();
};

class MaskBTri:public MaskBFigure {
  public:
    MaskBTri();
    ~MaskBTri();
};

#endif
