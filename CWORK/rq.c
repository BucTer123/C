#include <curl/curl.h>
#inlcude <stdio.h>
#include <stdlib.h>
#include "rq.h"

size_t Writecall (void* contents, size_t size, size_t nmemb, char [100]s) {
	size_t totalsize = size *nmemb;
	s->append(char*)contents, totalsize);
	return totalsize;
}

void rq_fnc() {
	printf("Write domain :");
	char dom[100];
	scanf("%s", dom);
	
	printf("How many times :");
	int tm;
	scanf("%d", tm);
	
	int i = 0;
	
	for (i = 0; i < tm; i++) {
		if (!curl) {
			printf("ERROR!:");
		} else {
			CURL* curl = curl_easy_init();
			
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, "write");
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Writecall);
			curl_easy_setopt(curl, CURLOPT_URL, dom);
			
			curl_easy_setopt(curl, CURLOPT_PORT, 1L);
			curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
			curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 5L); 
			
			curl_easy_perform(curl);
			printf(curl);
			curl_easy_cleanup(curl);
		}
	}
}