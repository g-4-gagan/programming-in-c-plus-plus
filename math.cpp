double math(char oper,double data1,double data2)
{
	double result;
	switch(oper)
	{
		case '+': result=data1+data2;
		          break;
	    case '-': result=data1-data2;
		          break;
	    case '*': result=data1*data2;
		          break;
		case '/': if(data2==0)
		          throw divbyzero();
		          if(data2<0)
		          throw divbyneg();
		          result=data1/data2;
		          break;
		default:  throw badoperator();
		          break;
	}
	return result;
}
