//#include<iostream>
//#include<queue>
//using namespace std;
//
//struct cmp{
//
//	bool operator()(int a, int b)
//	{
//		return a>b;
//	}
//
//};
//
//
//class my_priority_queue  : public priority_queue<int, vector<int>, cmp> {
//public:
//	bool remove(int value){
//		//priority_queue<int, vector<int>, cmp>::iterator it = find(c.begin(), c.end(), value); ??
//		auto it = std::find(this->c.begin(), this->c.end(), value);
//
//		if(it == c.end())
//		{
//			return false;
//		}
//		else
//		{
//			c.erase(it);
//			make_heap(c.begin(), c.end(), this->comp);
//		}
//		return true;
//	}
//
//};
//
//void main()
//{
//   my_priority_queue queue;
// 
//   queue.push(10);
//   queue.push(2);
//   queue.push(4);
//   queue.push(6);
//   queue.push(3);
// 
//   queue.remove(6);
// 
//   while (!queue.empty())
//   {
//      std::cout << queue.top();
//      queue.pop();
// 
//      if (!queue.empty())
//      {
//        std::cout << ", ";
//      }
//   }
// 
// }
//
//
//
//
