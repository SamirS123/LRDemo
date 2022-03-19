Select_Flights()
{

	web_add_header("Origin", 
		"https://blazedemo.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(35);

	web_submit_data("reserve.php", 
		"Action=https://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fromPort", "Value=Philadelphia", ENDITEM, 
		"Name=toPort", "Value=New York", ENDITEM, 
		LAST);

	return 0;
}
