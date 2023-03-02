# 涉及到的链接

*   [Markdown常用操作：数学符号、空格、字体](https://www.jianshu.com/p/5a27d195678f)

*   [【自制FOC驱动器】深入浅出讲解FOC算法与SVPWM技术](https://zhuanlan.zhihu.com/p/147659820)

*   [三相坐标变换的实质与原则](https://zhuanlan.zhihu.com/p/489644101)

*   [彻底吃透SVPWM如此简单](https://zhuanlan.zhihu.com/p/414721065)

*   [Google](https://www.google.com.mm/)

*   [‎Apple Music 上周杰伦的歌曲《青花瓷》](https://music.apple.com/cn/album/青花瓷/536030690?i=536030695)

*   [自动控制原理课件](http://mooc1.xtu.edu.cn/nodedetailcontroller/visitnodedetail?courseId=217407879&knowledgeId=418213775)

    



#     	青花瓷

　　     作词 方文山 

​             作曲 周杰伦

  素胚勾勒出青花笔锋浓转淡

  瓶身描绘的牡丹一如你初妆

  冉冉檀香透过窗心事我了然

​     宣纸上走笔至此搁一半

  釉色渲染仕女图韵味被私藏

  而你嫣然的一笑如含苞待放

​          你的美一缕飘散

​       去到我去不了的地方

  天青色等烟雨 而我在等你

  炊烟袅袅升起 隔江千万里

  在瓶底书汉隶仿前朝的飘逸

​        就当我为遇见你伏笔

  天青色等烟雨 而我在等你

  月色被打捞起 晕开了结局

  如传世的青花瓷自顾自美丽

　　       你眼带笑意

  色白花青的锦鲤跃然于碗底

  临摹宋体落款时却惦记着你

  你隐藏在窑烧里千年的秘密

  极细腻犹如绣花针落地

  帘外芭蕉惹骤雨门环惹铜绿

  而我路过那江南小镇惹了你

​          在泼墨山水画里

​       你从墨色深处被隐去

  天青色等烟雨 而我在等你

  炊烟袅袅升起 隔江千万里

  在瓶底书汉隶仿前朝的飘逸

​      就当我为遇见你伏笔

  天青色等烟雨 而我在等你

  月色被打捞起 晕开了结局

  如传世的青花瓷自顾自美丽

​             你眼带笑意

  天青色等烟雨 而我在等你

  炊烟袅袅升起 隔江千万里

  在瓶底书汉隶仿前朝的飘逸

​       就当我为遇见你伏笔

  天青色等烟雨 而我在等你

  月色被打捞起 晕开了结局

  如传世的青花瓷自顾自美丽

​              你眼带笑意

***



# 自动控制原理

## 第一章：自动控制的一般概念

*   **自动控制：**是指在没有人直接参与的情况下，利用外加的设备或装置（控制装置或控制器），使机器，设备或生产过程（统称被控对象）的某个工作状态或参数（被控量）自动地按照预定的规律运行
*   反馈控制系统的组成：

    *   **被控对象**：由具有一定职能的各种基本元件组成
    *   **测量元件**：其职能是测量被控制的物理量
    *   **给定元件**：其职能是给出与期望的被控量相对应的系统输入量（即期望值）
    *   **比较元件**：把测量元件检测的被控量实际值与给定元件给出的期望值进行比较，求出他们的偏差
    *   **放大元件**：将比较元件给出的偏差进行放大，用来推动执行元件去控制被控对象
    *   **执行元件**：直接推动被控对象，使其被控量发生变化
    *   **校正元件**：也称为补偿元件，它是结构或参数便于调整的元件，用串联或反馈的方式连接在系统中，来改善系统性能
*   自动控制系统基本控制方式：

    *   **反馈控制方式**：按偏差控制
        *   优点：精度较高，对外部扰动和系统参数变化不敏感
        *   缺点：存在稳定，振荡，超调等问题，系统性能分析和设计麻烦
    *   **开环控制方式**：按扰动控制，也叫做顺馈控制，只适用于扰动可测量的场合
        *   优点：简单，稳定，可靠
        *   缺点：精度通常较低，无自动纠偏能力
    *   **复合控制方式**：按偏差控制和按扰动控制相结合的控制方式
*   自动控制系统按**输入量的特征**可分为：恒值控制系统，随动系统（伺服系统），程序控制系统
*   自动控制系统按**系统响应特性**可分为：线性控制系统，非线性控制系统
*   自动控制系统按**系统中传递信号的性质**可分为：连续控制系统**（采用微分方程来描述）**，离散（数字）控制系统**（采用差分方程来描述）**
*   自动控制理论的基本要求：**稳定性（由系统结构和参数决定，与外界因素无关），准确性，快速性**
*   可用线性微分方程或差分方程描述的系统成为线性系统：如果微分方程或差分方程的系统全为**常数**，则称为线性定常系统，否则为线性时变系统
*   用非线性方程描述的系统称为非线性系统：如果**系数与变量有关**或**方程中含有变量**及其**导数的高次幂**或**乘积项**则为非线性系统
***



## 第二章：控制系统的数学模型

### 第一节：控制系统的时域数学模型

*   线性系统微分方程的编写步骤：
    1.   确定系统和各元部件的输入量和输出量
    2.   对系统中每一个元件列写出与其输入，输出量有关的物理方程
    3.   对方程进行适当简化，如略去一些对系统影响小的次要因素，对非线性元部件进行线性化等
    4.   从系统输入端开始，按照信号的传递顺序，在所有元部件方程中消去中间变量，得到描述系统输入和输出关系的微分方程

*   **复习拉氏变换：**

    *   拉氏变换式：<img src="C:\Users\zp\Desktop\Note\image\自动控制原理\拉氏变换.jpg" style="zoom:50%;" />记作：<img src="C:\Users\zp\Desktop\Note\image\自动控制原理\拉氏变换2.jpg" style="zoom:50%;" />

    *   拉普拉斯变换的一些性质：<img src="C:\Users\zp\Desktop\Note\image\自动控制原理\拉氏变换性质.jpg" style="zoom:50%;" />  

        ​                                                 <img src="C:\Users\zp\Desktop\Note\image\自动控制原理\拉氏变换性质2.jpg" style="zoom:50%;" />

    *   对于电容：$i = C\frac{du}{dt}, u = u(0)+\frac{1}{C}\int_0^ti(s)ds$,复数阻抗为 $\frac{1}{cs}$
    *   对于电感：$u = L\frac{di}{dt}, I = i(t_0) + \frac{1}{L}\int_{t_0}^tuds$,复数阻抗为 $$
    *   




# the beginning of it all

## 2023.2.8

### 1 C++程序执行时内存分为4个区域:

- 代码区：存放所写代码的经过编译器的二进制代码，由操作系统管理
- 全局区：存放 1.全局变量 2.静态变量 3. 常量    全局区中包含变量区存放用const修饰的变量和字符串常量
- 栈区：存放函数的参数值和函数内的局部变量
- 堆区：存放程序员自己用 **new**关键词创建的变量



### 2 new关键字：

```c++
int* func()
{
	int* a = new int(10);
	return a;
}

//堆区开辟数组
int main() {
	int* p = func();
    
    cout << *p << endl;
    delete p;
    
    
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放数组 delete 后加 []
	delete[] arr;

	system("pause");

	return 0;
}
```

**注意：**将数组从堆区删除用delete[]

### 3 C++的引用：
**作用：**给变量起别名
**语法：**`数据类型 &别名 = 原名`

* 引用必须初始化
* 引用在初始化后不能改变

**引用的实际就是指针：
```C++
//发现是引用，转换为 int* const ref = &a;
void func(int& ref){
	ref = 100; // ref是引用，转换为*ref = 100
}
int main(){
	int a = 10;
    
    //自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
	int& ref = a; 
	ref = 20; //内部发现ref是引用，自动帮我们转换为: *ref = 20;
    
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
    
	func(a);
	return 0;
}
```

### 4 C++的封装，继承，多态
**封装实际上就是创建类：
* public， private， protected
* 创建一个类的变量的时候会调用类的构造函数，删除变量的时候会调用析构函数
* 类的构造函数又分为无参构造，有参构造，拷贝构造
* class和struct的区别
* 深拷贝和浅拷贝：深拷贝在堆区重新申请空间进行拷贝工作，浅拷贝只是简单的赋值拷贝操作
* 构造函数写法：`类的名字(){}`
* 析构函数写法： `~类的名字(){}`
* this 指针
* frined操作
* 运算符重载 相当与写一个全局函数然后将函数名改为operator（运算符）
* 继承语法：`class 子类： 继承方式 父类`，继承方式可以为public，private，protected
* 函数重装载：函数名一样但是函数的参数不一样根据输入的参数来调用函数
* 子类父类函数名相同用 ：： 来指定作用域
* 多继承语法：`class 子类： 继承方式 父类1 ， 继承方式 父类2 ...`
* 虚继承：加virtual，父类的函数不提供作用由子类自己具体实现
```C++
//抽象制作饮品
class AbstractDrinking {
public:
	//烧水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomething() = 0;
	//规定流程
	void MakeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//制作咖啡
class Coffee : public AbstractDrinking {
public:
	//烧水
	virtual void Boil() {
		cout << "煮农夫山泉!" << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "冲泡咖啡!" << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "将咖啡倒入杯中!" << endl;
	}
	//加入辅料
	virtual void PutSomething() {
		cout << "加入牛奶!" << endl;
	}
};

//制作茶水
class Tea : public AbstractDrinking {
public:
	//烧水
	virtual void Boil() {
		cout << "煮自来水!" << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "冲泡茶叶!" << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "将茶水倒入杯中!" << endl;
	}
	//加入辅料
	virtual void PutSomething() {
		cout << "加入枸杞!" << endl;
	}
};

//业务函数
void DoWork(AbstractDrinking* drink) {
	drink->MakeDrink();
	delete drink;
}

void test01() {
	DoWork(new Coffee);
	cout << "--------------" << endl;
	DoWork(new Tea);
}


int main() {

	test01();

	system("pause");

	return 0;
}
```


### 5 C++中的模板
* 在具体函数前加上 `template<typename T>`将函数的参数类型换成T
* 模板可以具体化
```C++
#include<iostream>
using namespace std;

#include <string>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

//普通函数模板
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//具体化，显示具体化的原型和定意思以template<>开头，并通过名称来指出类型
//具体化优先于常规模板
template<> bool myCompare(Person &p1, Person &p2)
{
	if ( p1.m_Name  == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;
	//内置数据类型可以直接使用通用的函数模板
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a == b " << endl;
	}
	else
	{
		cout << "a != b " << endl;
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	//自定义数据类型，不会调用普通的函数模板
	//可以创建具体化的Person数据类型的模板，用于特殊处理这个类型
	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2 " << endl;
	}
	else
	{
		cout << "p1 != p2 " << endl;
	}
}

int main() {

	test01();

	test02();

	system("pause");

	return 0;
}
```
**学习模板并不是为了写模板，而是在STL能够运用系统提供的模板
* 类模板：类模板没有自动类型推导，必须指定类型但可以有默认参数
```C++
#include <string>
//类模板
template<class NameType, class AgeType = int> 
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
public:
	NameType mName;
	AgeType mAge;
};

//1、类模板没有自动类型推导的使用方式
void test01()
{
	// Person p("孙悟空", 1000); // 错误 类模板使用时候，不可以用自动类型推导
	Person <string ,int>p("孙悟空", 1000); //必须使用显示指定类型的方式，使用类模板
	p.showPerson();
}

//2、类模板在模板参数列表中可以有默认参数
void test02()
{
	Person <string> p("猪八戒", 999); //类模板中的模板参数列表 可以指定默认参数
	p.showPerson();
}

int main() {

	test01();

	test02();

	system("pause");

	return 0;
}
```
### 6 STL：标准模板库
* STL分为：容器， 算法， 迭代器， 仿函数， 适配器， 空间配置器
* 容器：各种数据结构，如vector、list、deque、set、map等,用来存放数据。
* 算法：各种常用的算法，如sort、find、copy、for_each等
* 迭代器：扮演了容器与算法之间的胶合剂。
* 仿函数：行为类似函数，可作为算法的某种策略。
* 适配器：一种用来修饰容器或者仿函数或迭代器接口的东西。
* 空间配置器：负责空间的配置与管理。

#### 6.1 容器
##### 6.1.1 string容器
* string有四个构造函数
* `string();`          				                  //创建一个空的字符串 例如: string str;
* `string(const char* s);`	             //使用字符串s初始化
* `string(const string& str);`         //使用一个string对象初始化另一个string对象
* `string(int n, char c);`                 //使用n个字符c初始化 

* `string.assign()` `string.append()` `string.find()` `string.rfind()`
* `string.replace()` `string.compare()` `string.size()`  `string.insert()`
* `string.erase()`  `string.substr()` 

##### 6.1.2 vector容器
**功能：**vector数据结构和**数组非常相似**，也称为**单端数组**
* vector有四个构造函数
* `vector<T> v; `               		                 //采用模板实现类实现，默认构造函数
* `vector(v.begin(), v.end());`         //将v[begin(), end())区间中的元素拷贝给本身。
* `vector(n, elem);`                                //构造函数将n个elem拷贝给本身。
* `vector(const vector &vec);`           //拷贝构造函数。
* `vector.assign()` `vector.empty()` `vector.capacity()` `vector.size()`
* `vector.resize()` `vector.push_back()` `vector.pop_back()` 
* `vector.insert()` `vector.erase()` `vector.clear()`  `vector.front()` 
* `vector.back()` `vector.swap()` `vector.reserve()`

<img src="C:\Users\zp\Desktop\Note\image\clip_image002.jpg" style="zoom:100%;" />

##### 6.1.3 deque容器
**功能：双端数组，可以对头端进行插入删除操作**
**deque与vector区别：**

* vector对于头部的插入删除效率低，数据量越大，效率越低
* deque相对而言，对头部的插入删除速度回比vector快
* vector访问元素时的速度会比deque快,这和两者内部实现有关

![](C:\Users\zp\Desktop\Note\image\clip_image002-1547547642923.jpg)

**deque内部工作原理:**
deque内部有个**中控器**，维护每段缓冲区中的内容，缓冲区中存放真实数据

中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间

![](C:\Users\zp\Desktop\Note\image\clip_image002-1547547896341.jpg)




* deque容器的迭代器也是支持随机访问的
* deque有四个构造函数
* `deque<T>` deqT;                             //默认构造形式
* `deque(beg, end);`                       //构造函数将[beg, end]区间中的元素拷贝给本身。
* `deque(n, elem);`                         //构造函数将n个elem拷贝给本身。
* `deque(const deque &deq);`      //拷贝构造函数
* deque的操作和vector一样只是存储的方式不一样
* 排序算法：`sort(iterator beg, iterator end)`//对beg和end区间的元素进行排序
* 前提是包含头文件：algorithm

##### 6.1.4 stack容器
* **概念**：stack是一种先进后出的数据结构，也就是栈

![](C:\Users\zp\Desktop\Note\image\clip_image002-1547604555425.jpg)

栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为

栈中进入数据称为  --- **入栈**  `push`

栈中弹出数据称为  --- **出栈**  `pop`
* stack有两个构造函数：
* `stack<T> stk;`                                      //stack采用模板类实现， stack对象的默认构造形式
* `stack(const stack &stk);`               //拷贝构造函数
* `stack.push()` `stack.pop()` `stack.top()` `stack.empty()` `stack.size()`
* 头文件：stack.h

##### 6.1.5 queue容器
**概念：**Queue是一种**先进先出**(First In First Out,FIFO)的数据结构，也就是队列

![](C:\Users\zp\Desktop\Note\image\clip_image002-1547606475892.jpg)

队列容器允许从一端新增元素，从另一端移除元素

队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为

队列中进数据称为 --- **入队**    `push`

队列中出数据称为 --- **出队**    `pop`
* 队列有两个构造函数：
- `queue<T> que;`                                     //queue采用模板类实现，queue对象的默认构造形式
- `queue(const queue &que);`              //拷贝构造函数
- `queue.push()` `queue.pop()` `queue.back()` `queue.front()` `queue.size()`
- `queue.empty()` 包括头文件queue.h

##### 6.1.6 list容器
**概念：** **链表**（list）是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的，一个存放data一个存放下一个data的指针
STL中的链表是一个双向循环链表

**链表创建：**
```c++
	struct ListNode {
		int val;         //节点上存储的元素
		ListNode *next;  //指向下一个节点的指针
		ListNode (int x) : val(x), next(NULL) {} //节点的构造函数
	};
```

![](C:\Users\zp\Desktop\Note\image\clip_image002-1547608564071.jpg)

* **list**有4个构造函数
* `list<T> lst;`                                   //list采用采用模板类实现,对象的默认构造形式：
* `list(beg,end);`                              //构造函数将[beg, end)区间中的元素拷贝给本身。
* `list(n,elem);`                                 //构造函数将n个elem拷贝给本身。
* `list(const list &lst);`            //拷贝构造函数。
* `list.assign()` `list.swap()` `list.size()` `list.empty()` 
* `list.resize()` `list.push_back()` `list.pop_back()` `list.push_from()`
* `list.pop_front()` `list.insert()` `list.clear()` `list.erase()`
*  `list.remove()` `list.front()` `list.back()` `list.reverse()` `list.sort`

##### 6.1.7 set容器
**概念：** 所有元素插入时都会自动排序，本质和multiset一样属于关联式容器用二叉树实现
**set和multiset区别**：

* set不允许容器中有重复的元素
* multiset允许容器中有重复的元素
* set有两个构造函数：
* `set<T> st;`                            //默认构造函数
* `set(const set &st);`         //拷贝构造函数
* `set.size()` `set.empty()` `set.swap()` `set.insert()` `set.clear()` 
* `set.erase()` `set.find()` `set.count() //结果是1或者0` 

**仿函数指定set容器排序规则**
```c++
class MyCompare
{
	public:
		bool operator()(int v1,int v2){
			return v1 > v2;
		}
};

set<int,MyCompare> s2;
s2.insert();.....

```

**set存放自定义数据类型**

```c++
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;

};
class comparePerson
{
public:
	bool operator()(const Person& p1, const Person &p2)
	{
		//按照年龄进行排序  降序
		return p1.m_Age > p2.m_Age;
	}
};


set<Person, comparePerson> s;

Person p1("Liubei", 23);
s.insert(p1);
```

##### 6.1.8 pair对组
**功能描述：**

* 成对出现的数据，利用对组可以返回两个数据

**两种创建方式：**

* `pair<type, type> p ( value1, value2 );`
* `pair<type, type> p = make_pair( value1, value2 );`

##### 6.1.9 map/ multiset容器
* **map概念：**
* map中所有元素都是pair
* pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
* 所有元素都会根据元素的键值自动排序 
* 可以根据key值快速找到value值

map和multimap**区别**：

- map不允许容器中有重复key值元素
- multimap允许容器中有重复key值元素

* map有两个构造函数：
* `map<T1, T2> mp;`                      //map默认构造函数: 
* `map(const map &mp);`             //拷贝构造函数

```
map<int, int> m;
m.insert(pair<int, int>(1, 10));
```

* `map.size()` `map.empty()` `map.swap()` `map.insert()` `map.clear()`
* `map.erase()` `map.find()` `map.count()` 
* map也可以用仿函数来修改排序方式





## 2023.2.17
### 1.markdown基本语法
* 改变字体大小：<font size=5>内容</font>
* 改变字体颜色：<font color=red>红色</font>
* 加粗字体：**加粗**
* 斜体：这是*斜体*
* 块引用：hello world
* 有序列表：在前面加上序号  1.(这里加上一个空格) 这是第一段内容

>1. 这是第一段内容
>2. 这是第二段内容
>3. 这是第三段内容

* 无序列表：用* 或者- ,+ 加上一个空格
* 表示代码：`hello world`
* 创建水平线：***

* 创建链接：google链接：(**[Google](https://www.google.com.mm/)**)，前面用中括号括起来的是标题，用小括号将链接括起来



### 2.markdown画流程图

* 框架：

  ~~~apl
  ```mermaid
      ……流程图代码……
  ```
  ~~~

  * 以graph开头后面加上布局方向：TB为从上往下，LR为从左往右
  * （文字）：画圆角矩形，[文字]：画矩形，{“文字”}：画菱形，（（文字））：画圆形
  * 箭头用-->

  例如：

  ```mermaid
  graph LR
  	A[把大象关起来] --> B{"冰箱小不小？"}
  	B --> |不小| C[把冰箱关起来]
  	B --> |小| D[换个大冰箱]
  ```

### 3.markdown打下标

* 下标： A~b~
* 上标：A^b^



### 4.markdown输入数学符号，空格，字体

* 两个$之间加入“ \ ”和字母名称
* 常见：[Markdown常用操作：数学符号、空格、字体](https://www.jianshu.com/p/5a27d195678f)
* $\alpha$:alpha   $\beta$:beta   $\gamma$:gamma   $\theta$:theta   $\pi$:pi   
* 也可用2个$包住公式
* 在2个$中：_表示下标，^表示上标



### 5.markdown分数和开根号

* 分数写法：`\frac{分子}{分母}`
* 开根号写法：`\sqrt{数}`

***



## 2023.2.20

### 1.FOC

**FOC（Field-Oriented Control）**，直译是磁场定向控制，也被称作矢量控制**（VC，Vector Control）**，是目前无刷直流电机（BLDC）和永磁同步电机（PMSM）高效控制的最优方法之一。FOC旨在通过精确地控制磁场大小与方向，使得电机的运动转矩平稳、噪声小、效率高，并且具有高速的动态响应。

简单来说就是，FOC是一种对无刷电机的驱动控制方法，它可以让我们对无刷电机进行“**像素级”**控制，实现很多传统电机控制方法所无法达到的效果~



[【自制FOC驱动器】深入浅出讲解FOC算法与SVPWM技术 - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/147659820)

#### 1.1 无刷内部原理

![](C:\Users\zp\Desktop\Note\image\v2-bc0091ec15f7bd19094e890bf3e90418_1440w.gif)

#### 1.2 驱动电路实现

逆变电路：

![](C:\Users\zp\Desktop\Note\image\v2-de99d63cac7edac6868bd829ce92685f_1440w.jpg)

逆变电路：将直流电变换成交流电。

***



## 2023.2.21

### 1. **FOC算法的Pipeline**

![](C:\Users\zp\Desktop\Note\image\v2-b12a2650b001faa9cd31ecbb309eaca0_1440w.webp)

**使用FOC的过程：**

​		**通过计算所需电压矢量，使用SVPWM技术产生调试信号，驱动三相逆变电路，合成出等效的三项正弦电压驱动电机。**

1. 对电机三相电流进行采样得到 $I_a,I_b,I_c$
2. 将 $I_a,I_b,I_c$ 经过`Clark变换`得到 $I_\alpha$,$I_\beta$
3. 将  $I_\alpha$,$I_\beta$ 经过`Park变换`得到 $I_q,I_d$
4. 计算  $I_q$,$I_d$ 和其设定值 $I_{q\_ref},I_{d\_ref}$ 的误差
5. 将上述误差输入两个PID（只用到PI）控制器，得到输出的控制电压$U_q,U_d$
6. 将 $U_q,U_d$进行`反Park变换`得到 $U_\alpha,U_\beta$
7. 用  $U_\alpha,U_\beta$ 合成电压空间矢量，输入`SVPWM模块`进行调制，输出该时刻三个半桥的状态编码值（前文有提到）
8. 按照前面输出的编码值控制三相逆变器的MOS管开关，驱动电机
9. 循环上述步骤



#### 1.1 Clark变换与Park变换

**Clack变换和Park变换是对电流进行变换，反Clack变换和反Park变换是对电压进行变换**

**反Clack变换和反Park变换同理**

[三相坐标变换的实质与原则](https://zhuanlan.zhihu.com/p/489644101)

* **SPWM**:

​			![](C:\Users\zp\Desktop\Note\image\v2-b6165e60926bea9399b794a736d5e335_1440w.jpg)

我们用上面坐标系中的正弦波和三角波的**交点**投影到下面的坐标轴，以此确定PWM的占空比变化规律，这样合成的PWM波，经过低通滤波器之后，其实就等效为了一个正弦波！所以SPWM就是在PWM的基础上用正弦波来调制合成的具有正弦波规律变化的方波。**SPWM要**比后面要说的**SVPWM**的母线电压利用率要低15%,所以不用。

* **Clack变换：**

  将第一步中采集到的3相电流转换成直角坐标系

  <img src="C:\Users\zp\Desktop\Note\image\v2-a105f3cbf5dfc208c829c7364257654a_1440w.webp" style="zoom:80%;" />

​													![](C:\Users\zp\Desktop\Note\image\clack.jpg)  

**在右边的矩阵上应该还要乘以$\frac{\sqrt2}{\sqrt3}$以保证幅值相等**

将$I_a,I_b,I_c$按直角坐标系分解为 $I_\alpha$,$I_\beta$，控制电机的波形图变成下方的image

![](C:\Users\zp\Desktop\Note\image\v2-ddb74b212baee03b36eecb32ec54e420_1440w.webp)

此时变量还是正弦的（非线性的），我们需要将它们线性化，所以我们就需要进行**Park变换**



> 注意clack变换也可以用复变函数的知识，欧拉公式为$e^{j\theta} = cos\theta + jsin\theta$
>
> $I_a$ = $I_a$,       $I_b=I_b e^{j2\pi/3}$,        $I_c = I_c e^{j4\pi/3}$
>
> $I = I_a + I_b e^{j2\pi/3} + I_c e^{j4\pi/3}$
>
> $I = (I_a - \frac{1}{2}I_b - \frac{1}{2}I_c) + j(\frac{\sqrt3}{2}I_b - \frac{\sqrt3}{2}I_c)$
>
> <img src="C:\Users\zp\Desktop\Note\image\欧拉clack.jpg" style="zoom:50%;" />
>
> 比较幅值发现是原矢量的$\frac{3}{2}$，所以在矩阵的右边乘以$\frac{2}{3}$来保证幅值相等
>
> <img src="C:\Users\zp\Desktop\Note\image\欧拉clack2.jpg" style="zoom:50%;" />
>
> 使用欧拉公式的思想是不是将多变量转换成2个变量来分析？

* **Park变换：**

将$\alpha$-$\beta$坐标系翻转$\theta$角，其中$\theta$是转子当前的角度：

<img src="C:\Users\zp\Desktop\Note\image\v2-d15d057327992a5c50016aea5bb7201b_1440w.webp" style="zoom:50%;" />

​														<img src="C:\Users\zp\Desktop\Note\image\park.jpg" style="zoom:80%;" />

**Park变换**，旋转变换，由两相静止坐标系到两相旋转坐标系上的转化，旋转角度与三相正弦量的角度一致。**从a轴开始，以wt的角速度旋转，这样合成的电压矢量会和坐标轴同步旋转，所以坐标轴上的分量就是直流量了，这样就把三相交流量转化成了两相直流量，方便我们用比例积分去控制。**

* **将clack变换和park变换结合：**

将clarke变换的公式代入上式就可以得到abc到dq0的坐标变换矩阵，以等幅值为例，如下：

<img src="C:\Users\zp\Desktop\Note\image\v2-1918346a89639774454b7136889d3816_r.jpg" style="zoom:50%;" />

可知：矩阵相乘的结果是常量

![](C:\Users\zp\Desktop\Note\image\v2-d6116ce165ec51df51469ad6ddd4d134_720w.webp)

**完成clack变化和park变换后得到$I_q和I_d$这2个值作为反馈控制的对象，接着用线性控制器来进行控制，比如PID**

#### 1.2 PID控制

**FOC中主要用到了三个PID环：电流环（最内环），速度环（内环），位置环（外环）**

也就是说我们**通过电流反馈来控制电机电流（扭矩）** ->  **再通过控制扭矩来控制电机的转速**  ->  **再通过控制电机的转速来控制电机的位置**

*  **电流环**：

  电流环的控制框图如下：

  <img src="C:\Users\zp\Desktop\Note\image\v2-92e0d6eaa15bff745a4cd024362f53eb_720w.webp" style="zoom: 80%;" />

可以看出来，这也就是前面提到的FOC控制9个步骤所描述的过程。实际只用到了PI控制，没有引入微分，因为如果推导一下电压和电流的传递函数会发现这其实就是一个一阶惯性环节（而且实际上我们可以通过零极点对消来简化掉PI参数，只需要控制一个参数即电流带宽即可）。

> 上图中的`Speed & Position`模块可以是编码器，或者霍尔传感器等能感应转子位置的传感器

$I_q和I_d$相当于将转子的磁链进行了解耦，分解为了转子旋转的**径向**和**切向**这两个方向的变量：

* 其中$I_q$是我们需要的，代表了期望的力矩输出
* 而$I_d$是我们不需要的，我们希望尽可能把它控制为0

![](C:\Users\zp\Desktop\Note\image\v2-1926583e289cf44fe24f4a72944e2a08_720w.webp)

通过PID控制器使用上述输入（电流采样值、编码器位置）和输出（MOS管开关状态）完成对电机电流的闭环控制。



* **速度环：**

<img src="C:\Users\zp\Desktop\Note\image\v2-2fc3a67057c1f08b4c5969551d417003_720w.webp" style="zoom:80%;" />

Speed_Ref是速度设定值，w是电机的转速反馈，可以通过电机编码器或者霍尔传感器等计算获得，依然是使用 **PI** 控制，将计算得到的电机速度w与速度设定值Speed_Ref进行误差值计算，代入速度PI环，计算的结果作为电流环的输入，就实现了速度-电流的双闭环控制。



* **位置环：**

<img src="C:\Users\zp\Desktop\Note\image\v2-3ec15f2e8ab0b97b7818e1d94d9dbd9b_720w.webp" style="zoom:80%;" />

控制电机旋转到某个精确的角度并保持，只用了P项

在实际使用中，由于编码器无法直接返回电机转速 w，因此可以通过计算一定时间内的编码值变化量来表示电机的转速（也即用**平均速度**代表**瞬时速度**）。当电机转速比较高的时候，这样的方式是可以的；但是在位置控制模式的时候，电机的转速会很慢（因为是要求转子固定在某个位置嘛），这时候用平均测速法会存在非常大的误差（转子不动或者动地很慢，编码器就没有输出或者只输出1、2个脉冲）。

所以为了避免速度环节带来的误差，在做**位置控制**的时候可以只使用位置和电流组成的双环进行控制，不过此时需要对位置环做一定的变化，控制框图如下：

<img src="C:\Users\zp\Desktop\Note\image\v2-af17ac8465092f198e2f4f2ea8dad752_720w.webp" style="zoom:80%;" />

由于去掉了速度环，这里的位置环我们使用完整的**PID控制**，即把微分项加上（因为位置的微分就是速度，这样可以减小位置控制的震荡加快收敛；积分项的作用是为了消除静态误差）。



#### 1.3 空间电压矢量

以前面**三相逆变驱动电路**那幅图中的状态为例，输入**100**的状态：

<img src="C:\Users\zp\Desktop\Note\image\v2-28c5ce7876603e45d61668e290e371e3_720w.jpg" style="zoom:80%;" />

此时等效电路如图：

<img src="C:\Users\zp\Desktop\Note\image\v2-f4cd3936b0c1599086576e4ba5f7f9bd_720w.jpg" style="zoom:80%;" />

因此电机中三个**相电压**（相电压是每相相对于电机中间连接点的电压）可以表示为：

![](C:\Users\zp\Desktop\Note\image\三相.jpg)

$U_{dc}$是电源电压，再合成矢量：

<img src="C:\Users\zp\Desktop\Note\image\矢量合成.jpg" style="zoom:80%;" />

根据右手定理判断出磁场的磁力线方向和矢量U一样，内部的转子会努力旋转到内部磁力线和外部磁力线方向一致，**所以这个矢量就可以表示为我们希望转子旋转到的方向**。而这个矢量是会不断在空间中旋转的，它的幅值不变，为相电压峰值$U_{dc}$,且以角速度$w = 2{\pi}f$匀速旋转。

根据MOS管的导通方向可以有8种情况：

<img src="C:\Users\zp\Desktop\Note\image\v2-1d0392a19bc58c20f2c440d9c06edc8c_720w.webp" style="zoom:80%;" />

> 注意上图中的(100)矢量方向和AO方向是相反的（变成OA方向），这跟正方向的定义有关，这样的规定更直观一些。
> 同时可以注意到两个零矢量其实和原点重合了，因为这两个状态下电机中产生力矩的磁场为0（不考虑旋转过程中的反电动势产生的阻力力矩）。

<img src="C:\Users\zp\Desktop\Note\image\矢量计算.jpg" style="zoom:50%;" />

每一组向量的模长都是$\frac{2}{3}V_{dc}$,间隔$\frac{\pi}{3}$。乘以$\frac{2}{3}$是因为矢量变换时要保证幅值相等。

6个空间电压矢量只能产生6个方向的力矩，所以我们需要利用SVPWM技术来产生任意方向的力矩从而来控制电机以任意速度旋转或者到达任意位置





***

## 2023.2.22

### 1.SVPWM

**参考文献：**

* [彻底吃透SVPWM如此简单](https://zhuanlan.zhihu.com/p/414721065)
* [【自制FOC驱动器-稚晖君】深入浅出讲解FOC算法与SVPWM技术](https://zhuanlan.zhihu.com/p/147659820)
* 现代永磁同步电机控制原理及MATLAB仿真



#### 1.1前提

在无刷电机控制中，转子在磁场中只有6个稳定的状态，因此旋转过程其实是不平滑的，存在扭矩的抖动（没有通电的时候可以用手转一下无刷电机，会感受到这种“颗粒感”）。因此为了解决这个问题，从“硬件”和从“软件”出发有两个解决方案，这就衍生出了**BLDC**和**PMSM**的区别。

**BLDC：**简单地说，BLDC由于反电动势接近梯形波，所以肯定是会有上面说的抖动问题的，但是转一圈抖6下太明显了，如果我增加电机槽、极对数（也就是磁铁对数），那以前是360度里面抖6下，现在变成120度里面抖6下，甚至更小，这样“颗粒感”不就变得更小了嘛？实际中买到的BLDC电机基本都是**多极对**的。

**PMSM：**PMSM的反电动势被设计为**正弦波**的形状，我们用**软件和算法**结合**PWM技术**将方波转变成等效的SPWM正弦波或者SVPWM马鞍波就可以实现随意控制电机的位置以及速度并且没有抖动问题。



#### 1.2过程

```mermaid
graph LR
	C[电压合成矢量] --> D[计算每个扇区的周期]
	D[计算每个扇区的周期] --> E[调整每个周期出现的顺序]
	E[调整每个周期出现的顺序] --> k[确定切换时间点]
	k[确定切换时间点] --> F[得到SVPWM波]
	F[得到SVPWM波] --> A[控制六路开关]
```



#### 1.3实现原理

**问题：给定一个电压合成矢量，怎么使用SVPWM技术来将它在逆变器上实现？**

**SVPWM用来产生正弦波信号**

* 逆变器的虚拟模型:

<img src="C:\Users\zp\Desktop\Note\image\v2-a0233fb57d155f8979997003d9afcfa6_720w.webp" style="zoom:50%;" />

我们先定义一个开关函数：

$S_x(x = a,b,c)$

$S_a$=1 就代表 $a$ 相上开关导通，下开关切断。$S_a$=0 代表的状态则相反。

假设$S_x=(1,0,0)$,此时该状态对应的电机绕组连接图如下：

<img src="C:\Users\zp\Desktop\Note\image\v2-47aaa9843d2594f1ffd82eed2727d7d3_1440w.webp" style="zoom: 50%;" />

$V_{AN} = \frac{2}{3}V_{dc}$

$V_{BN} = -\frac{1}{3}V_{dc}e^{\frac{2\pi}{3}}$

$V_{CN} = -\frac{1}{3}V_{dc}e^{\frac{4\pi}{3}}$

电压合成矢量就是$V = V_{AN}+V_{BN}+V_{CN}$,对应的八种状态如下图：

<img src="C:\Users\zp\Desktop\Note\image\电压矢量合成.webp" style="zoom: 80%;" />

> 乘以$\frac{2}{3}$是为了使幅值统一

变换到$\alpha和\beta$坐标系下如下图：

<img src="C:\Users\zp\Desktop\Note\image\α-β坐标系.webp" style="zoom: 50%;" />

***

> 当我们在三相上加的是相差120°的正弦波电压时，如图：
>
> <img src="C:\Users\zp\Desktop\Note\image\加正弦波电压.webp" style="zoom:50%;" />
>
> $u_m$是他们的幅值，$w_e$是他们的角频率都相等只有相位相差120°
>
> 将他们合成：
>
> <img src="C:\Users\zp\Desktop\Note\image\正弦波合成.webp" style="zoom:80%;" />
>
> 可知合成的电压是幅值不变，相位随着角频率改变而改变，如图：
>
> <img src="C:\Users\zp\Desktop\Note\image\电压矢量合成动图.gif" style="zoom:67%;" />
>
> 其中的黑线就是经过clack变换的电压合成矢量，如果再经过park变换就可以将研究对象线性化

***

* $\alpha和\beta$坐标系一共可以分为6个扇区

现在我们假设电压合成矢量在其中一个扇区，根据伏秒平衡等效原理可知：

$T_sV_{out} = T_4V_4 + T_6V_6 + T_0V_0(或者是T_7V_7)$

$T_4 + T_6 + T_0 = T_s$

$V_{first} = \frac{T_4}{T_s}V_4$

$V_{second} = \frac{T_6}{T_s}V_6$

观察下图发现：

<img src="C:\Users\zp\Desktop\Note\image\扇区分解.webp" style="zoom:50%;" />



<img src="C:\Users\zp\Desktop\Note\image\SharedScreenshot.jpg" style="zoom:50%;" />

从而得到：

<img src="C:\Users\zp\Desktop\Note\image\SharedScreenshot2.jpg" style="zoom:50%;" />

***

>通常情况下 $V_{out}$的幅值 $u_m$ 小于图5正六边形的**内切圆**的半径，该半径的大小是 $\frac{\sqrt3}{3}V_{dc}$。但实际上  $V_{out}$ 的幅值最大可以达到图5正六边形**外接圆**的半径，即 $\frac{2}{3}V_{dc}$。此时调制比可以达到1.1547。和正弦脉宽调制技术（Sinusoidal Pulse Width Modulation, SPWM）比较SVPWM的调制比更大。这也是为什么SVPWM的直流电压 $V_{dc}$ 的利用率更高。

***

* 知道了将电压矢量分解到扇区得到周期是不够的，我们还需要知道这个状态的周期在一个开关周期$T_s$中怎么分配。

我们对分配周期有一个原则：在合成一次参考电压的时候开关次数要最少这样逆变器上的损耗就最小。

例如：$V_0 - V_4  - V_6  - V_7  - V_7 - V_6 - V_4 - V_0 $

下标指的是逆变器的开关函数用二进制表示比如4代表$(1,0,0)$

所有扇区的开关切换顺序可以由如图来表示：

<img src="C:\Users\zp\Desktop\Note\image\开关顺序.webp" style="zoom:50%;" />

>由顺序图我们可以看见，我们将$V_7$放在中间，这样做有一个好处：
>
>​		提高电压脉冲的频率从而降低电流波纹，那么和电流波纹相关的转矩脉动以及磁场能量损失也就被削减了，电机运行更加平稳且噪声更小了



#### 1.4实现过程

* **扇区判定：**

  我们将参考电压$V_{ref}$分解在$\alpha-\beta$坐标系上，对应在两个坐标轴上的电压量是$u_\alpha$和 $u_\beta$ (这是两个标量)。我们可以定义三个变量$V_{ref1}$,$V_{ref2}$,$V_{ref3}$

<img src="C:\Users\zp\Desktop\Note\image\SharedScreenshot3.jpg" style="zoom:50%;" />

这三个变量可以用来判定$V_{ref}$所在的扇区。第二个方程和第三个方程左边设为零后是在$\alpha-\beta$坐标系下的两根直线（$u_\alpha$是$\alpha$轴的变量）。红线代表第三个方程，粉红色区域代表大于0的区域，该线另外一侧就代表其小于零的区域。对于第二个方程同理。

<img src="C:\Users\zp\Desktop\Note\image\扇区判断.webp" style="zoom:50%;" />

我们假设

$V_{ref1} > 0, A = 1$

$V_{ref2} > 0, B = 1$

$V_{ref3} > 0, C = 1$

并作出下表：

<img src="C:\Users\zp\Desktop\Note\image\扇区表.webp" style="zoom:50%;" />

根据N的值判断参考电压在那个扇区。



*   **决定各个基向量之间切换的顺序**

我们知道参考电压所在的扇区后，我们就需要决定各个基向量之间切换的顺序来是MOS管的开关次数达到最小从而最大限度的减少开关损耗。

我们通过在合理的位置插入两个零矢量，并且对零矢量在时间上进行了平均分配，以使产生的PWM对称，从而有效地降低了PWM的谐波分量。

<img src="C:\Users\zp\Desktop\Note\image\扇区基向量顺序.webp" style="zoom: 50%;" />



* **计算扇区内相邻两个非零向量和零向量的作用时间**

我们定义：

<img src="C:\Users\zp\Desktop\Note\image\SharedScreenshot4.jpg" style="zoom:50%;" />

 $T_{first}$代表任意扇区内逆时针数第一个非零电压向量持续的时间，$T_{second}$代表同一扇区第二个非零电压向量持续的时间。在第一个扇区，显然 $T_{first}$和$T_{second}$分别是 $T_4$ 和 $T_6$ ，对应的非零电压向量分别为 $V_4$ 和 $V_6$ 。在六个扇区每个扇区内合成参考电压向量用到的相邻两个非零向量以及两个零向量它们分别持续的时间列在下表内。

<img src="C:\Users\zp\Desktop\Note\image\扇区周期表.webp" style="zoom:50%;" />

<img src="C:\Users\zp\Desktop\Note\image\SharedScreenshot5.jpg" style="zoom:50%;" />

**注意：**表中的N是前面的表中计算扇区区间的 `N = A+B+C`



* **计算时间切换点：**

我们现在知道了某个电压向量比如 $V_4$ 在一个开关周期内持续的时间，但这依然不够。我们还需要知道在什么时刻逆变器开关状态切换到了这个电压向量（ $V_4$）对应的状态。

对参考电压在任意扇区可以由下图表示：

<img src="C:\Users\zp\Desktop\Note\image\基向量切换时间点.webp" style="zoom: 50%;" />

$a$表示$a$相电压的导通和关闭，设 $T_{cm1},T_{cm2},T_{cm3}$是 $a，b，c$相上关闭到导通的时间，对任意一个参考电压：

<img src="C:\Users\zp\Desktop\Note\image\基向量电压三相切换时间点.webp" style="zoom:50%;" />

**其中N表示判断扇区区间的N=A+B+C**





**至此，SVPWM的工作完成了，我们得到了每一时刻所需要的空间电压矢量以及它们持续的时间，在处理器中赋值给对应通道的捕获比较寄存器产生相应的三个PWM波形，控制MOS管的开关，进而产生我们期望的电压、电流、力矩。**



#### 1.5总结

至此FOC的原理和整个控制链路都讲完了，回想一下整个过程，再尝试解答最开始提到的问题：**为什么在FOC控制中要做这么多变换和反变换？**

因为所谓的“矢量控制”其实就是在做**解耦**，把相互耦合的三相磁链解耦为容易控制的交轴 $I_q$ 和直轴 $I_d$ 。整个过程就好比我们在做信号处理的时候，通过FFT把信号变换到频域进行处理之后再IFFT反变换回时域是一个道理。

另外值得一提的是，本文介绍的是**有感**的FOC控制方法，其实FOC可以做到**无感控制**（也就是不需要编码器等额外的传感器），当然控制算法也会更加复杂，需要引入前馈控制、观测器等概念，无感的好处就是结构安装更简单，可以避免位置传感器失效的风险等等，当然这又是另外一个话题了。

FOC是个强大的控制方法，通过对电机的“像素级”控制，可以实现很多应用，因为可以做“力控”，FOC是很多机器人驱动单元的基础部件，比如：机械狗。



## 2023.2.23

### 1.复习git

* windows下直接搜索安装 git
* `git init`：**文件目录下使用**来将文件变成Git可以管理的仓库
* `git add “文件名”`：来将文件加入到**暂存区**中
* `git status`：来查看当前目录的情况
* `git commit -m “提交的说明”`：来将文件提交到**仓库**
* `git log`：来查看提交记录
* `git reset -- hard [commit id]`：回到指定版本
* `git reflog`：查看命令记录
* `git checkout --[file]`：把文件file的修改撤销回到最近一次`commit`或者`add`的版本，也就是用版本库里的版本替换掉工作区中的版本
* `git remote add origin SSH链接或者HTTPS链接（在github上仓库里可以查看）`：将当前文件连接到远程仓库**Github**
* `git push origin master`：将当前文件上传到**Github**上
* `git clone https链接`：将GitHub上的文件复制到当前目录
* `git switch -c ‘分支名’`：创建并切换到另外一个分支
* `git branch`：查看当前分支
* `git switch ‘分支名’`：切换分支



***



### 2.复习tmux

* 终端输入`tmux`进入`tmux`窗口
* `Ctrl+d `或在 `tmux` 下输入`exit`退出
* `Ctrl+b+?`：显示帮助
* `tmux new -s <name>`：新建一个自定义名字的会话，在终端中实行
* `tmux detach`：退回到终端但会话不结束
* `tmux attach -t <name>`：接入到`name`会话
* `tmux kill-session -t <name>`：杀死`name`会话
* `tmux switch -t <name>`：切换到`name`会话
* `tmux spilt-window-h`：左右划分为2个窗格，快捷键为：`Ctrl+b+%`
* `tmux new-window (-n <name>)`：新建一个窗口，可以选择加不加名字
* `Ctrl+b+方向键`：移动光标
* `Ctrl+b+x`：关闭当前窗口
* `Ctrl+b+c`：创建新窗口
* `Ctrl+b+n`：切换到下一个窗口
* `Ctrl+b+p`：切换到上一个窗口
* `Ctrl+b+w`：从列表中选择窗口



***



### 3.复习vim

*   三种模式：

    *   初始模式：使用 `vim [file]`进入初始模式或者在其他模式下用 `Esc` 来进入
    *   可视模式/视图模式：在编辑模式下按 `Esc` 否则按 `v `进入
    *   输入模式/编辑模式：在初始模式下按 `i` 或者 `a` 进入

    **`Esc`用来切换模式**

*   `：w` 保存不退出 | `：q` 不保存退出 | `：wq` 保存退出 |  `y` 复制 | `p` 粘贴 | `d` 删除

*   **vim配置在 `.vimrc` 中**

*   安装插件：去 `Github` 里找 `vim-plug`

*   使用 `/字符串` 来查到文本

*   在 `.vimrc` 中用 `map` 来映射实现快捷键

<img src="C:\Users\zp\AppData\Roaming\Typora\typora-user-images\image-20230223210839153.png" alt="image-20230223210839153" style="zoom:80%;" />

<img src="C:\Users\zp\AppData\Roaming\Typora\typora-user-images\image-20230223210927487.png" alt="image-20230223210927487" style="zoom:80%;" />



***



## 2023.2.28

*   学习MatLab，simulink并实现了clark变换，park变换，反clack变换，反park变换，生成C代码移植到板子上



***



## 2023.2.29

*   学习Matlab，simlink并实现了Svpwm模块，成功进行转换产生马鞍波
