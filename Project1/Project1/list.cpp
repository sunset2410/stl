//#include<iostream>
//#include<list>
//#include<vector>
//
//using namespace std;
//
//
//class MyList : public list<int>{
//public:
//	void remove(int i){
//		
//};
//
//int main(){
//	MyList mlist;
//
//
//	mlist.push_back(1);
//	mlist.push_back(2);
//
//	mlist.push_back(4);
//	mlist.push_back(5);
//
//	list<int>::iterator it;
//	for(it = mlist.begin(); it!= mlist.end(); ++it)
//	{
//		if(*it>  3){
//			mlist.insert(it,3);
//			break;
//		}
//	}
//			
//
//		for(list<int>::reverse_iterator rit = mlist.rbegin();  rit !=  mlist.rend(); rit++){
//			cout<<  " "<<  *rit;
//		}
//
//		mlist.remove(3);
//	
//
//	return 0;
//}
//
//
////class Animal {
////  public: 
////      move();
////}
////
////class Dog: public Animal {
////	public: 
////		move();
////};