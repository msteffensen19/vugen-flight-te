Action()
{

	/* MAKE SURE TO START THE TE MERCURY FLIGHT DEMO SERVER FIRST */
	/* also called Reflection TE Flight Demo */
	/* *** The terminal type is 3270 Display. */
	TE_connect(
		"comm-type = tn3270;"
		"host-name = localhost;"
		"use-tn3270e-protocol = true;"
		"security-type = unsecured;"
		"r2l-screen = false;"
		"lu-name = ;"
		"terminal-type = 3270 display;"
		"terminal-model = 3278-2-e (24x80);"
		"login-command-file = ;"
		"terminal-setup-file = ;"
		, 60000);
	if (TE_errno != TE_SUCCESS) 
		return -1;
	TE_wait_sync();
	TE_wait_cursor(16, 20, 100, 90);
	lr_think_time(7);
	TE_type("mercury<kTab>");
	lr_think_time(5);
	TE_type("mercury<kEnter>");
	TE_wait_sync();
	lr_think_time(5);
	TE_type("cicsv<kEnter>");
	TE_wait_sync();
	lr_think_time(16);
	TE_type("4<kEnter>");
	TE_wait_sync();
	lr_think_time(9);
	TE_type("<kF4>");
	TE_wait_sync();
	lr_think_time(6);
	TE_type("<kF7>");
	TE_wait_sync();
	lr_think_time(5);
	TE_type("<kDown>");
	TE_type("<kDown>");
	TE_type("<kDown>");
	lr_think_time(5);
	TE_type("x<kEnter>");
	TE_wait_sync();
	lr_think_time(6);
	TE_type("<kF3>");
	TE_wait_sync();
	lr_think_time(21);
	TE_type("99");
	lr_think_time(7);
	TE_type("<kEnter>");
	/* 	End recording */
	return 0;
}
