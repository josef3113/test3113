//#include <iostream>
//using namespace std;
//
//class Test
//{
//public:
//	Test() { cout << "Hello from Test() "; }
//} a;
//
//int main()
//{
//	cout << "Main Started ";
//	int x;
//	cin>>x;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Point {
//    int x;
//public:
//    Point(int x) { this->x = x; }
//    Point( const Point &  p) { x = p.x;}
//    int getX() { return x; }
//};
//
//int main()
//{
//   Point p1(10);
//   Point p2 = p1;
//   cout << p2.getX();
//
//   system("pause");
//   return 0;
//}

//#include<iostream>
//using namespace std;

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
//   vector <a*> *v1  = new vector<a*>;
//   vector <a> *v2  = new vector<a>;
//
//   delete v1;
//   delete v2;
//   _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
//   return 0;
//}



//#include <stdio.h>
//int main()
//{
//   const int x;	 // value const must be declure in time !!
//   //x = 10;
//   printf("%d", x);
//   return 0;
//}

//#include <iostream>
//using namespace std;
// 
//class A
//{
//private:
//    int x;
//public:
//    A(int _x = 0)  {  x = _x; }
//    int get()  { return x; }
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
//    B b;
//    cout << b.get();
//    return 0;
//}

//
//#include<iostream>
//using namespace std;
// 
//class Test
//{
//private:
//	//static
//     int count;
//public:
//	Test(){count=0;}
//    Test& fun(); 
//};
// 
////int Test::count = 0;
// 
//Test& Test::fun()
//{
//    Test::count++;
//    cout << Test::count << " ";
//    return *this;
//}
// 
//int main()
//{
//    Test t;
//    t.fun().fun().fun().fun();
//    return 0;
//}


//#include <iostream>
//class Test
//{
//public:
//    static void fun();
//};
//void Test::fun()   // non !! static void Test == the static/frienf write only in the class!!
//{
//    std::cout<<"fun() is static\n";
//}
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

//#include<iostream>
//using namespace std;
//
//int main()
//{
//  const int x = 10;
//  const int& ref = x;	   // ref must be same type to original object (check about inhertance)
//
//  
//
//  cout << ref;
//  return 0;
//}

//#include<iostream>
//using namespace std;
// 
//int &fun()
//{
//    static int x = 10;
//    return x;
//}
//int main()
//{
//    fun() = 30;
//    cout << fun();
//	cout << fun();
//    return 0;
//}
//
//#include<iostream>
//  
//using namespace std;
//class P {
//public:
//   virtual void print()  { cout <<" Inside P"; }
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

//#include <iostream>
////using namespace std;
//
//template <typename T>
//T max(T x, T y)
//{
//	return (x > y)? x : y;
//}
//
//template <int ,int >
//int max(int x, int y)
//{
//	std::cout<<"here";
//	return (x > y)? x : y;
//}
//int main()
//{
//	std::cout << max(3, 7) << std::endl;
//	std::cout << max(3.0, 7.1) << std::endl;
//	std::cout << max<double>(3, 7.1) << std::endl;		  //when the tamplate fun not "tohem" so you need to say which type you want like <double> 
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
//
//#include <iostream>
//using namespace std;
//
//template < class T, int N>
// T funM (T arr[], int size)
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
//    cout << funM<int, 3>(arr, 3);  // why funM(arr,3) or funM <int*,3> (arr,3) dont work??
//}


///// tamplate Q 8