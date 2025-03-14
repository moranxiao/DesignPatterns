class IAlgorithm{
public:
    virtual ~IAlgorithm() {}
    virtual void Func() = 0;
};

class Func1:public IAlgorithm{
public:
    virtual ~Func1() override
    {}
    virtual void Func() override
    {
        //实现功能
    }
};

class Func2:public IAlgorithm{
public:
    virtual ~Func2() override
    {}
    virtual void Func() override
    {
        //实现功能
    }
};


class Library{
public:
    Library(IAlgorithm* alg)
    :_alg(alg)
    {

    }
private:
    IAlgorithm* _alg;
};
