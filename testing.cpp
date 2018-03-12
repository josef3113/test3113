//
//
//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//
// void main ()
// {
//	 std::vector <int> v;
//	 v.push_back(5);
//	 std::list <double> ld;
//	 ld.push_front(2.1);
//	 ld.push_front(1.1);
//	 std::cout<<*ld.begin();
//	
// }
//
//#include <iostream>
//using namespace std;
//
//class A
//{
//protected: 
//	int x;
//public:
//	A() { cout << "A born"; }
//	virtual ~A() { cout<<"dis A"<<endl;}
//};
//
//class B :public A	//if inheretance is not public base class cant be pointer to derive "ki rozim lehachbie et ze"
//{
//	void foo()
//	{
//		this->x=0;
//	}
//
//public:
//	B(){cout<<" B"<<endl;}
//	~B(){cout<<"dis B"<<endl;}
//
//};
//
//class C :public B
//{
//	void foo()
//	{
//		this->x=8;
//	}
//public:
//	C(){cout<<" C"<<endl;}
//	~C(){cout<<"dis C"<<endl;}
//};
//
//int main()
//{
//	A * ptra =new A;
//
//	//cout<<dynamic_cast <C *> (ptrc); //return 0!	 // dynamic casting need to be pointer to pointer --to check if the value that in () can be "muzba al yedi " pointer type that in <>
//
//	cout<< dynamic_cast <A*> (ptra);
//	delete ptra;
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//class Point {
//    int x;
//public:
//    Point(int x=0) { this->x = x; }
//    Point(  Point &  p) { x = p.x;}	 //dont must be const but must be ref
//    int getX() { return x; }
//};
//
//int main()
//{
//   Point p1();
//   
//   Point p2 = Point();
//   cout << p2.getX();
//
//   system("pause");
//   return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//class Test
//{
//public:
//   Test(Test &t) { }
//   Test()        { }
//};
//
//Test fun()
//{
//    cout << "fun() Called\n";
//    Test t;
//    return t;
//}
//
//int main()
//{
//    Test t1;
//    Test t2 = fun();
//
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//int x = 1;
//void fun()
//{
//    int x = 2;
//    {
//        int x = 3;
//        cout << ::x << endl;
//    }
//}
//int main()
//{
//    fun();
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
// 
//class a
//{
//public :
//    ~a()
//    {
//        cout << "destroy";
//    }
//};
//int main()
//{
//   vector <a*> *v1  = new vector<a*> [5];
//   vector <a> *v2  = new vector<a>;
//   
//   delete[] v1;
//   delete v2;
//   _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
//   return 0;
//}



//#include <stdio.h>
//int main()
//{
//   const int x=10;	 // value const must be declure in time !!
//   //x = 10;
//   printf("%d", x);
//   return 0;
//}
//
//#include <iostream>
//using namespace std;
// 
//class A
//{
//private:
//    int x;
//	int & ref;							  
//public:
//    A(int _x = 0):ref(x)  {cout<<"A";  x = _x; }
//    int get()  { return ref; }
//};
//
//class B
//{
//    static A a;		 
//public:
//	//B():a(0){};
//   static int get()
//   {  return a.get(); }
//};
// 
//A B::a(0);	 //must be initialization like that ==becouse a is static in B 
//int main(void)
//{
//    //B b;
//   // cout << B::get();
//    return 0;
//}
//
//
//#include<iostream>
//using namespace std;
// 
//class Test
//{
//private:
//	//static
//      int count;
//	   int &   ref;
//public:
//	Test():ref(count){count=0;}
//    void fun()const;
//
//	static void fun(int*){}	//static no diffrent betwwen function
//	//void fun(int [])const{}
//};
// 
////int Test::count = 0;
// 
//void Test::fun()const 
//	{
//   // count++;
//	ref++;
//    cout << count << " ";
//    
//} 
//
// 
//int main()
//{
//	Test t;
//	const Test r;
//	cout<< sizeof(r)<<endl;
//	//r.fun();
//	//r.fun();
//	//t.fun();
//    
//    return 0;
//}


//#include <iostream>
//class Test
//{
//	static const int x;
//public:
//	
//    static void fun();	  //function static cannot be const
//};
//void Test::fun()   // non !! static void Test == the static/frienf write only in the class!!
//{
//	
//	std::cout<<"fun() is static\n"<<Test::x;
//}
//const int Test::x=0;   // to define static const int in class
//int main()
//{
//    Test::fun();   
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//class A
//{
//protected:
//    int x;
//public:
//    A() {x = 0;}
//    friend void show();
//};
// 
//class B: public A
//{
//public:
//    B() : y (0) {}
//	friend void show();
//private:
//    int y;
//};
// 
//void show()	     // function can be friend to some classs
//{
//    A a;
//    B b;
//    cout << "The default value of A::x = " << a.x << " ";
//    cout << "The default value of B::y = " << b.y;  //friend of class B
//}
//
//int main ()
//{
//	show();
//	return 0;
//}
//
//
//#include <iostream>
//using namespace std;
// 
//class B;
//class A {
//    int a;
//public:
//    A():a(0) { }
//    void show(A& x, B& y);
//};
// 
//class B {
//private:
//    int b;
//public:
//    B():b(0) { }
//    friend void A::show(A& x, B& y);   // function of A can be friend of class B!!
//};
// 
//void A::show(A& x, B& y) {
//    x.a = 10;
//	y.b=5;
//    cout << "A::a=" << x.a << " B::b=" << y.b;	  // can chancge x.a becouse it is function of A and can chancgh y.b becouse function is friend of B
//}
// 
//int main() {
//    A a;
//    B b;
//    a.show(a,b);
//    return 0;
//}
////
//#include<iostream>
//using namespace std;
//
//class A 
//{
//public:
//	void funA(){}
//
//};
//class B:public A
//{
//public:
//	void fun(){cout<<"t"<<endl;}
//	
//};
//
//int main()
//{
//  const int x = 10;
//  const int& ref = x;	   // ref must be same type to original object//in inheretenc ref its like pointer
//
//  B b=B();
//  A a;
// 
//  A & refa = b;
//  
//  
//  
//  
//  
//
//  cout << ref;
//  return 0;
//}
/*
#include<iostream>
using namespace std;
 
int &fun()
{
    static int x = 10;
    return x;
}
int main()
{
    fun() = 30;
    cout << fun();
	cout << fun();
    return 0;
}
*/
//#include<iostream>
//  
//using namespace std;
//class P {
//public:
//    virtual void print()  { cout <<" Inside P"; }
//};
//  
//class Q : public P {
//public:
//   void print() { cout <<" Inside Q"; }
//};
//  
//class R: public Q { };
//  
//int main(void)
//{
//  
//  R r; 
//  P &ref=r;			 // base class can be ref to deriv class but if function not virtual is do function of BASE!!!
//                      // if function is virtual so ref like pointer of base and serch function in derive class!
//  ref.print();
//  r.print();
//  return 0;
//}
//
//#include <iostream>
////using namespace std;
//
//template <typename T>
//T maxM(T x, T y)
//{
//	return (x > y)? x : y;
//}

//template <>
//int maxM<int>(int x, int y)
//{
//	std::cout<<"here";
//	return (x > y)? x : y;
//}
//
//int maxM(int x, int y)
//{
//	std::cout<<"here!! \n";
//	return (x > y)? x : y;
//}
//int main()
//{
//	std::cout << maxM(3, 7) << std::endl; // why is not overloading ??
//	std::cout << maxM(3.0, 7.1) << std::endl;
//	std::cout << maxM<double>(3, 7.1) << std::endl;		  //when the tamplate fun not "tohem" so you need to say which type you want like <double> 
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
// 
//template <class T>
//class Test
//{
//private:
//    T val;
//public:
//    static int count;
//    Test()  {   count++;   }
//};
// 
//template<class T>
//int Test<T>::count = 0;
// 
//int main()
//{
//    Test<int> a;
//    Test<int> b;
//    Test<double> c;
//    cout << Test<int>::count   << endl;	   //class Test<int> is made one time and than create two object so static count of this class =2 
//    cout << Test<double>::count << endl;   // but now compiler made new !! class Test<double>  so to class test <double> have new statit =0 
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//template < class T, int N >
// T funM (T arr[], int size =5)
//{
//    
//      cout << "Not possible";
//    T max = arr[0];
//   for (int i = 1; i < size; i++)
//      if (max < arr[i])
//          max = arr[i];
//   return max;
//}
//
//int main ()
//{
//    int arr[] = {12, 3, 14};
//	arr[0];
//    cout << funM<int,3>(arr,3);  // why funM(arr,3) or {funM <int*,3> (arr,3)} dont work??
//}
//
//#include <iostream>
//using namespace std;
//
//template <int i>
//void fun()
//{
////i = 20;
//static int x=0;
//
//cout << x;
//x++;
//}
//
//int main()
//{
//fun<10>();
//fun<10>();
//fun<11>();
//return 0;
//}


/// tamplate Q 8
//
//#include<iostream>
//#include<list>
//void main()
//{  
//	std::list<int> numbers;
//	numbers.push_back(1);
//	numbers.push_back(2);
//	numbers.push_front(3);
//	std::list<int>::iterator itr = numbers.begin();
//	++itr; 
//	numbers.insert(numbers.begin(),++numbers.begin(),numbers.end());
//	numbers.insert(itr, 4);
//	numbers.insert(--numbers.end(), 5);
//	numbers.remove(1);
//	//printCollection(numbers); 
//	++itr; 
//	numbers.erase(itr);
//	//printCollection(numbers); 
//	numbers.erase(itr);  
//}
//
//#include <iostream>
//class X {
//public:
//	X(int n) : n(n) { std::cout << "born "<<n<<std::endl;}
//	~X() { std::cout << n; }
//private:
//	int n;
//};
//
//X b(2);
//void main() {
//	
//	
//	static X a(1);
//	X c(3);
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//  const int x = 10;
//   int& ref = x;	// error compiler
//
//  cout << ref;
//  return 0;
//}








//void main()
//{
//	int y=9;
//	int t=8;
//	const int*  p=&y;  //  לא ניתן לשנות דרך פי את הערך אבל אפשר לשנות את ואי וגם ניתן לשנות את פי
//	//*x=10;
//	y=10;
//	p=&t;
//	 
//	int const * r=&t;
//
//	int * const o=&y;	   // המצביע אינו יכול להשתנות אבל התוכן שאליו הוא מצביע כן יכול להשתנות 
//	*o=t;
//	
//
//
//	
//}


//#include <stdlib.h>
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//class Test {
//public:
//    void* operator new(size_t size) { return NULL;}
//    void* operator new[](size_t size) {return NULL;}
//};
//
//int main()
//{
//    Test *obj = new Test;
//    Test *arr = new Test[10];
//    return 0;
//}
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<iostream>
// 
//using namespace std;
// 
//class Test {
//    int x;
//public:
//    void* operator new(size_t size);
//    void operator delete(void*);
//    Test(int i) {
//        x = i;
//        cout << "Constructor called \n";
//    }
//    ~Test() { cout << "Destructor called \n"; }
//};
// 
// 
//void* Test::operator new(size_t size)
//{
//    void *storage = malloc(size);
//    cout << "new called \n";
//    return storage;
//}
// 
//void Test::operator delete(void *p )
//{
//    cout<<"delete called \n";
//    free(p);
//}
// 
//int main()
//{
//    Test *m = new Test(5);
//    delete m;
//    return 0;
//}

//#include <iostream>
//class X
//{
//public:
//	X(int n) : n(n) { }
//	~X() { std::cout << n;}
//	void print(){std::cout<<"non const"<<std::endl;}
//	void print()const {std::cout<<"const"<<std::endl;}
//private:
//	int n;
//};
//void main()
//{
//	const X con(1);
//	X no(2);
//
//	con.print();
//	no.print();
//
//	X b(2);
//	static X a(1);
//	X c(3);
//}
//
//class X {};
//int main()
//{
//	int x=5;



//	int y=7;
//	 int const * ptr1=&x;
//	ptr1=&y;
//	//*ptr1=5;
//
//	int  * const ptr2=&x;
//	*ptr2=8;
//	//ptr2=&y;
//	return 0;
// }

//#include<iostream>
//
//class X {
//public:
//	X() : x(1), y(1) {std::cout<<"X born"<<std::endl; }
//	~X(){std::cout<<"X dey"<<std::endl;}
//	int x;
//	const int y;
//	const X& f()
//	{
//		return *this;
//	}
//	const X& g() const 
//	{
//	  return *this;
//	}
//};
//
//class Y 
//{
//public:
//	X xy;							   
//	Y(){std::cout<<"Y born"<<std::endl;}
//	~Y(){std::cout<<"Y dey"<<std::endl;}
//};
//
//int main()
//{
//	Y y;;
//	//X.f().g(); //canot be x.f().f() ==becous f return const X so the object that return can use only whit const function
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//int main()
//{
//	std::vector<int> vint;
//	vint.push_back(0);
//	vint.insert(vint.begin(),1);
//	std::sort(vint.begin(),vint.end());	 //sort is not function of vector
//
//	std::find(vint.begin(),vint.end(),6);  //find not function of vector
//	
//	std::vector<int>::iterator itrint=vint.end();
//
//	std::cout<<vint[1]<<std::endl;
//	return 0;
//	
//}
////
//#include<iostream>
//#include <list>
//int main()
//{
//	std::list<double> listdouble;
//	listdouble.push_front(1.1);
//	listdouble.push_front(3.1);
//	listdouble.push_front(2.1);
//
//	std::copy(listdouble.begin(), listdouble.end(), listdouble.begin());
//
//	//std::sort(listdouble.begin(),listdouble.end()); //not exist in algoritm library!!
//	listdouble.sort();//sort is algoritm of list !!
//	std::cout<<*listdouble.begin()<<std::endl;
//	return 0;
//}

//#include<iostream>
//#include <deque>
//#include <algorithm>
//
//int main()
//{
//	std::deque<int> deqint;
//	deqint.push_back(7);
//	deqint.push_front(8);
//	deqint.push_front(6);
//
//	deqint.insert(deqint.begin(),9 );
//
//	std::sort(deqint.begin(),deqint.end() );	//sort is global function 
//	std::cout<<deqint[1]<<std::endl;
//
//	
//	return 0;
//}
//
	

//
//#include<iostream>
//class A
//{
//public:
//	A(int x){}
//	~A(){}
//};
//class B :public A
//{
//	public:
//	B():A(0){}
//	~B(){}
//};
//int main()
//{
//	A* a=new B;
//	return 0;
//}

//#include<iostream>
//#include<deque>
//int main()
//{
//	std::deque<int> d;
//	d.push_back(7);
//	d.insert(d.begin(),8);
//	std::cout<<*(--d.end())<<std::endl;
//	std::cout<<d[0]<<std::endl;
//}


//
//#include<iostream>
//class A
//{
//public:
//	   static void Test (){A::print();std::cout<<"h";}
//	 static void print(){std::cout<<"A print";}
//	 
//	
//};
//
//int main()
//{
//	A a;
//	a.print();
//	a.Test();
//	
//	
//
//	return 0;
//}

//

//#include<iostream>
//using namespace std;
//
//class X 
//{
//public:
//	int x;
//};
//
//int main()
//{
//	X a = {10};	//not work 
//	X b = a;
//	cout << a.x << " " << b.x;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//Point(const Point &p) { x = p.x; y = p.y; }
//int getX() { return x; }
//int getY() { return y; }
//};
//
//int main()
//{
//	Point p1;
//	Point p2 = p1;
//	cout << "x = " << p2.getX() << " y = " << p2.getY();
//	return 0;
//}




/////////

//#include<iostream>
//struct X {
//  X() { std::cout << "a"; }
//  X(const X &x) { std::cout << "b"; }
//   void operator=(const X &x) {
//    std::cout << "c";
//    //return *this;
//  }
//};
//
//int main() {
//  X x;
//  X y(x);
//  X z = y;
//  z = x;
//  return 0;
//}
//
//
//#include <iostream>
//
//class A {
//public:
//  virtual void f() { std::cout << "A"; }
//};
//
//class B : public A {
//public:
//  void f() { std::cout << "B"; }
//};
//
//void g(A* a) { a->f(); }
//
//int main() {
//  B* b=new B;
//  g(b);
//  return 0;
//}
//#include<iostream>
//void f(float) { std::cout << 1; }
//void f(double) { std::cout << 2; }
//
//int main() {
//  f(2.5);			  //the deful is that double so go to function of double
//  f(2.5f);
//}
//
//#include<iostream>
//struct E
//{
//  E() { std::cout << "1"; }
//  E(const E&) { std::cout << "2"; }
//  ~E() { std::cout << "3"; }
//};
//
//E f()
//{ 
// 
//  return E();   //not work copy constractor
//}
//
//int main()
//{
//  f();
//}

//#include <iostream>
// class B;
//class A {
//public:
//  A() { std::cout << "A"; }
//
//  friend class B;
//};
//
//class B {
//public:
//  B() { std::cout << "B"; }
//  //friend B A::createB();	//eror its need to be after that declare of 
//};
//
//
//int main() {
//  A a;
// // B b = a.createB();
//}

//#include <iostream>
//
//using namespace std;
//
//template <class T> void f(T) {
//  static int i = 0;
//  cout << ++i;
//}
//
//int main() {
//  f(2.5);
//  f(2.5f);
//  f(1);
//}
//#include <iostream>
//int main() {
//  int a = 20;
//  int b = 10;
//  int x;
//  x = (a, b);
//  std::cout << x;
//}

//#include <iostream>
//
//struct E
//{
//  E() { std::cout << "1"; }
//  E(const E&) { std::cout << "2"; }
//  ~E() { std::cout << "3"; }
//};
//
//E f()
//{ 
//  return E();
//}
//
//int main()
//{
//  f();
//}


//#include <iostream>
//
//struct A {
//  A() { std::cout << "A"; }
//  void f()const{}
//  void g(){}
//};
//struct B {
//  B() { std::cout << "B"; }
//};
//
//class C {
//public:
//  C() : a(), b() {}
//
//private:
//  B b;
//  A a;
//};
//
//int main()
//{
//    C();   //OUTPUT: BA   ORDER BY DECLARTION IN CLASS
//
//	const A & a=A();
//	a.f();
//
//     A aa;
//	const A & refr=aa;
//	aa.g();
//	
//}
//
//
//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//    A(int n) { cout << "A"; }
//    A(const A &) { cout << "a"; }
//};
//
//class B: public  A
//{
//public:
//    B():A(0) { cout << "B"; }
//    B(const B & other):A(other) { cout<< "b"; }
//};
//
//int main()
//{
//	B b;	//AB
//	B bb(b);  // ab	    //if not exsist linlist go to defult constractor and if not exsis defult is compilation error
//	return 0;
//}
//
//

//#include <iostream>
//
//struct X {
//  X() { std::cout << "X"; }
//};
//
//struct Y {
//  Y(const X &x) { std::cout << "Y"; }
//  void f() { std::cout << "f"; }
//};
//
//int main() {
//  Y y(X());
//  //y.f();
//}
//#include<iostream>
//int main() {
//  int a = 10;
//  int b = 20;
//  int x;
//  x = a, b;
//  std::cout << x<<b;
//}

//#include <iostream>
//
//template <class T> void f(T &i) { std::cout << 1; }
//
//template <> void f(const int   &i) { std::cout << 2; }   //// why its not like const A& a ??
//
//int main() {
//  const int i = 42;
//  f(i);
//}


//#include <vector>
//#include <iostream>
//using namespace std;
//
//int main() {
//  std::vector<int> delimiters = { 1, 2 };   //NOT legall !!
//  cout << delimiters[0];
//}
//
//#include <iostream>
//
//class A {
//  int foo ;
//
//public:
//	A():foo(0){}
//  int& getFoo() { return foo; }
//  void printFoo() { std::cout << foo; }
//};
//
//int main() {
//  A a;
//
//  int  bar=a.getFoo();
//  ++bar;
//
//  a.printFoo();
//}
//

//#include <iostream>
//#include <vector>
//
//int main() {
//  std::vector<int> v1(6,2);	 //  v1;made vectot empty v1(5) made vector whit 5 zeros v1(5,8) made vector whit size 5 and all valuse =8 
//  //std::vector<int> v2{ 1, 2 };
//  std::cout << v1.size() << std::endl;
//}

//#include <iostream>
//using namespace std;
//
//int foo() {
//	static int n=0;
//  cout << n;
//  return ++n;
//}
//
//void bar(int i = foo()) {}
//
//int main() {
//  bar();
//  bar();
//}

//#include <iostream>
//
//struct A {
//  virtual std::ostream &put(std::ostream &o) const {
//    return o << 'A';
//  }
//};
//
//struct B : A {
//  virtual std::ostream &put(std::ostream &o) const {
//    return o << 'B';
//  }
//};
//
//std::ostream &operator<<(std::ostream &o, const A &a) {
//  return a.put(o);
//}
//
//int main() {
//  B b;
//  std::cout << b;
//}


//#include <iostream>
//
//struct X {
//  X() { std::cout << "X"; }
//};
//
//struct Y {
//  Y(const X &x) { std::cout << "Y"; }
//  void f() { std::cout << "f"; }
//};
//
//int main() {
//  X();
//}


//#include <iostream>
//
//struct GeneralException {
//  virtual void print() { std::cout << "G"; }
//};
//
//struct SpecialException : public GeneralException {
//  void print() override { std::cout << "S"; }
//};
//
//void f() { throw SpecialException(); }
//
//int main() {
//  try {
//    f();
//  }
//  catch (GeneralException & e) {
//    e.print();
//  }
//}

//#include <iostream>
//
// int a=1;
//
//int main() {
//  std::cout << (a + a);
//}

//#include <iostream>
//struct X {
//  X() { std::cout << "X"; }
//};
//
//int main()
//{ 
//	X xx;
//    X;
//	X();
//	X x(); 
//}

