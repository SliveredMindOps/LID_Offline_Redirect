#include "stdafx.h"
#include "WinInetWrapper.h"


LPVOID InternetSetOptionW(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength) {
	LoadWinInet();
	ConsoleWrite("InternetSetOptionW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetSetOptionW");

		return origCall(hInternet, dwOption, lpBuffer, dwBufferLength);
	}
	return NULL;
}

LPVOID InternetCloseHandle(LPVOID hInternet) {
	LoadWinInet();
	ConsoleWrite("InternetCloseHandle \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetCloseHandle");
		return origCall(hInternet);
	}
	return NULL;
}

//Need to rebuild the structure here for lpUrlCompnents
 LPVOID InternetCrackUrlW(LPCWSTR lpszUrl, DWORD dwUrlLength, DWORD dwFlags, LPVOID lpUrlCompnents) {
	 LoadWinInet();
	ConsoleWrite("InternetCrackUrlW \n");
	

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPCWSTR lpszUrl, DWORD dwUrlLength, DWORD dwFlags, LPVOID lpUrlCompnents);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetCrackUrlW");
		return origCall(lpszUrl, dwUrlLength, dwFlags, lpUrlCompnents);
	}
	return NULL;
}

 LPVOID InternetQueryOptionW(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, LPDWORD lpdwBufferLength) {
	 LoadWinInet();
	ConsoleWrite("InternetQueryOptionW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, LPDWORD lpdwBufferLength);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetQueryOptionW");

		LPVOID returnVar = origCall(hInternet, dwOption, lpBuffer, lpdwBufferLength);

		return returnVar;
	}
	return NULL;
}

 LPVOID HttpQueryInfoW(LPVOID hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex) {
	 LoadWinInet();
	ConsoleWrite("HttpQueryInfoW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "HttpQueryInfoW");

		LPVOID returnVar = origCall(hRequest, dwInfoLevel, lpBuffer, lpdwBufferLength, lpdwIndex);

		return returnVar;
	}
	return NULL;
}

 LPVOID InternetGetConnectedState(LPDWORD lpdwFlags, DWORD dwReserved) {
	 LoadWinInet();
	 ConsoleWrite("InternetGetConnectedState \n");

	 if (WinInetModule != NULL) {
		 typedef LPVOID (WINAPI* IGCS)(LPDWORD lpdwFlags, DWORD dwReserved);
		 IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetGetConnectedState");
		 LPVOID returnVar = origCall(lpdwFlags, dwReserved);

		 return returnVar;
	 }
	return NULL;
}

 LPVOID InternetAttemptConnect(DWORD dwReserved) {
	 LoadWinInet();
	 ConsoleWrite("InternetAttemptConnect \n");

	 if (WinInetModule != NULL) {
		 typedef LPVOID(WINAPI* IGCS)(DWORD dwReserved);
		 IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetAttemptConnect");
		 return origCall(dwReserved);
	 }
	return NULL;
}

 LPVOID InternetCheckConnectionW(LPCWSTR lpszUrl, DWORD dwFlags, DWORD dwReserved) {
	 LoadWinInet();
	ConsoleWrite("InternetCheckConnectionW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPCWSTR lpszUrl, DWORD dwFlags, DWORD dwReserved);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetCheckConnectionW");
		return origCall(lpszUrl, dwFlags, dwReserved);
	}
	return NULL;
}

 LPVOID InternetOpenW(LPCWSTR lpszAgent, DWORD dwAccessType, LPCWSTR lpszProxy, LPCWSTR lpszProxyBypass, DWORD dwFlags) {
	 LoadWinInet();
	ConsoleWrite("InternetOpenW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPCWSTR lpszAgent, DWORD dwAccessType, LPCWSTR lpszProxy, LPCWSTR lpszProxyBypass, DWORD dwFlags);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetOpenW");
		return origCall(lpszAgent, dwAccessType, lpszProxy, lpszProxyBypass, dwFlags);
	}
	return NULL;
}

 LPVOID InternetSetStatusCallbackW(LPVOID hInternet, LPVOID lpfnInternetCallback) {
	 LoadWinInet();
	ConsoleWrite("InternetSetStatusCallbackW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet, LPVOID lpfnInternetCallback);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetSetStatusCallbackW");
		return origCall(hInternet, lpfnInternetCallback);
	}
	return NULL;
}

 LPVOID InternetConnectW(LPVOID hInternet, LPCWSTR lpszServerName, DWORD nServerPort, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext) {
	 LoadWinInet();
	ConsoleWrite("InternetConnectW \n");

	/*
	 * hash check
	 *
	BrgGame-Steam.exe+C54EAB - 7F 1C                 - jg BrgGame-Steam.exe+C54EC9
BrgGame-Steam.exe+C54EAD - 4D 8B CC              - mov r9,r12
BrgGame-Steam.exe+C54EB0 - 41 B8 81020000        - mov r8d,00000281 { 641 }
BrgGame-Steam.exe+C54EB6 - 48 8D 15 93D99700     - lea rdx,[BrgGame-Steam.exe+15D2850] { ("c:\brgviewer\development\src\core\inc\Array.h") }
BrgGame-Steam.exe+C54EBD - 48 8D 0D BCD99700     - lea rcx,[BrgGame-Steam.exe+15D2880] { ("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))") }
BrgGame-Steam.exe+C54EC4 - E8 071B4FFF           - call BrgGame-Steam.exe+1469D0
BrgGame-Steam.exe+C54EC9 - 4C 8B 65 A7           - mov r12,[rbp-59]
BrgGame-Steam.exe+C54ECD - 48 8B D3              - mov rdx,rbx
BrgGame-Steam.exe+C54ED0 - 49 8B CC              - mov rcx,r12
BrgGame-Steam.exe+C54ED3 - FF 15 B7099300        - call qword ptr [BrgGame-Steam.exe+1585890] <------------- This one
BrgGame-Steam.exe+C54ED9 - 45 33 E4              - xor r12d,r12d
BrgGame-Steam.exe+C54EDC - 41 8B CC              - mov ecx,r12d
BrgGame-Steam.exe+C54EDF - 85 C0                 - test eax,eax
BrgGame-Steam.exe+C54EE1 - 0F94 C1               - sete cl
BrgGame-Steam.exe+C54EE4 - 85 C9                 - test ecx,ecx
BrgGame-Steam.exe+C54EE6 - 75 38                 - jne BrgGame-Steam.exe+C54F20
BrgGame-Steam.exe+C54EE8 - 48 8D 15 A926D700     - lea rdx,[BrgGame-Steam.exe+19C7598] { ("ERR-0-010") }
BrgGame-Steam.exe+C54EEF - 49 8B CD              - mov rcx,r13
BrgGame-Steam.exe+C54EF2 - E8 59A55EFF           - call BrgGame-Steam.exe+23F450

	*/

	/*
	 * BrgGame-Steam.exe+D6E02D - 49 03 C8              - add rcx,r8
BrgGame-Steam.exe+D6E030 - 89 44 24 20           - mov [rsp+20],eax
BrgGame-Steam.exe+D6E034 - E8 277E32FF           - call BrgGame-Steam.exe+95E60 { <-------------- openssl EVP_DecryptInit_ex?
 }
BrgGame-Steam.exe+D6E039 - 84 C0                 - test al,al
BrgGame-Steam.exe+D6E03B - 74 4A                 - je BrgGame-Steam.exe+D6E087
BrgGame-Steam.exe+D6E03D - 4C 8B 8B C8000000     - mov r9,[rbx+000000C8]
BrgGame-Steam.exe+D6E044 - 44 8B 83 C4000000     - mov r8d,[rbx+000000C4]
BrgGame-Steam.exe+D6E04B - 48 8B 93 BC000000     - mov rdx,[rbx+000000BC]
BrgGame-Steam.exe+D6E052 - 48 8D 44 24 40        - lea rax,[rsp+40]
BrgGame-Steam.exe+D6E057 - 48 8D 4B 08           - lea rcx,[rbx+08]
BrgGame-Steam.exe+D6E05B - 48 89 44 24 20        - mov [rsp+20],rax
BrgGame-Steam.exe+D6E060 - E8 8B7E32FF           - call BrgGame-Steam.exe+95EF0 { <-------------- openssl EVP_DecryptUpdate
 }
BrgGame-Steam.exe+D6E065 - 84 C0                 - test al,al
BrgGame-Steam.exe+D6E067 - 74 1E                 - je BrgGame-Steam.exe+D6E087
BrgGame-Steam.exe+D6E069 - 48 63 54 24 40        - movsxd  rdx,dword ptr [rsp+40]
BrgGame-Steam.exe+D6E06E - 4C 8D 44 24 40        - lea r8,[rsp+40]
BrgGame-Steam.exe+D6E073 - 48 8D 4B 08           - lea rcx,[rbx+08]
BrgGame-Steam.exe+D6E077 - 48 03 93 C8000000     - add rdx,[rbx+000000C8]
BrgGame-Steam.exe+D6E07E - E8 6D7D32FF           - call BrgGame-Steam.exe+95DF0 { <-------------- openssl EVP_DecryptFinal_ex?
 }
BrgGame-Steam.exe+D6E083 - 84 C0                 - test al,al
BrgGame-Steam.exe+D6E085 - 75 15                 - jne BrgGame-Steam.exe+D6E09C
BrgGame-Steam.exe+D6E087 - 48 8B 8B B4000000     - mov rcx,[rbx+000000B4]
BrgGame-Steam.exe+D6E08E - BA 01000000           - mov edx,00000001 { 1 }
BrgGame-Steam.exe+D6E093 - 48 8B 01              - mov rax,[rcx]
BrgGame-Steam.exe+D6E096 - FF 90 C0020000        - call qword ptr [rax+000002C0] { <-------------- Set error if decryption failed
 }
BrgGame-Steam.exe+D6E09C - 33 C0                 - xor eax,eax
BrgGame-Steam.exe+D6E09E - 48 8B 4C 24 58        - mov rcx,[rsp+58]
BrgGame-Steam.exe+D6E0A3 - 48 33 CC              - xor rcx,rsp

	 */
	
	if (!wroteHook) {
		UINT64 moduleBase = (UINT64)GetModuleHandle("BrgGame-Steam.exe");
		UINT64 bypassXor = moduleBase + 0xC54E3F; // 0xC53EEF;
		DWORD oldProtect;
		VirtualProtect((LPVOID)bypassXor, 6, PAGE_EXECUTE_READWRITE, &oldProtect);
		char nopBuff[6] = { 0x31, 0xC0, 0x90, 0x90, 0x90, 0x90 };
		memcpy((void*)bypassXor, nopBuff, 6);
		VirtualProtect((LPVOID)bypassXor, 6, oldProtect, &oldProtect);

		// disable decryption
		UINT64 disableRequestDecryption = moduleBase + 0xD6E200; // 0xD6D6D0;
		char copyBuff[39] = {
			0x48, 0x31, 0xC0
			, 0x48, 0x31, 0xC9
			, 0x8A, 0x04, 0x11
			, 0x42, 0x88, 0x04, 0x09
			, 0x48, 0xFF, 0xC1
			, 0x4C, 0x39, 0xC1
			, 0x76, 0xF1
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0x90
			, 0xEB, 0x15
		};

		VirtualProtect((LPVOID)disableRequestDecryption, 39, PAGE_EXECUTE_READWRITE, &oldProtect);
		memcpy((void*)disableRequestDecryption, copyBuff, 39);
		VirtualProtect((LPVOID)disableRequestDecryption, 39, oldProtect, &oldProtect);
		
		ConsoleWrite("Wrote hooks \n");
		wroteHook = true;
	}

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hInternet, LPCWSTR lpszServerName, DWORD nServerPort, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetConnectW");
		nServerPort = 1337;
		lpszServerName = L"127.0.0.1";
		//lpszServerName = L"192.168.69.10";
		return origCall(hInternet, lpszServerName, nServerPort, lpszUserName, lpszPassword, dwService, dwFlags, dwContext);
	}
	return NULL;
}

 LPVOID HttpOpenRequestW(LPVOID hConnect, LPCWSTR lpszVerb, LPCWSTR lpszObjectName, LPCWSTR lpszVersion, LPCWSTR lpszRefferer, LPCWSTR FAR * lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext) {
	 LoadWinInet();
	ConsoleWrite("HttpOpenRequestW \n");
	dwFlags = 0x00001000 | 0x00002000 | 0x00008000 | 0x04000000;

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hConnect, LPCWSTR lpszVerb, LPCWSTR lpszObjectName, LPCWSTR lpszVersion, LPCWSTR lpszRefferer, LPCWSTR FAR * lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "HttpOpenRequestW");
		return origCall(hConnect, lpszVerb, lpszObjectName, lpszVersion, lpszRefferer, lplpszAcceptTypes, dwFlags, dwContext);
	}
	return NULL;
}

 LPVOID HttpSendRequestW(LPVOID hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength) {
	 LoadWinInet();
	ConsoleWrite("HttpSendRequestW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "HttpSendRequestW");
		return origCall(hRequest, lpszHeaders, dwHeadersLength, lpOptional, dwOptionalLength);
	}
	return NULL;
}

 LPVOID InternetReadFile(LPVOID hFile, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead) {
	 LoadWinInet();
	ConsoleWrite("InternetReadFile \n");
	
	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPVOID hFile, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetReadFile");
		LPVOID retVar = origCall(hFile, lpBuffer, dwNumberOfBytesToRead, lpdwNumberOfBytesRead);

		return retVar;
	}
	return NULL;
}

 LPVOID InternetSetCookieW(LPCWSTR lpszUrl, LPCWSTR lpszCookieName, LPCWSTR lpszCookieData) {
	 LoadWinInet();
	ConsoleWrite("InternetSetCookieW \n");

	if (WinInetModule != NULL) {
		typedef LPVOID(WINAPI* IGCS)(LPCWSTR lpszUrl, LPCWSTR lpszCookieName, LPCWSTR lpszCookieData);
		IGCS origCall = (IGCS)GetProcAddress(WinInetModule, "InternetSetCookieW");
		return origCall(lpszUrl, lpszCookieName, lpszCookieData);
	}
	return NULL;
}