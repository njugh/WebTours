Action()
{

	lr_think_time(14);
    
	lr_start_transaction("login");

	lr_rendezvous("login");
	web_submit_data("login.pl",
		"Action=http://127.0.0.1:1080/WebTours/login.pl",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://127.0.0.1:1080/WebTov.pl?in=home",
		"Snapshot=t4.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={WCSParam2}", ENDITEM,
		"Name=username", "Value={NewParam}", ENDITEM,
		"Name=password", "Value={NewParam_1}", ENDITEM,
		"Name=JSFormSubmit", "Value=on", ENDITEM,
		"Name=login.x", "Value=86", ENDITEM,
		"Name=login.y", "Value=12", ENDITEM,
		LAST);
	web_find("web_find",
		"What=Welcome",
		LAST);

	lr_end_transaction("login", LR_AUTO);


return 0;
}
