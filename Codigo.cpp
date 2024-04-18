# define led 2
int fim = 0;
char *hobbies[] = {
    "Ler",
    "Jogar",
    "Desenhar",
    "Pescar",
    "Dancar",
    "Assistir",
    "Cozinhar"};


void setup(){
 pinMode(led, OUTPUT);
 Serial.begin(9600);
}

void loop(){   
  if(fim != 1){
   for(int i = 0; i <= 6; i++){
      Serial.println(hobbies[i]);             
   
      for (char* l = hobbies[i]; *l != '\0'; l++) {
        Serial.println(*l);  
        delay(200);      
     }
		Serial.println();
   }
        fim = 1; 
  }
}
