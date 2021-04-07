#include <IRremote.h> 적외선센서로 신호를 받아 해석하기 위한 라이브러리
//전역변수 설정 (led전구색에 따른 핀번호)
int blue = 2;
int green = 3;
int yellow = 4;
int red = 5;
int RECV_PIN = 11;//적외선 수신기에서 신호를 받는 핀
//IR라이브러리 객체
IRrecv irrecv(RECV_PIN);//라이브러리 변수irrecv선언 (적외선 센서가 연결된 핀번호 매핑)
decode_results results; //IRremote라이브러리에 선언되어있는 객체로 IR신호 복호화(적외선 신호를 해석한 값을 저장할 변수를 선언)
void setup() {
  // 전원 ON시 1회만 실행
  // GPIO핀 모드 설정
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  //시리얼모니터로 출력설정
  Serial.begin(9600);
  Serial.println("IR input Enabled");
  irrecv.enableIRIn();//IRecv 구조체(c)== 클래스(자바): 변수, 함수 포함
  Serial.println("IR input Starting");
}

void loop() {
  // 전원 ON시 무한반복
  if(irrecv.decode(&results)){ //decode: 수신된 적외선신호가 있는지 확인하고 있다면 true 반환하는 함수
    unsigned int value = results.value;
    Serial.println(value);//적외선 수신기로 받은 값 출력
    switch(value){
      case 34935:
        digitalWrite(blue, HIGH);
        delay(500);
        digitalWrite(blue, LOW);
        break;
      case 18615:
        digitalWrite(green, HIGH);
        delay(500);
        digitalWrite(green, LOW);
        break;
      case 10455:
        digitalWrite(yellow, HIGH);
        delay(500);
        digitalWrite(yellow, LOW);
        break;
      case 43095:
        digitalWrite(red, HIGH);
        delay(500);
        digitalWrite(red, LOW);
        break;
    }
    //switch문 end
    irrecv.resume(); // 다음 수신값을 받는다. 수신 준비상태
  }
  
}

