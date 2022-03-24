Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("01_Blazedemo_Homepage");

	lr_start_sub_transaction("01a_Blazedemo_Homepage", "01_Blazedemo_Homepage");

	
		web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://blazedemo.com/favicon.ico", "Referer=https://blazedemo.com/", ENDITEM, 
		LAST);


	lr_end_sub_transaction("01a_Blazedemo_Homepage", LR_AUTO);

	
	lr_end_transaction("01_Blazedemo_Homepage", LR_AUTO);


	return 0;
}
