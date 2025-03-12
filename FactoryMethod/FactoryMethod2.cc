//抽象类
class ISplitter{
    public:
        virtual void split()=0;
        virtual ~ISplitter(){}
    };
    
    
//工厂基类
class SplitterFactory{
public:
    virtual ISplitter* CreateSplitter()=0;
    virtual ~SplitterFactory(){}
};


    

//具体类
class BinarySplitter : public ISplitter{
    virtual void split()
    {}

};

class TxtSplitter: public ISplitter{
    virtual void split()
    {}
};

class PictureSplitter: public ISplitter{
    virtual void split()
    {}
};

class VideoSplitter: public ISplitter{
    virtual void split()
    {}
};

//具体工厂
class BinarySplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new BinarySplitter();
    }
};

class TxtSplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new TxtSplitter();
    }
};

class PictureSplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new PictureSplitter();
    }
};

class VideoSplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new VideoSplitter();
    }
};

class MainForm : public Form
{
    SplitterFactory*  factory;//工厂

public:
    
    MainForm(SplitterFactory*  factory){
        this->factory=factory;
    }
    
	void Button1_Click(){

        
		ISplitter * splitter=
            factory->CreateSplitter(); //多态new
        
        splitter->split();

	}
};



