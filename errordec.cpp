using namespace std;
class Error
{
   public:
   virtual void printmessage()
        {cout<<"**error: type error\n";}
};

class arithmetic:public Error
{
	public:
	virtual void printmessage()
        {cout<<"**error: type arithmetic\n";}
};

class divbyzero:public arithmetic
{
	public:
	virtual void printmessage()
        {cout<<"**error:100 divisor 0\n";}
};

class divbyneg:public arithmetic
{
	public:
	virtual void printmessage()
        {cout<<"**error:101 negative divisor\n";}
};

class badoperator:public arithmetic
{
	public:
	virtual void printmessage()
        {cout<<"**error:102 invalid opertaor\n";}
};


