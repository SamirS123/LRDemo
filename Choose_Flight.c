Choose_Flight()
{

	web_add_header("Origin", 
		"https://blazedemo.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(22);

	lr_start_transaction("03_Blazedemo_Choose_Flight");

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

	lr_end_transaction("03_Blazedemo_Choose_Flight", LR_AUTO);


	return 0;
}
