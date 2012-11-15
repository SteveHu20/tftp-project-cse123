client: test_echo_client.c st_def.h
	gcc -o client test_echo_client.c st_def.h -I.

server: server_test.c st_def.h
	gcc -o server server_test.c st_def.h -I.
