Purchase_Flight()
{

	web_add_header("Origin", 
		"https://blazedemo.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(68);

	lr_start_transaction("04_Blazedemo_Purchase_Flight");

		web_submit_data("confirmation.php", 
		"Action=https://blazedemo.com/confirmation.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/purchase.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_token", "Value=", ENDITEM, 
		"Name=inputName", "Value=Sam Ram", ENDITEM, 
		"Name=address", "Value=123 Flat 1206", ENDITEM, 
		"Name=city", "Value=Mumbai", ENDITEM, 
		"Name=state", "Value=Maharashtra", ENDITEM, 
		"Name=zipCode", "Value=400607", ENDITEM, 
		"Name=cardType", "Value=visa", ENDITEM, 
		"Name=creditCardNumber", "Value=1234567890", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2024", ENDITEM, 
		"Name=nameOnCard", "Value=XYZ", ENDITEM, 
		"Name=rememberMe", "Value=on", ENDITEM, 
		LAST);

	lr_end_transaction("04_Blazedemo_Purchase_Flight", LR_AUTO);


	return 0;
}