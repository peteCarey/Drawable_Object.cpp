#include<iostream.h>
class Drawable_Object {
	private:
	public:
	virtual void display();
	void print();
};

void Drawable_Object::display()
{
	cout <<"display() of Drawable_Object called\n";
}
void Drawable_Object::print()
{
	cout <<"print() of Drawable_Object called\n";	
}
class Circle: public Drawable_Object
{
	private:
	public:
		void display();
		void print();
};  

void Circle::display()
{
	cout << display() of Circle called: Virtual Function\n";"
}
void Circle::print()
{
	cout << "print() of Circle called\n";

}
void demo(Drawable_Object &o)
{

	o.display();
	o.print();

}

main()
{
	Drawable_Object adrawable_object;
	Circle acircle;

	demo(adrawable_object);
	demo(acircle);

}