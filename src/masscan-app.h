#ifndef MASSCAN_APP_H
#define MASSCAN_APP_H

enum ApplicationProtocol {
    PROTO_NONE,
    PROTO_HEUR,
    PROTO_SSH1,
    PROTO_SSH2,
    PROTO_HTTP,
    PROTO_FTP1,
    PROTO_FTP2,
    PROTO_DNS_VERSIONBIND,
    PROTO_SNMP,
    PROTO_NBTSTAT,
    PROTO_SSL3,
    PROTO_SMTP,
    PROTO_POP3,
    PROTO_IMAP4,
    PROTO_UDP_ZEROACCESS,
    PROTO_X509_CERT,
    PROTO_HTML_TITLE,
    PROTO_HTML_FULL,
    PROTO_NTP_MONLIST,
};

const char *
masscan_app_to_string(enum ApplicationProtocol proto);


#endif
