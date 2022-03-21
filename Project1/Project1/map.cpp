//// map<kiểu dữ liệu của key, kiểu dữ liệu của value> someMap;
//// key cua map dc sap xep theo thu tu khi compare key  voi nhau
//https://viblo.asia/p/set-va-map-trong-c-djeZ1jPJlWz
//
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//
//
//int main()
//{
//	//pair<int, char*> defaultPair;
//	// default constructor
//    //pair<int, char*> defaultPair;
//	// initialization constructor
//	//pair<int, char*> initPair(0, "a");
//	// copy constructor
//	//pair<int, char*> copyPair(pair1);
//
//	
//	map<string, int> hashtable;
//
//	hashtable["one"]  = 1;
//	hashtable["two"]  = 2;
//	hashtable["three"]  = 3;
//	hashtable["athree"]  = 89;
//	hashtable["one"]  = 111; // update lai value cho key
//
//
//
//	map<int, char*> texts;
//	texts[0] = "ab";
//	texts[1] = "bc";
//	texts[0] = "cd";
//
//
//	map<int, char*> mymap, copymymap;
//	mymap[0] = "a";
//	mymap[1] = "b";
//	mymap[5] = "c";
//
//	// chèn vào copymymap cặp đối tượng (10, "c")	
//	copymymap.insert(pair<int, char*>(10, "c"));
//	// chèn (-1, "d") vào copymymap từ vị trí bắt đầu của copymymap
//	copymymap.insert(copymymap.begin(), pair<int, char*>(-1, "d"));
//	// chèn mymap vào copymymap
//	copymymap.insert(mymap.begin(), mymap.end());
//	// => copymymap = {(-1,"d"),(0,"a"),(1,"b"),(5,"c"),(10,"c")}
//	/*Lưu ý việc chèn ở vị trí nào thật ra là vô nghĩa, vì vị trí 
//		của nó phụ thuộc vào key trong cặp đối tượng "key/ value",
//		trong ví dụ trên thì "key" là kiểu số nguyên vì vậy vị trí 
//		của các cặp đối tượng key/value sẽ được xác định theo các 
//		key sắp xếp tăng dần.*/
//
//	map<int, char*> mymap;
//	mymap[0] = "a";
//	mymap[1] = "b";
//	mymap[5] = "c";
//	mymap[9] = "e";
//	map<int, char*>::iterator var = mymap.find(5);
//	var
//	// var -> (5,"c")
//	// xóa cặp đối tượng với "key" là 5
//	mymap.erase(5);	
//
//	return 0;
//}
//
//
//
////map<char, int> character0;
////character0['a'] = 97;
////character0['b'] = 98;
////character0['c'] = 99;
////character0['d'] = 100;
