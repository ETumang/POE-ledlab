/*returns C degrees in millicelsius*/ 
int getCelsius (){

read_in = analogRead(A0);
return = (500000*read_in)/1024-50;
}

/*and F degrees in microfahrenheit*/
int getFahrenheit(celsius){
	return (celsius*338-320000);
}



