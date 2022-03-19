Choose_Flight()
{

	web_add_header("Origin", 
		"https://blazedemo.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(22);

	web_submit_data("purchase.php", 
		"Action=https://blazedemo.com/purchase.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/reserve.php", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flight", "Value=234", ENDITEM, 
		"Name=price", "Value=432.98", ENDITEM, 
		"Name=airline", "Value=United Airlines", ENDITEM, 
		"Name=fromPort", "Value=Philadelphia", ENDITEM, 
		"Name=toPort", "Value=New York", ENDITEM, 
		LAST);

	return 0;
}
