#ifndef MASKA_HPP
#define MASKA_HPP

class MaskAFigure{
  public:
    virtual ~MaskAFigure()=0;
  protected:
    MaskAFigure();
};

class MaskARound:public MaskAFigure {
  public:
    MaskARound();
    ~MaskARound();
};

class MaskARec:public MaskAFigure {
  public:
    MaskARec();
    ~MaskARec();
};

class MaskATri:public MaskAFigure {
  public:
    MaskATri();
    ~MaskATri();
};

#endif
