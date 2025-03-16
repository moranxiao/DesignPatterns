#include <iostream>
#include <list>
#include <string>

class IObserver{
public:
    virtual ~IObserver() {}
    virtual void Receive() = 0;
};
class Observer:public IObserver{
public:
    void Receive() override
    {}
    ~Observer() override
    {}
};

class ISubject{
public:
    virtual ~ISubject()
    {}
    virtual void Notify() = 0;
    virtual void Attach() = 0;
    virtual void Detach() = 0;
};
class Subject: public ISubject{
    void Notify() override
    {
        for(auto& e : _observers)
        {
            e->Receive();
        }
    }
    ~Subject() override
    {}
    void Attach() override
    {}
    void Detach() override
    {}

private:
    std::list<IObserver*> _observers;
};
