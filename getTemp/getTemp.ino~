/*returns C degrees in millicelsius and F degrees in microfahrenheit*/
int getTemp (){

read_in = analogRead(A0);
int celsius = (500000*read_in)/1024-50;

if (isCelsius == true){
	return celsius;
}

else{
	return (celsius*338-320000);
}
}


