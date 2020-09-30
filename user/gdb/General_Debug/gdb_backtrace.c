
fun3()
{
	int x=3;
}
fun2()
{
	int x=2;
	fun3();
}

fun1()
{
	int x=1;
	fun2();
}
main()
{
	int x=0;
	fun1();
}
