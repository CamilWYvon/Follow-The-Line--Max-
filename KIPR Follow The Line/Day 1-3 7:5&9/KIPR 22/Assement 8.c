int main()
{
motor(0,50);
motor(2,50);
msleep(3000);
motor(0,-50);
motor(2,-50);
ao();
msleep(3000);
}
