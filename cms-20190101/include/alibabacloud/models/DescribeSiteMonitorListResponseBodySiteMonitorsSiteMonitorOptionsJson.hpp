// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORSSITEMONITOROPTIONSJSON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORSSITEMONITOROPTIONSJSON_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& obj) { 
      DARABONBA_PTR_TO_JSON(acceptable_response_code, acceptableResponseCode_);
      DARABONBA_PTR_TO_JSON(assertions, assertions_);
      DARABONBA_PTR_TO_JSON(attempts, attempts_);
      DARABONBA_PTR_TO_JSON(authentication, authentication_);
      DARABONBA_PTR_TO_JSON(cert_verify, certVerify_);
      DARABONBA_PTR_TO_JSON(cookie, cookie_);
      DARABONBA_PTR_TO_JSON(diagnosis_mtr, diagnosisMtr_);
      DARABONBA_PTR_TO_JSON(diagnosis_ping, diagnosisPing_);
      DARABONBA_PTR_TO_JSON(dns_match_rule, dnsMatchRule_);
      DARABONBA_PTR_TO_JSON(dns_server, dnsServer_);
      DARABONBA_PTR_TO_JSON(dns_type, dnsType_);
      DARABONBA_PTR_TO_JSON(enable_operator_dns, enableOperatorDns_);
      DARABONBA_PTR_TO_JSON(failure_rate, failureRate_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(http_method, httpMethod_);
      DARABONBA_PTR_TO_JSON(isBase64Encode, isBase64Encode_);
      DARABONBA_PTR_TO_JSON(match_rule, matchRule_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(ping_num, pingNum_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(proxy_protocol, proxyProtocol_);
      DARABONBA_PTR_TO_JSON(request_content, requestContent_);
      DARABONBA_PTR_TO_JSON(request_format, requestFormat_);
      DARABONBA_PTR_TO_JSON(response_content, responseContent_);
      DARABONBA_PTR_TO_JSON(response_format, responseFormat_);
      DARABONBA_PTR_TO_JSON(retry_delay, retryDelay_);
      DARABONBA_PTR_TO_JSON(time_out, timeOut_);
      DARABONBA_PTR_TO_JSON(unfollow_redirect, unfollowRedirect_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptable_response_code, acceptableResponseCode_);
      DARABONBA_PTR_FROM_JSON(assertions, assertions_);
      DARABONBA_PTR_FROM_JSON(attempts, attempts_);
      DARABONBA_PTR_FROM_JSON(authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(cert_verify, certVerify_);
      DARABONBA_PTR_FROM_JSON(cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(diagnosis_mtr, diagnosisMtr_);
      DARABONBA_PTR_FROM_JSON(diagnosis_ping, diagnosisPing_);
      DARABONBA_PTR_FROM_JSON(dns_match_rule, dnsMatchRule_);
      DARABONBA_PTR_FROM_JSON(dns_server, dnsServer_);
      DARABONBA_PTR_FROM_JSON(dns_type, dnsType_);
      DARABONBA_PTR_FROM_JSON(enable_operator_dns, enableOperatorDns_);
      DARABONBA_PTR_FROM_JSON(failure_rate, failureRate_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(http_method, httpMethod_);
      DARABONBA_PTR_FROM_JSON(isBase64Encode, isBase64Encode_);
      DARABONBA_PTR_FROM_JSON(match_rule, matchRule_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(ping_num, pingNum_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(proxy_protocol, proxyProtocol_);
      DARABONBA_PTR_FROM_JSON(request_content, requestContent_);
      DARABONBA_PTR_FROM_JSON(request_format, requestFormat_);
      DARABONBA_PTR_FROM_JSON(response_content, responseContent_);
      DARABONBA_PTR_FROM_JSON(response_format, responseFormat_);
      DARABONBA_PTR_FROM_JSON(retry_delay, retryDelay_);
      DARABONBA_PTR_FROM_JSON(time_out, timeOut_);
      DARABONBA_PTR_FROM_JSON(unfollow_redirect, unfollowRedirect_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson(const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson(DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson &&) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& operator=(const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& operator=(DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptableResponseCode_ == nullptr
        && return this->assertions_ == nullptr && return this->attempts_ == nullptr && return this->authentication_ == nullptr && return this->certVerify_ == nullptr && return this->cookie_ == nullptr
        && return this->diagnosisMtr_ == nullptr && return this->diagnosisPing_ == nullptr && return this->dnsMatchRule_ == nullptr && return this->dnsServer_ == nullptr && return this->dnsType_ == nullptr
        && return this->enableOperatorDns_ == nullptr && return this->failureRate_ == nullptr && return this->header_ == nullptr && return this->httpMethod_ == nullptr && return this->isBase64Encode_ == nullptr
        && return this->matchRule_ == nullptr && return this->password_ == nullptr && return this->pingNum_ == nullptr && return this->port_ == nullptr && return this->protocol_ == nullptr
        && return this->proxyProtocol_ == nullptr && return this->requestContent_ == nullptr && return this->requestFormat_ == nullptr && return this->responseContent_ == nullptr && return this->responseFormat_ == nullptr
        && return this->retryDelay_ == nullptr && return this->timeOut_ == nullptr && return this->unfollowRedirect_ == nullptr && return this->username_ == nullptr; };
    // acceptableResponseCode Field Functions 
    bool hasAcceptableResponseCode() const { return this->acceptableResponseCode_ != nullptr;};
    void deleteAcceptableResponseCode() { this->acceptableResponseCode_ = nullptr;};
    inline string acceptableResponseCode() const { DARABONBA_PTR_GET_DEFAULT(acceptableResponseCode_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setAcceptableResponseCode(string acceptableResponseCode) { DARABONBA_PTR_SET_VALUE(acceptableResponseCode_, acceptableResponseCode) };


    // assertions Field Functions 
    bool hasAssertions() const { return this->assertions_ != nullptr;};
    void deleteAssertions() { this->assertions_ = nullptr;};
    inline const Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions & assertions() const { DARABONBA_PTR_GET_CONST(assertions_, Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions) };
    inline Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions assertions() { DARABONBA_PTR_GET(assertions_, Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setAssertions(const Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions & assertions) { DARABONBA_PTR_SET_VALUE(assertions_, assertions) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setAssertions(Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions && assertions) { DARABONBA_PTR_SET_RVALUE(assertions_, assertions) };


    // attempts Field Functions 
    bool hasAttempts() const { return this->attempts_ != nullptr;};
    void deleteAttempts() { this->attempts_ = nullptr;};
    inline int64_t attempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0L) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setAttempts(int64_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline int32_t authentication() const { DARABONBA_PTR_GET_DEFAULT(authentication_, 0) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setAuthentication(int32_t authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };


    // certVerify Field Functions 
    bool hasCertVerify() const { return this->certVerify_ != nullptr;};
    void deleteCertVerify() { this->certVerify_ = nullptr;};
    inline bool certVerify() const { DARABONBA_PTR_GET_DEFAULT(certVerify_, false) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setCertVerify(bool certVerify) { DARABONBA_PTR_SET_VALUE(certVerify_, certVerify) };


    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // diagnosisMtr Field Functions 
    bool hasDiagnosisMtr() const { return this->diagnosisMtr_ != nullptr;};
    void deleteDiagnosisMtr() { this->diagnosisMtr_ = nullptr;};
    inline bool diagnosisMtr() const { DARABONBA_PTR_GET_DEFAULT(diagnosisMtr_, false) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setDiagnosisMtr(bool diagnosisMtr) { DARABONBA_PTR_SET_VALUE(diagnosisMtr_, diagnosisMtr) };


    // diagnosisPing Field Functions 
    bool hasDiagnosisPing() const { return this->diagnosisPing_ != nullptr;};
    void deleteDiagnosisPing() { this->diagnosisPing_ = nullptr;};
    inline bool diagnosisPing() const { DARABONBA_PTR_GET_DEFAULT(diagnosisPing_, false) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setDiagnosisPing(bool diagnosisPing) { DARABONBA_PTR_SET_VALUE(diagnosisPing_, diagnosisPing) };


    // dnsMatchRule Field Functions 
    bool hasDnsMatchRule() const { return this->dnsMatchRule_ != nullptr;};
    void deleteDnsMatchRule() { this->dnsMatchRule_ = nullptr;};
    inline string dnsMatchRule() const { DARABONBA_PTR_GET_DEFAULT(dnsMatchRule_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setDnsMatchRule(string dnsMatchRule) { DARABONBA_PTR_SET_VALUE(dnsMatchRule_, dnsMatchRule) };


    // dnsServer Field Functions 
    bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
    void deleteDnsServer() { this->dnsServer_ = nullptr;};
    inline string dnsServer() const { DARABONBA_PTR_GET_DEFAULT(dnsServer_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setDnsServer(string dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };


    // dnsType Field Functions 
    bool hasDnsType() const { return this->dnsType_ != nullptr;};
    void deleteDnsType() { this->dnsType_ = nullptr;};
    inline string dnsType() const { DARABONBA_PTR_GET_DEFAULT(dnsType_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setDnsType(string dnsType) { DARABONBA_PTR_SET_VALUE(dnsType_, dnsType) };


    // enableOperatorDns Field Functions 
    bool hasEnableOperatorDns() const { return this->enableOperatorDns_ != nullptr;};
    void deleteEnableOperatorDns() { this->enableOperatorDns_ = nullptr;};
    inline bool enableOperatorDns() const { DARABONBA_PTR_GET_DEFAULT(enableOperatorDns_, false) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setEnableOperatorDns(bool enableOperatorDns) { DARABONBA_PTR_SET_VALUE(enableOperatorDns_, enableOperatorDns) };


    // failureRate Field Functions 
    bool hasFailureRate() const { return this->failureRate_ != nullptr;};
    void deleteFailureRate() { this->failureRate_ = nullptr;};
    inline float failureRate() const { DARABONBA_PTR_GET_DEFAULT(failureRate_, 0.0) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setFailureRate(float failureRate) { DARABONBA_PTR_SET_VALUE(failureRate_, failureRate) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline string header() const { DARABONBA_PTR_GET_DEFAULT(header_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setHeader(string header) { DARABONBA_PTR_SET_VALUE(header_, header) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // isBase64Encode Field Functions 
    bool hasIsBase64Encode() const { return this->isBase64Encode_ != nullptr;};
    void deleteIsBase64Encode() { this->isBase64Encode_ = nullptr;};
    inline string isBase64Encode() const { DARABONBA_PTR_GET_DEFAULT(isBase64Encode_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setIsBase64Encode(string isBase64Encode) { DARABONBA_PTR_SET_VALUE(isBase64Encode_, isBase64Encode) };


    // matchRule Field Functions 
    bool hasMatchRule() const { return this->matchRule_ != nullptr;};
    void deleteMatchRule() { this->matchRule_ = nullptr;};
    inline int32_t matchRule() const { DARABONBA_PTR_GET_DEFAULT(matchRule_, 0) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setMatchRule(int32_t matchRule) { DARABONBA_PTR_SET_VALUE(matchRule_, matchRule) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // pingNum Field Functions 
    bool hasPingNum() const { return this->pingNum_ != nullptr;};
    void deletePingNum() { this->pingNum_ = nullptr;};
    inline int32_t pingNum() const { DARABONBA_PTR_GET_DEFAULT(pingNum_, 0) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setPingNum(int32_t pingNum) { DARABONBA_PTR_SET_VALUE(pingNum_, pingNum) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // proxyProtocol Field Functions 
    bool hasProxyProtocol() const { return this->proxyProtocol_ != nullptr;};
    void deleteProxyProtocol() { this->proxyProtocol_ = nullptr;};
    inline bool proxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocol_, false) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setProxyProtocol(bool proxyProtocol) { DARABONBA_PTR_SET_VALUE(proxyProtocol_, proxyProtocol) };


    // requestContent Field Functions 
    bool hasRequestContent() const { return this->requestContent_ != nullptr;};
    void deleteRequestContent() { this->requestContent_ = nullptr;};
    inline string requestContent() const { DARABONBA_PTR_GET_DEFAULT(requestContent_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setRequestContent(string requestContent) { DARABONBA_PTR_SET_VALUE(requestContent_, requestContent) };


    // requestFormat Field Functions 
    bool hasRequestFormat() const { return this->requestFormat_ != nullptr;};
    void deleteRequestFormat() { this->requestFormat_ = nullptr;};
    inline string requestFormat() const { DARABONBA_PTR_GET_DEFAULT(requestFormat_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setRequestFormat(string requestFormat) { DARABONBA_PTR_SET_VALUE(requestFormat_, requestFormat) };


    // responseContent Field Functions 
    bool hasResponseContent() const { return this->responseContent_ != nullptr;};
    void deleteResponseContent() { this->responseContent_ = nullptr;};
    inline string responseContent() const { DARABONBA_PTR_GET_DEFAULT(responseContent_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setResponseContent(string responseContent) { DARABONBA_PTR_SET_VALUE(responseContent_, responseContent) };


    // responseFormat Field Functions 
    bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
    void deleteResponseFormat() { this->responseFormat_ = nullptr;};
    inline string responseFormat() const { DARABONBA_PTR_GET_DEFAULT(responseFormat_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setResponseFormat(string responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };


    // retryDelay Field Functions 
    bool hasRetryDelay() const { return this->retryDelay_ != nullptr;};
    void deleteRetryDelay() { this->retryDelay_ = nullptr;};
    inline int32_t retryDelay() const { DARABONBA_PTR_GET_DEFAULT(retryDelay_, 0) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setRetryDelay(int32_t retryDelay) { DARABONBA_PTR_SET_VALUE(retryDelay_, retryDelay) };


    // timeOut Field Functions 
    bool hasTimeOut() const { return this->timeOut_ != nullptr;};
    void deleteTimeOut() { this->timeOut_ = nullptr;};
    inline int64_t timeOut() const { DARABONBA_PTR_GET_DEFAULT(timeOut_, 0L) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setTimeOut(int64_t timeOut) { DARABONBA_PTR_SET_VALUE(timeOut_, timeOut) };


    // unfollowRedirect Field Functions 
    bool hasUnfollowRedirect() const { return this->unfollowRedirect_ != nullptr;};
    void deleteUnfollowRedirect() { this->unfollowRedirect_ = nullptr;};
    inline bool unfollowRedirect() const { DARABONBA_PTR_GET_DEFAULT(unfollowRedirect_, false) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setUnfollowRedirect(bool unfollowRedirect) { DARABONBA_PTR_SET_VALUE(unfollowRedirect_, unfollowRedirect) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The acceptable status code.
    // 
    // >  We recommend that you configure assertions.
    std::shared_ptr<string> acceptableResponseCode_ = nullptr;
    // The assertions.
    std::shared_ptr<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions> assertions_ = nullptr;
    // The number of retries after a DNS failure occurred.
    std::shared_ptr<int64_t> attempts_ = nullptr;
    // Indicates whether the security authentication feature is enabled. Valid values:
    // 
    // *   0: The feature is enabled.
    // *   1: The feature is disabled.
    std::shared_ptr<int32_t> authentication_ = nullptr;
    // Indicates whether the certificate is verified. Valid values:
    // 
    // *   false (default): The certificate is not verified.
    // *   true: The certificate is verified.
    std::shared_ptr<bool> certVerify_ = nullptr;
    // The cookie of the HTTP request.
    std::shared_ptr<string> cookie_ = nullptr;
    // Indicates whether MTR is automatically used to diagnose network issues if a task fails. Valid values:
    // 
    // *   false (default): MTR is not automatically used to diagnose network issues if a task fails.
    // *   true: MTR is automatically used to diagnose network issues if a task fails.
    std::shared_ptr<bool> diagnosisMtr_ = nullptr;
    // Indicates whether ping requests are automatically sent to detect network latency if a detection task fails. Valid values:
    // 
    // *   false (default): Ping requests are not automatically sent to detect network latency if a detection task fails.
    // *   true: Ping requests are automatically sent to detect network latency if a detection task fails.
    std::shared_ptr<bool> diagnosisPing_ = nullptr;
    // The relationship between the list of expected aliases or IP addresses and the list of DNS results. Valid values:
    // 
    // *   IN_DNS: The list of expected values is a subset of the list of DNS results.
    // *   DNS_IN: The list of DNS results is a subset of the list of expected values.
    // *   EQUAL: The list of DNS results is the same as the list of expected values.
    // *   ANY: The list of DNS results intersects with the list of expected values.
    std::shared_ptr<string> dnsMatchRule_ = nullptr;
    // The domain name or IP address of the DNS server.
    std::shared_ptr<string> dnsServer_ = nullptr;
    // The type of the DNS record. This parameter is returned only if the TaskType parameter is set to DNS. Valid values:
    // 
    // *   A (default): a record that specifies an IP address related to the specified host name or domain name.
    // *   CNAME: a record that maps multiple domain names to a domain name.
    // *   NS: a record that specifies a DNS server used to parse domain names.
    // *   MX: a record that links domain names to the address of a mail server.
    // *   TXT: a record that stores the text information of host name or domain names. The text must be 1 to 512 bytes in length. The TXT record serves as a Sender Policy Framework (SPF) record to fight against spam.
    // *   AAAA: a record that maps a domain name to the relevant IPv6 address.
    std::shared_ptr<string> dnsType_ = nullptr;
    // Indicates whether the DNS server of the carrier is used.
    // 
    // *   true (default): The DNS server of the carrier is used.
    // *   false: The DNS server of the carrier is not used. The default DNS server or the specified DNS server is used.
    std::shared_ptr<bool> enableOperatorDns_ = nullptr;
    // The packet loss rate.
    // 
    // >  This parameter is returned only if the TaskType parameter is set to PING.
    std::shared_ptr<float> failureRate_ = nullptr;
    // The header of the HTTP request. An HTTP header is a key-value pair in which the key and the value are separated by a colon (:). The format is `key1:value1`. Each HTTP header occupies a line.
    std::shared_ptr<string> header_ = nullptr;
    // The HTTP request method. Valid values:
    // 
    // *   get
    // *   post
    // *   head
    std::shared_ptr<string> httpMethod_ = nullptr;
    // Indicates whether the password is decoded by using the Base64 algorithm. Valid values:
    // 
    // *   true: The password is decoded by using the Base64 algorithm.
    // *   false (default): The password is not decoded by using the Base64 algorithm.
    std::shared_ptr<string> isBase64Encode_ = nullptr;
    // Indicates whether the alert rule is included. Valid values:
    // 
    // *   0: The alert rule is included.
    // *   1: The alert rule is not included.
    std::shared_ptr<int32_t> matchRule_ = nullptr;
    // The password of the SMTP, POP3, or FTP protocol.
    std::shared_ptr<string> password_ = nullptr;
    // The number of hops for the PING protocol.
    std::shared_ptr<int32_t> pingNum_ = nullptr;
    // The port number of the TCP, UDP, SMTP, or POP3 protocol.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol type of DNS detection. Valid values:
    // 
    // *   udp (default)
    // *   tcp
    // *   tcp-tls
    std::shared_ptr<string> protocol_ = nullptr;
    // Indicates whether the PROXY protocol is enabled. Valid values:
    // 
    // *   false (default): The PROXY protocol is disabled.
    // *   true: The PROXY protocol is enabled.
    std::shared_ptr<bool> proxyProtocol_ = nullptr;
    // The content of the HTTP request.
    std::shared_ptr<string> requestContent_ = nullptr;
    // The format of the HTTP request. Valid values:
    // 
    // *   hex: hexadecimal
    // *   txt: text
    std::shared_ptr<string> requestFormat_ = nullptr;
    // The response to the HTTP request.
    // 
    // *   Hexadecimal format: If the request content is a byte string and cannot be represented in printable characters, you can convert the byte string to printable characters in the hexadecimal format. If you convert the byte string to printable characters in the hexadecimal format, one byte is converted to two hexadecimal characters. For example, (byte)1 is converted to `01` and (byte)27 is converted to `1B`. If the request content is a binary array in the Java format, for example, `{(byte)1, (byte)27}`, you can convert the binary array to `011b` or `011B`. Hexadecimal characters are not case-sensitive in site monitoring tasks. You can enter `011B` in the request content and set the request_format parameter to hex.
    // *   Text format: Common text refers to strings that consist of printable characters.
    std::shared_ptr<string> responseContent_ = nullptr;
    // The format of the HTTP response. Valid values:
    // 
    // *   hex: hexadecimal
    // *   txt: text
    std::shared_ptr<string> responseFormat_ = nullptr;
    // The number of times a failed detection request is retried.
    std::shared_ptr<int32_t> retryDelay_ = nullptr;
    // The timeout period. Unit: milliseconds.
    std::shared_ptr<int64_t> timeOut_ = nullptr;
    // Indicates whether redirects are followed if the status code 301 or 302 is returned. Valid values:
    // 
    // *   true: Redirects are not followed.
    // *   false (default): Redirects are followed.
    std::shared_ptr<bool> unfollowRedirect_ = nullptr;
    // The username of the FTP, SMTP, or POP3 protocol.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
