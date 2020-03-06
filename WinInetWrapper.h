#pragma once
#include <iostream>
#include <sstream>

LPVOID InternetSetOptionW(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength);
LPVOID InternetCloseHandle(LPVOID hInternet);
LPVOID InternetCrackUrlW(LPCWSTR lpszUrl, DWORD dwUrlLength, DWORD dwFlags, LPVOID lpUrlCompnents);
LPVOID InternetQueryOptionW(LPVOID hInternet, DWORD dwOption, LPVOID lpBuffer, LPDWORD lpdwBufferLength);
LPVOID HttpQueryInfoW(LPVOID hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex);
LPVOID InternetGetConnectedState(LPDWORD lpdwFlags, DWORD dwReserved);
LPVOID InternetAttemptConnect(DWORD dwReserved);
LPVOID InternetCheckConnectionW(LPCWSTR lpszUrl, DWORD dwFlags, DWORD dwReserved);
LPVOID InternetOpenW(LPCWSTR lpszAgent, DWORD dwAccessType, LPCWSTR lpszProxy, LPCWSTR lpszProxyBypass, DWORD dwFlags);
LPVOID InternetSetStatusCallbackW(LPVOID hInternet, LPVOID lpfnInternetCallback);
LPVOID InternetConnectW(LPVOID hInternet, LPCWSTR lpszServerName, LPVOID nServerPort, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext);
LPVOID HttpOpenRequestW(LPVOID hConnect, LPCWSTR lpszVerb, LPCWSTR lpszObjectName, LPCWSTR lpszVersion, LPCWSTR lpszRefferer, LPCWSTR FAR * lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext);
LPVOID HttpSendRequestW(LPVOID hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength);
LPVOID InternetReadFile(LPVOID hFile, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead);
LPVOID InternetSetCookieW(LPCWSTR lpszUrl, LPCWSTR lpszCookieName, LPCWSTR lpszCookieData);

extern void LoadWinInet();
extern HMODULE WinInetModule;

bool wroteHook = false;