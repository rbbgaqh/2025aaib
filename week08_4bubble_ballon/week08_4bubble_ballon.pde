///week08-4bubble-ballon
void setup(){
  size(400,400);//大小
  }
  int x,y,s;
  void draw(){
    background(255);
    ellipse(x, y,s,s);
    if(mousePressed)s++;
    }
    void mousePressed(){
      x=mouseX;
      y=mouseY;
      s=1;
      }
  
