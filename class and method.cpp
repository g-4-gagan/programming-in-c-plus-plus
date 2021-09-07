class fraction{
	private : int numerator;
	          int denominator;
	public :  void store(int n,int d);
	          void display() const;
};

void fraction::store(int n,int d){
              numerator=n;
			  denominator=d;
			  return;	
}

void fraction::display() const{
              cout<<numerator<<"/"<<denominator;
              return;
}

int main(){
	          fraction f1,f2;
	          f1.store(2,3);
	          f1.display();
	          return 1;
}
