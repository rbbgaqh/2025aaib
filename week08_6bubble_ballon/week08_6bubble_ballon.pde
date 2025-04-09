///week08-6 bubble-ballon
void setup(){
  size(400,400);//大小
  }
  int [] x = new int[100];
  int [] y = new int[100];
  int [] s = new int[100];
  int N = 0;//一開始0個氣球
  void draw(){
    background(255);
    for(int i=0; i<N; i++){
      ellipse(x[i], y[i]-s[i]/2,s[i]*0.7,s[i]);
      if(mousePressed==false && y[i]>s[i]+1)y[i] -=2;
    }
    if(mousePressed)s[N-1]++;
  }
  void mousePressed(){
    x[N]=mouseX;
    y[N]=mouseY;
    s[N]=1;
    N++;
  }
