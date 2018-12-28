Action3()
{

	lr_think_time(12);

	web_url("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/WebTours/welcome.pl?page=itinerary", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?page=menu&in=flights", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t10.inf", 
		LAST);

	return 0;
}
