#ifndef __RESOURCE_H__
#define __RESOURCE_H__

#ifndef IDC_STATIC
#define IDC_STATIC (-1)
#endif

// Dialogs
#define IDD_MAIN	                            100
#define IDD_PAGE_PING                           101
#define IDD_PAGE_SPEEDMETER						102
#define IDD_PAGE_URLDECODER						103
#define IDD_PAGE_HOSTADDR						104
#define IDD_PAGE_URLINFO						105
#define IDD_PAGE_IP								106
#define IDD_PAGE_WHOIS							107
#define IDD_PAGE_SHAREDINFO                     108
#define IDD_PAGE_SYSINFO                        109
#define IDD_PAGE_TCP_STATISTIC                  110
#define IDD_PAGE_UDP_STATISTIC                  111
#define IDD_PAGE_ICMP_STATISTIC                 112
#define IDD_PAGE_IP_STATISTIC					113

// Menu Id
#define IDM_MAIN		                        100
#define IDM_LISTVIEW		                    101

// Page Controls
#define IDC_TITLE		                        100
#define IDC_DESCRIPTION	                        101

// Ping Page
#define IDC_PING_HOST	                        102
#define IDC_PING_RETRIES	                    103
#define IDC_PING_UPDOWN							104
#define IDC_PING_RESULT		                    105
#define IDC_PING_START							106
#define IDC_PING_CLEAR							107

// Speed Meter Page
#define IDC_SPEEDMETER_LINK						108
#define IDC_SPEEDMETER_LIMIT					109
#define IDC_SPEEDMETER_UPDOWN					110
#define IDC_SPEEDMETER_RESULT					111
#define IDC_SPEEDMETER_START					112
#define IDC_SPEEDMETER_CLEAR					113

// Url Decoder Page
#define IDC_URLDECODER_LINK						114
#define IDC_URLDECODER_RESULT					115
#define IDC_URLDECODER_START					116
#define IDC_URLDECODER_CLEAR					117

// Host Address Page
#define IDC_HOSTADDR_HOST						118
#define IDC_HOSTADDR_RESULT						119
#define IDC_HOSTADDR_START						120
#define IDC_HOSTADDR_CLEAR						121

// Url Info Page
#define IDC_URLINFO_LINK						122
#define IDC_URLINFO_RESULT						123
#define IDC_URLINFO_HEADER						124
#define IDC_URLINFO_HEADER_CHK					125
#define IDC_URLINFO_START						126
#define IDC_URLINFO_CLEAR						127

// Ip Page
#define IDC_IP_RESULT							128
#define IDC_IP_EXTERNAL_CHK						129
#define IDC_IP_REFRESH							130

// Whois Page
#define IDC_WHOIS_HOST							131
#define IDC_WHOIS_SERVER						132
#define IDC_WHOIS_RESULT						133
#define IDC_WHOIS_START							134
#define IDC_WHOIS_CLEAR							135

// System Info Page
#define IDC_SYSINFO								136

// Tcp Statistic Page
#define IDC_TCP_STATISTIC						137
#define IDC_TCP_STATISTIC_CHK					138

// Udp Statistic Page
#define IDC_UDP_STATISTIC						139
#define IDC_UDP_STATISTIC_CHK					140

// Icmp Statistic Page
#define IDC_ICMP_STATISTIC						141
#define IDC_ICMP_STATISTIC_CHK					142

// Ip Statistic Page
#define IDC_IP_STATISTIC						143
#define IDC_IP_STATISTIC_CHK					144


#define IDC_SHAREDINFO							145
#define IDC_SHAREDINFO_START					146
#define IDC_SHAREDINFO_CLEAR					147


// Main Window
#define IDC_ITEMLIST							100
#define IDC_STATUSBAR							101

// Main Menu
#define IDM_EXIT                                40000
#define IDM_CFG_CHECKUPDATES                    40001
#define IDM_WEBSITE                             40002
#define IDM_CHECK_UPDATES                       40003
#define IDM_ABOUT                               40004

// List-View Menu
#define IDC_LISTVIEW_COPY						1000
#define IDC_LISTVIEW_COPY_VALUE					1001
#define IDC_LISTVIEW_SAVE_AS					1002

// Icons
#define IDI_MAIN	                            100
#define IDI_FOLDER	                            101
#define IDI_FOLDER_CURRENT	                    102
#define IDI_SUCCESS								103
#define IDI_FAULT		                        104

#endif
