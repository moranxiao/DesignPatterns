class Singleton{
public:
    static Singleton* GetInstance()
    {
        return &_inst;
    }
private:
    Singleton()
    {}
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton& ) = delete;
    static Singleton _inst;
};

Singleton Singleton::_inst;
