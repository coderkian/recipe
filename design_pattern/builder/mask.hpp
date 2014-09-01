#ifndef MASK_HPP
#define MASK_HPP

class MaskFigure{
  public:
    virtual ~MaskFigure()=0;
    virtual void CreateRound()=0;
    virtual void CreateRec()=0;
    virtual void CreateTri()=0;
  protected:
    MaskFigure();
};

class MaskAFigure:public MaskFigure {
  public:
    MaskAFigure();
    ~MaskAFigure();
    void CreateRound();
    void CreateRec();
    void CreateTri();
};

class MaskBFigure:public MaskFigure {
  public:
    MaskBFigure();
    ~MaskBFigure();
    void CreateRound();
    void CreateRec();
    void CreateTri();
};
#endif
