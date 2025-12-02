// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSON_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& obj) { 
      DARABONBA_PTR_TO_JSON(assertions, assertions_);
      DARABONBA_PTR_TO_JSON(attempts, attempts_);
      DARABONBA_PTR_TO_JSON(auth_info, authInfo_);
      DARABONBA_PTR_TO_JSON(blocked_url_list, blockedUrlList_);
      DARABONBA_PTR_TO_JSON(browser_headers, browserHeaders_);
      DARABONBA_PTR_TO_JSON(browser_hosts, browserHosts_);
      DARABONBA_PTR_TO_JSON(browser_info, browserInfo_);
      DARABONBA_PTR_TO_JSON(browser_insecure, browserInsecure_);
      DARABONBA_PTR_TO_JSON(browser_task_version, browserTaskVersion_);
      DARABONBA_PTR_TO_JSON(config_variables, configVariables_);
      DARABONBA_PTR_TO_JSON(cookie, cookie_);
      DARABONBA_PTR_TO_JSON(diagnosis_mtr, diagnosisMtr_);
      DARABONBA_PTR_TO_JSON(diagnosis_ping, diagnosisPing_);
      DARABONBA_PTR_TO_JSON(dns_hijack_whitelist, dnsHijackWhitelist_);
      DARABONBA_PTR_TO_JSON(dns_match_rule, dnsMatchRule_);
      DARABONBA_PTR_TO_JSON(dns_server, dnsServer_);
      DARABONBA_PTR_TO_JSON(dns_type, dnsType_);
      DARABONBA_PTR_TO_JSON(empty_message, emptyMessage_);
      DARABONBA_PTR_TO_JSON(enable_packet_capture, enablePacketCapture_);
      DARABONBA_PTR_TO_JSON(expect_exist_string, expectExistString_);
      DARABONBA_PTR_TO_JSON(expect_non_exist_string, expectNonExistString_);
      DARABONBA_PTR_TO_JSON(expect_value, expectValue_);
      DARABONBA_PTR_TO_JSON(failure_rate, failureRate_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(hops, hops_);
      DARABONBA_PTR_TO_JSON(host_binding, hostBinding_);
      DARABONBA_PTR_TO_JSON(host_binding_type, hostBindingType_);
      DARABONBA_PTR_TO_JSON(http_method, httpMethod_);
      DARABONBA_PTR_TO_JSON(icmp_timeout_millis, icmpTimeoutMillis_);
      DARABONBA_PTR_TO_JSON(ip_network, ipNetwork_);
      DARABONBA_PTR_TO_JSON(isBase64Encode, isBase64Encode_);
      DARABONBA_PTR_TO_JSON(match_rule, matchRule_);
      DARABONBA_PTR_TO_JSON(min_tls_version, minTlsVersion_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(ping_num, pingNum_);
      DARABONBA_PTR_TO_JSON(ping_port, pingPort_);
      DARABONBA_PTR_TO_JSON(ping_type, pingType_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(quic_enabled, quicEnabled_);
      DARABONBA_PTR_TO_JSON(quic_target, quicTarget_);
      DARABONBA_PTR_TO_JSON(request_content, requestContent_);
      DARABONBA_PTR_TO_JSON(request_format, requestFormat_);
      DARABONBA_PTR_TO_JSON(response_content, responseContent_);
      DARABONBA_PTR_TO_JSON(response_format, responseFormat_);
      DARABONBA_PTR_TO_JSON(retry_delay, retryDelay_);
      DARABONBA_PTR_TO_JSON(safe_link, safeLink_);
      DARABONBA_PTR_TO_JSON(screen_shot, screenShot_);
      DARABONBA_PTR_TO_JSON(scroll_end, scrollEnd_);
      DARABONBA_PTR_TO_JSON(steps, steps_);
      DARABONBA_PTR_TO_JSON(strict_mode, strictMode_);
      DARABONBA_PTR_TO_JSON(time_out, timeOut_);
      DARABONBA_PTR_TO_JSON(trace_region, traceRegion_);
      DARABONBA_PTR_TO_JSON(trace_type, traceType_);
      DARABONBA_PTR_TO_JSON(traffic_hijack_element_blacklist, trafficHijackElementBlacklist_);
      DARABONBA_PTR_TO_JSON(traffic_hijack_element_count, trafficHijackElementCount_);
      DARABONBA_PTR_TO_JSON(traffic_hijack_element_whitelist, trafficHijackElementWhitelist_);
      DARABONBA_PTR_TO_JSON(username, username_);
      DARABONBA_PTR_TO_JSON(waitTime_after_completion, waitTimeAfterCompletion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& obj) { 
      DARABONBA_PTR_FROM_JSON(assertions, assertions_);
      DARABONBA_PTR_FROM_JSON(attempts, attempts_);
      DARABONBA_PTR_FROM_JSON(auth_info, authInfo_);
      DARABONBA_PTR_FROM_JSON(blocked_url_list, blockedUrlList_);
      DARABONBA_PTR_FROM_JSON(browser_headers, browserHeaders_);
      DARABONBA_PTR_FROM_JSON(browser_hosts, browserHosts_);
      DARABONBA_PTR_FROM_JSON(browser_info, browserInfo_);
      DARABONBA_PTR_FROM_JSON(browser_insecure, browserInsecure_);
      DARABONBA_PTR_FROM_JSON(browser_task_version, browserTaskVersion_);
      DARABONBA_PTR_FROM_JSON(config_variables, configVariables_);
      DARABONBA_PTR_FROM_JSON(cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(diagnosis_mtr, diagnosisMtr_);
      DARABONBA_PTR_FROM_JSON(diagnosis_ping, diagnosisPing_);
      DARABONBA_PTR_FROM_JSON(dns_hijack_whitelist, dnsHijackWhitelist_);
      DARABONBA_PTR_FROM_JSON(dns_match_rule, dnsMatchRule_);
      DARABONBA_PTR_FROM_JSON(dns_server, dnsServer_);
      DARABONBA_PTR_FROM_JSON(dns_type, dnsType_);
      DARABONBA_PTR_FROM_JSON(empty_message, emptyMessage_);
      DARABONBA_PTR_FROM_JSON(enable_packet_capture, enablePacketCapture_);
      DARABONBA_PTR_FROM_JSON(expect_exist_string, expectExistString_);
      DARABONBA_PTR_FROM_JSON(expect_non_exist_string, expectNonExistString_);
      DARABONBA_PTR_FROM_JSON(expect_value, expectValue_);
      DARABONBA_PTR_FROM_JSON(failure_rate, failureRate_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(hops, hops_);
      DARABONBA_PTR_FROM_JSON(host_binding, hostBinding_);
      DARABONBA_PTR_FROM_JSON(host_binding_type, hostBindingType_);
      DARABONBA_PTR_FROM_JSON(http_method, httpMethod_);
      DARABONBA_PTR_FROM_JSON(icmp_timeout_millis, icmpTimeoutMillis_);
      DARABONBA_PTR_FROM_JSON(ip_network, ipNetwork_);
      DARABONBA_PTR_FROM_JSON(isBase64Encode, isBase64Encode_);
      DARABONBA_PTR_FROM_JSON(match_rule, matchRule_);
      DARABONBA_PTR_FROM_JSON(min_tls_version, minTlsVersion_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(ping_num, pingNum_);
      DARABONBA_PTR_FROM_JSON(ping_port, pingPort_);
      DARABONBA_PTR_FROM_JSON(ping_type, pingType_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(quic_enabled, quicEnabled_);
      DARABONBA_PTR_FROM_JSON(quic_target, quicTarget_);
      DARABONBA_PTR_FROM_JSON(request_content, requestContent_);
      DARABONBA_PTR_FROM_JSON(request_format, requestFormat_);
      DARABONBA_PTR_FROM_JSON(response_content, responseContent_);
      DARABONBA_PTR_FROM_JSON(response_format, responseFormat_);
      DARABONBA_PTR_FROM_JSON(retry_delay, retryDelay_);
      DARABONBA_PTR_FROM_JSON(safe_link, safeLink_);
      DARABONBA_PTR_FROM_JSON(screen_shot, screenShot_);
      DARABONBA_PTR_FROM_JSON(scroll_end, scrollEnd_);
      DARABONBA_PTR_FROM_JSON(steps, steps_);
      DARABONBA_PTR_FROM_JSON(strict_mode, strictMode_);
      DARABONBA_PTR_FROM_JSON(time_out, timeOut_);
      DARABONBA_PTR_FROM_JSON(trace_region, traceRegion_);
      DARABONBA_PTR_FROM_JSON(trace_type, traceType_);
      DARABONBA_PTR_FROM_JSON(traffic_hijack_element_blacklist, trafficHijackElementBlacklist_);
      DARABONBA_PTR_FROM_JSON(traffic_hijack_element_count, trafficHijackElementCount_);
      DARABONBA_PTR_FROM_JSON(traffic_hijack_element_whitelist, trafficHijackElementWhitelist_);
      DARABONBA_PTR_FROM_JSON(username, username_);
      DARABONBA_PTR_FROM_JSON(waitTime_after_completion, waitTimeAfterCompletion_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assertions_ == nullptr
        && return this->attempts_ == nullptr && return this->authInfo_ == nullptr && return this->blockedUrlList_ == nullptr && return this->browserHeaders_ == nullptr && return this->browserHosts_ == nullptr
        && return this->browserInfo_ == nullptr && return this->browserInsecure_ == nullptr && return this->browserTaskVersion_ == nullptr && return this->configVariables_ == nullptr && return this->cookie_ == nullptr
        && return this->diagnosisMtr_ == nullptr && return this->diagnosisPing_ == nullptr && return this->dnsHijackWhitelist_ == nullptr && return this->dnsMatchRule_ == nullptr && return this->dnsServer_ == nullptr
        && return this->dnsType_ == nullptr && return this->emptyMessage_ == nullptr && return this->enablePacketCapture_ == nullptr && return this->expectExistString_ == nullptr && return this->expectNonExistString_ == nullptr
        && return this->expectValue_ == nullptr && return this->failureRate_ == nullptr && return this->header_ == nullptr && return this->hops_ == nullptr && return this->hostBinding_ == nullptr
        && return this->hostBindingType_ == nullptr && return this->httpMethod_ == nullptr && return this->icmpTimeoutMillis_ == nullptr && return this->ipNetwork_ == nullptr && return this->isBase64Encode_ == nullptr
        && return this->matchRule_ == nullptr && return this->minTlsVersion_ == nullptr && return this->password_ == nullptr && return this->pingNum_ == nullptr && return this->pingPort_ == nullptr
        && return this->pingType_ == nullptr && return this->port_ == nullptr && return this->protocol_ == nullptr && return this->quicEnabled_ == nullptr && return this->quicTarget_ == nullptr
        && return this->requestContent_ == nullptr && return this->requestFormat_ == nullptr && return this->responseContent_ == nullptr && return this->responseFormat_ == nullptr && return this->retryDelay_ == nullptr
        && return this->safeLink_ == nullptr && return this->screenShot_ == nullptr && return this->scrollEnd_ == nullptr && return this->steps_ == nullptr && return this->strictMode_ == nullptr
        && return this->timeOut_ == nullptr && return this->traceRegion_ == nullptr && return this->traceType_ == nullptr && return this->trafficHijackElementBlacklist_ == nullptr && return this->trafficHijackElementCount_ == nullptr
        && return this->trafficHijackElementWhitelist_ == nullptr && return this->username_ == nullptr && return this->waitTimeAfterCompletion_ == nullptr; };
    // assertions Field Functions 
    bool hasAssertions() const { return this->assertions_ != nullptr;};
    void deleteAssertions() { this->assertions_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions & assertions() const { DARABONBA_PTR_GET_CONST(assertions_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions assertions() { DARABONBA_PTR_GET(assertions_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setAssertions(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions & assertions) { DARABONBA_PTR_SET_VALUE(assertions_, assertions) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setAssertions(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions && assertions) { DARABONBA_PTR_SET_RVALUE(assertions_, assertions) };


    // attempts Field Functions 
    bool hasAttempts() const { return this->attempts_ != nullptr;};
    void deleteAttempts() { this->attempts_ = nullptr;};
    inline int64_t attempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0L) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setAttempts(int64_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo & authInfo() const { DARABONBA_PTR_GET_CONST(authInfo_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo authInfo() { DARABONBA_PTR_GET(authInfo_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setAuthInfo(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo & authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setAuthInfo(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo && authInfo) { DARABONBA_PTR_SET_RVALUE(authInfo_, authInfo) };


    // blockedUrlList Field Functions 
    bool hasBlockedUrlList() const { return this->blockedUrlList_ != nullptr;};
    void deleteBlockedUrlList() { this->blockedUrlList_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList & blockedUrlList() const { DARABONBA_PTR_GET_CONST(blockedUrlList_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList blockedUrlList() { DARABONBA_PTR_GET(blockedUrlList_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBlockedUrlList(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList & blockedUrlList) { DARABONBA_PTR_SET_VALUE(blockedUrlList_, blockedUrlList) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBlockedUrlList(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList && blockedUrlList) { DARABONBA_PTR_SET_RVALUE(blockedUrlList_, blockedUrlList) };


    // browserHeaders Field Functions 
    bool hasBrowserHeaders() const { return this->browserHeaders_ != nullptr;};
    void deleteBrowserHeaders() { this->browserHeaders_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders & browserHeaders() const { DARABONBA_PTR_GET_CONST(browserHeaders_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders browserHeaders() { DARABONBA_PTR_GET(browserHeaders_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBrowserHeaders(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders & browserHeaders) { DARABONBA_PTR_SET_VALUE(browserHeaders_, browserHeaders) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBrowserHeaders(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders && browserHeaders) { DARABONBA_PTR_SET_RVALUE(browserHeaders_, browserHeaders) };


    // browserHosts Field Functions 
    bool hasBrowserHosts() const { return this->browserHosts_ != nullptr;};
    void deleteBrowserHosts() { this->browserHosts_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts & browserHosts() const { DARABONBA_PTR_GET_CONST(browserHosts_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts browserHosts() { DARABONBA_PTR_GET(browserHosts_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBrowserHosts(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts & browserHosts) { DARABONBA_PTR_SET_VALUE(browserHosts_, browserHosts) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBrowserHosts(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts && browserHosts) { DARABONBA_PTR_SET_RVALUE(browserHosts_, browserHosts) };


    // browserInfo Field Functions 
    bool hasBrowserInfo() const { return this->browserInfo_ != nullptr;};
    void deleteBrowserInfo() { this->browserInfo_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo & browserInfo() const { DARABONBA_PTR_GET_CONST(browserInfo_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo browserInfo() { DARABONBA_PTR_GET(browserInfo_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBrowserInfo(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo & browserInfo) { DARABONBA_PTR_SET_VALUE(browserInfo_, browserInfo) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBrowserInfo(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo && browserInfo) { DARABONBA_PTR_SET_RVALUE(browserInfo_, browserInfo) };


    // browserInsecure Field Functions 
    bool hasBrowserInsecure() const { return this->browserInsecure_ != nullptr;};
    void deleteBrowserInsecure() { this->browserInsecure_ = nullptr;};
    inline bool browserInsecure() const { DARABONBA_PTR_GET_DEFAULT(browserInsecure_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBrowserInsecure(bool browserInsecure) { DARABONBA_PTR_SET_VALUE(browserInsecure_, browserInsecure) };


    // browserTaskVersion Field Functions 
    bool hasBrowserTaskVersion() const { return this->browserTaskVersion_ != nullptr;};
    void deleteBrowserTaskVersion() { this->browserTaskVersion_ = nullptr;};
    inline string browserTaskVersion() const { DARABONBA_PTR_GET_DEFAULT(browserTaskVersion_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setBrowserTaskVersion(string browserTaskVersion) { DARABONBA_PTR_SET_VALUE(browserTaskVersion_, browserTaskVersion) };


    // configVariables Field Functions 
    bool hasConfigVariables() const { return this->configVariables_ != nullptr;};
    void deleteConfigVariables() { this->configVariables_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables & configVariables() const { DARABONBA_PTR_GET_CONST(configVariables_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables configVariables() { DARABONBA_PTR_GET(configVariables_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setConfigVariables(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables & configVariables) { DARABONBA_PTR_SET_VALUE(configVariables_, configVariables) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setConfigVariables(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables && configVariables) { DARABONBA_PTR_SET_RVALUE(configVariables_, configVariables) };


    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // diagnosisMtr Field Functions 
    bool hasDiagnosisMtr() const { return this->diagnosisMtr_ != nullptr;};
    void deleteDiagnosisMtr() { this->diagnosisMtr_ = nullptr;};
    inline bool diagnosisMtr() const { DARABONBA_PTR_GET_DEFAULT(diagnosisMtr_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setDiagnosisMtr(bool diagnosisMtr) { DARABONBA_PTR_SET_VALUE(diagnosisMtr_, diagnosisMtr) };


    // diagnosisPing Field Functions 
    bool hasDiagnosisPing() const { return this->diagnosisPing_ != nullptr;};
    void deleteDiagnosisPing() { this->diagnosisPing_ = nullptr;};
    inline bool diagnosisPing() const { DARABONBA_PTR_GET_DEFAULT(diagnosisPing_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setDiagnosisPing(bool diagnosisPing) { DARABONBA_PTR_SET_VALUE(diagnosisPing_, diagnosisPing) };


    // dnsHijackWhitelist Field Functions 
    bool hasDnsHijackWhitelist() const { return this->dnsHijackWhitelist_ != nullptr;};
    void deleteDnsHijackWhitelist() { this->dnsHijackWhitelist_ = nullptr;};
    inline string dnsHijackWhitelist() const { DARABONBA_PTR_GET_DEFAULT(dnsHijackWhitelist_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setDnsHijackWhitelist(string dnsHijackWhitelist) { DARABONBA_PTR_SET_VALUE(dnsHijackWhitelist_, dnsHijackWhitelist) };


    // dnsMatchRule Field Functions 
    bool hasDnsMatchRule() const { return this->dnsMatchRule_ != nullptr;};
    void deleteDnsMatchRule() { this->dnsMatchRule_ = nullptr;};
    inline string dnsMatchRule() const { DARABONBA_PTR_GET_DEFAULT(dnsMatchRule_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setDnsMatchRule(string dnsMatchRule) { DARABONBA_PTR_SET_VALUE(dnsMatchRule_, dnsMatchRule) };


    // dnsServer Field Functions 
    bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
    void deleteDnsServer() { this->dnsServer_ = nullptr;};
    inline string dnsServer() const { DARABONBA_PTR_GET_DEFAULT(dnsServer_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setDnsServer(string dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };


    // dnsType Field Functions 
    bool hasDnsType() const { return this->dnsType_ != nullptr;};
    void deleteDnsType() { this->dnsType_ = nullptr;};
    inline string dnsType() const { DARABONBA_PTR_GET_DEFAULT(dnsType_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setDnsType(string dnsType) { DARABONBA_PTR_SET_VALUE(dnsType_, dnsType) };


    // emptyMessage Field Functions 
    bool hasEmptyMessage() const { return this->emptyMessage_ != nullptr;};
    void deleteEmptyMessage() { this->emptyMessage_ = nullptr;};
    inline bool emptyMessage() const { DARABONBA_PTR_GET_DEFAULT(emptyMessage_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setEmptyMessage(bool emptyMessage) { DARABONBA_PTR_SET_VALUE(emptyMessage_, emptyMessage) };


    // enablePacketCapture Field Functions 
    bool hasEnablePacketCapture() const { return this->enablePacketCapture_ != nullptr;};
    void deleteEnablePacketCapture() { this->enablePacketCapture_ = nullptr;};
    inline bool enablePacketCapture() const { DARABONBA_PTR_GET_DEFAULT(enablePacketCapture_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setEnablePacketCapture(bool enablePacketCapture) { DARABONBA_PTR_SET_VALUE(enablePacketCapture_, enablePacketCapture) };


    // expectExistString Field Functions 
    bool hasExpectExistString() const { return this->expectExistString_ != nullptr;};
    void deleteExpectExistString() { this->expectExistString_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString & expectExistString() const { DARABONBA_PTR_GET_CONST(expectExistString_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString expectExistString() { DARABONBA_PTR_GET(expectExistString_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setExpectExistString(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString & expectExistString) { DARABONBA_PTR_SET_VALUE(expectExistString_, expectExistString) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setExpectExistString(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString && expectExistString) { DARABONBA_PTR_SET_RVALUE(expectExistString_, expectExistString) };


    // expectNonExistString Field Functions 
    bool hasExpectNonExistString() const { return this->expectNonExistString_ != nullptr;};
    void deleteExpectNonExistString() { this->expectNonExistString_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString & expectNonExistString() const { DARABONBA_PTR_GET_CONST(expectNonExistString_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString expectNonExistString() { DARABONBA_PTR_GET(expectNonExistString_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setExpectNonExistString(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString & expectNonExistString) { DARABONBA_PTR_SET_VALUE(expectNonExistString_, expectNonExistString) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setExpectNonExistString(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString && expectNonExistString) { DARABONBA_PTR_SET_RVALUE(expectNonExistString_, expectNonExistString) };


    // expectValue Field Functions 
    bool hasExpectValue() const { return this->expectValue_ != nullptr;};
    void deleteExpectValue() { this->expectValue_ = nullptr;};
    inline string expectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setExpectValue(string expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


    // failureRate Field Functions 
    bool hasFailureRate() const { return this->failureRate_ != nullptr;};
    void deleteFailureRate() { this->failureRate_ = nullptr;};
    inline float failureRate() const { DARABONBA_PTR_GET_DEFAULT(failureRate_, 0.0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setFailureRate(float failureRate) { DARABONBA_PTR_SET_VALUE(failureRate_, failureRate) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline string header() const { DARABONBA_PTR_GET_DEFAULT(header_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setHeader(string header) { DARABONBA_PTR_SET_VALUE(header_, header) };


    // hops Field Functions 
    bool hasHops() const { return this->hops_ != nullptr;};
    void deleteHops() { this->hops_ = nullptr;};
    inline int32_t hops() const { DARABONBA_PTR_GET_DEFAULT(hops_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setHops(int32_t hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };


    // hostBinding Field Functions 
    bool hasHostBinding() const { return this->hostBinding_ != nullptr;};
    void deleteHostBinding() { this->hostBinding_ = nullptr;};
    inline string hostBinding() const { DARABONBA_PTR_GET_DEFAULT(hostBinding_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setHostBinding(string hostBinding) { DARABONBA_PTR_SET_VALUE(hostBinding_, hostBinding) };


    // hostBindingType Field Functions 
    bool hasHostBindingType() const { return this->hostBindingType_ != nullptr;};
    void deleteHostBindingType() { this->hostBindingType_ = nullptr;};
    inline int32_t hostBindingType() const { DARABONBA_PTR_GET_DEFAULT(hostBindingType_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setHostBindingType(int32_t hostBindingType) { DARABONBA_PTR_SET_VALUE(hostBindingType_, hostBindingType) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // icmpTimeoutMillis Field Functions 
    bool hasIcmpTimeoutMillis() const { return this->icmpTimeoutMillis_ != nullptr;};
    void deleteIcmpTimeoutMillis() { this->icmpTimeoutMillis_ = nullptr;};
    inline int32_t icmpTimeoutMillis() const { DARABONBA_PTR_GET_DEFAULT(icmpTimeoutMillis_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setIcmpTimeoutMillis(int32_t icmpTimeoutMillis) { DARABONBA_PTR_SET_VALUE(icmpTimeoutMillis_, icmpTimeoutMillis) };


    // ipNetwork Field Functions 
    bool hasIpNetwork() const { return this->ipNetwork_ != nullptr;};
    void deleteIpNetwork() { this->ipNetwork_ = nullptr;};
    inline string ipNetwork() const { DARABONBA_PTR_GET_DEFAULT(ipNetwork_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setIpNetwork(string ipNetwork) { DARABONBA_PTR_SET_VALUE(ipNetwork_, ipNetwork) };


    // isBase64Encode Field Functions 
    bool hasIsBase64Encode() const { return this->isBase64Encode_ != nullptr;};
    void deleteIsBase64Encode() { this->isBase64Encode_ = nullptr;};
    inline string isBase64Encode() const { DARABONBA_PTR_GET_DEFAULT(isBase64Encode_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setIsBase64Encode(string isBase64Encode) { DARABONBA_PTR_SET_VALUE(isBase64Encode_, isBase64Encode) };


    // matchRule Field Functions 
    bool hasMatchRule() const { return this->matchRule_ != nullptr;};
    void deleteMatchRule() { this->matchRule_ = nullptr;};
    inline int32_t matchRule() const { DARABONBA_PTR_GET_DEFAULT(matchRule_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setMatchRule(int32_t matchRule) { DARABONBA_PTR_SET_VALUE(matchRule_, matchRule) };


    // minTlsVersion Field Functions 
    bool hasMinTlsVersion() const { return this->minTlsVersion_ != nullptr;};
    void deleteMinTlsVersion() { this->minTlsVersion_ = nullptr;};
    inline string minTlsVersion() const { DARABONBA_PTR_GET_DEFAULT(minTlsVersion_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setMinTlsVersion(string minTlsVersion) { DARABONBA_PTR_SET_VALUE(minTlsVersion_, minTlsVersion) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // pingNum Field Functions 
    bool hasPingNum() const { return this->pingNum_ != nullptr;};
    void deletePingNum() { this->pingNum_ = nullptr;};
    inline int32_t pingNum() const { DARABONBA_PTR_GET_DEFAULT(pingNum_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setPingNum(int32_t pingNum) { DARABONBA_PTR_SET_VALUE(pingNum_, pingNum) };


    // pingPort Field Functions 
    bool hasPingPort() const { return this->pingPort_ != nullptr;};
    void deletePingPort() { this->pingPort_ = nullptr;};
    inline int32_t pingPort() const { DARABONBA_PTR_GET_DEFAULT(pingPort_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setPingPort(int32_t pingPort) { DARABONBA_PTR_SET_VALUE(pingPort_, pingPort) };


    // pingType Field Functions 
    bool hasPingType() const { return this->pingType_ != nullptr;};
    void deletePingType() { this->pingType_ = nullptr;};
    inline string pingType() const { DARABONBA_PTR_GET_DEFAULT(pingType_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setPingType(string pingType) { DARABONBA_PTR_SET_VALUE(pingType_, pingType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // quicEnabled Field Functions 
    bool hasQuicEnabled() const { return this->quicEnabled_ != nullptr;};
    void deleteQuicEnabled() { this->quicEnabled_ = nullptr;};
    inline bool quicEnabled() const { DARABONBA_PTR_GET_DEFAULT(quicEnabled_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setQuicEnabled(bool quicEnabled) { DARABONBA_PTR_SET_VALUE(quicEnabled_, quicEnabled) };


    // quicTarget Field Functions 
    bool hasQuicTarget() const { return this->quicTarget_ != nullptr;};
    void deleteQuicTarget() { this->quicTarget_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget & quicTarget() const { DARABONBA_PTR_GET_CONST(quicTarget_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget quicTarget() { DARABONBA_PTR_GET(quicTarget_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setQuicTarget(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget & quicTarget) { DARABONBA_PTR_SET_VALUE(quicTarget_, quicTarget) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setQuicTarget(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget && quicTarget) { DARABONBA_PTR_SET_RVALUE(quicTarget_, quicTarget) };


    // requestContent Field Functions 
    bool hasRequestContent() const { return this->requestContent_ != nullptr;};
    void deleteRequestContent() { this->requestContent_ = nullptr;};
    inline string requestContent() const { DARABONBA_PTR_GET_DEFAULT(requestContent_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setRequestContent(string requestContent) { DARABONBA_PTR_SET_VALUE(requestContent_, requestContent) };


    // requestFormat Field Functions 
    bool hasRequestFormat() const { return this->requestFormat_ != nullptr;};
    void deleteRequestFormat() { this->requestFormat_ = nullptr;};
    inline string requestFormat() const { DARABONBA_PTR_GET_DEFAULT(requestFormat_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setRequestFormat(string requestFormat) { DARABONBA_PTR_SET_VALUE(requestFormat_, requestFormat) };


    // responseContent Field Functions 
    bool hasResponseContent() const { return this->responseContent_ != nullptr;};
    void deleteResponseContent() { this->responseContent_ = nullptr;};
    inline string responseContent() const { DARABONBA_PTR_GET_DEFAULT(responseContent_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setResponseContent(string responseContent) { DARABONBA_PTR_SET_VALUE(responseContent_, responseContent) };


    // responseFormat Field Functions 
    bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
    void deleteResponseFormat() { this->responseFormat_ = nullptr;};
    inline string responseFormat() const { DARABONBA_PTR_GET_DEFAULT(responseFormat_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setResponseFormat(string responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };


    // retryDelay Field Functions 
    bool hasRetryDelay() const { return this->retryDelay_ != nullptr;};
    void deleteRetryDelay() { this->retryDelay_ = nullptr;};
    inline int32_t retryDelay() const { DARABONBA_PTR_GET_DEFAULT(retryDelay_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setRetryDelay(int32_t retryDelay) { DARABONBA_PTR_SET_VALUE(retryDelay_, retryDelay) };


    // safeLink Field Functions 
    bool hasSafeLink() const { return this->safeLink_ != nullptr;};
    void deleteSafeLink() { this->safeLink_ = nullptr;};
    inline int32_t safeLink() const { DARABONBA_PTR_GET_DEFAULT(safeLink_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setSafeLink(int32_t safeLink) { DARABONBA_PTR_SET_VALUE(safeLink_, safeLink) };


    // screenShot Field Functions 
    bool hasScreenShot() const { return this->screenShot_ != nullptr;};
    void deleteScreenShot() { this->screenShot_ = nullptr;};
    inline bool screenShot() const { DARABONBA_PTR_GET_DEFAULT(screenShot_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setScreenShot(bool screenShot) { DARABONBA_PTR_SET_VALUE(screenShot_, screenShot) };


    // scrollEnd Field Functions 
    bool hasScrollEnd() const { return this->scrollEnd_ != nullptr;};
    void deleteScrollEnd() { this->scrollEnd_ = nullptr;};
    inline bool scrollEnd() const { DARABONBA_PTR_GET_DEFAULT(scrollEnd_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setScrollEnd(bool scrollEnd) { DARABONBA_PTR_SET_VALUE(scrollEnd_, scrollEnd) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps & steps() const { DARABONBA_PTR_GET_CONST(steps_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps steps() { DARABONBA_PTR_GET(steps_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setSteps(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setSteps(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline bool strictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setStrictMode(bool strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


    // timeOut Field Functions 
    bool hasTimeOut() const { return this->timeOut_ != nullptr;};
    void deleteTimeOut() { this->timeOut_ = nullptr;};
    inline int64_t timeOut() const { DARABONBA_PTR_GET_DEFAULT(timeOut_, 0L) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setTimeOut(int64_t timeOut) { DARABONBA_PTR_SET_VALUE(timeOut_, timeOut) };


    // traceRegion Field Functions 
    bool hasTraceRegion() const { return this->traceRegion_ != nullptr;};
    void deleteTraceRegion() { this->traceRegion_ = nullptr;};
    inline string traceRegion() const { DARABONBA_PTR_GET_DEFAULT(traceRegion_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setTraceRegion(string traceRegion) { DARABONBA_PTR_SET_VALUE(traceRegion_, traceRegion) };


    // traceType Field Functions 
    bool hasTraceType() const { return this->traceType_ != nullptr;};
    void deleteTraceType() { this->traceType_ = nullptr;};
    inline string traceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


    // trafficHijackElementBlacklist Field Functions 
    bool hasTrafficHijackElementBlacklist() const { return this->trafficHijackElementBlacklist_ != nullptr;};
    void deleteTrafficHijackElementBlacklist() { this->trafficHijackElementBlacklist_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist & trafficHijackElementBlacklist() const { DARABONBA_PTR_GET_CONST(trafficHijackElementBlacklist_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist trafficHijackElementBlacklist() { DARABONBA_PTR_GET(trafficHijackElementBlacklist_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setTrafficHijackElementBlacklist(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist & trafficHijackElementBlacklist) { DARABONBA_PTR_SET_VALUE(trafficHijackElementBlacklist_, trafficHijackElementBlacklist) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setTrafficHijackElementBlacklist(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist && trafficHijackElementBlacklist) { DARABONBA_PTR_SET_RVALUE(trafficHijackElementBlacklist_, trafficHijackElementBlacklist) };


    // trafficHijackElementCount Field Functions 
    bool hasTrafficHijackElementCount() const { return this->trafficHijackElementCount_ != nullptr;};
    void deleteTrafficHijackElementCount() { this->trafficHijackElementCount_ = nullptr;};
    inline int32_t trafficHijackElementCount() const { DARABONBA_PTR_GET_DEFAULT(trafficHijackElementCount_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setTrafficHijackElementCount(int32_t trafficHijackElementCount) { DARABONBA_PTR_SET_VALUE(trafficHijackElementCount_, trafficHijackElementCount) };


    // trafficHijackElementWhitelist Field Functions 
    bool hasTrafficHijackElementWhitelist() const { return this->trafficHijackElementWhitelist_ != nullptr;};
    void deleteTrafficHijackElementWhitelist() { this->trafficHijackElementWhitelist_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist & trafficHijackElementWhitelist() const { DARABONBA_PTR_GET_CONST(trafficHijackElementWhitelist_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist trafficHijackElementWhitelist() { DARABONBA_PTR_GET(trafficHijackElementWhitelist_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setTrafficHijackElementWhitelist(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist & trafficHijackElementWhitelist) { DARABONBA_PTR_SET_VALUE(trafficHijackElementWhitelist_, trafficHijackElementWhitelist) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setTrafficHijackElementWhitelist(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist && trafficHijackElementWhitelist) { DARABONBA_PTR_SET_RVALUE(trafficHijackElementWhitelist_, trafficHijackElementWhitelist) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // waitTimeAfterCompletion Field Functions 
    bool hasWaitTimeAfterCompletion() const { return this->waitTimeAfterCompletion_ != nullptr;};
    void deleteWaitTimeAfterCompletion() { this->waitTimeAfterCompletion_ = nullptr;};
    inline int32_t waitTimeAfterCompletion() const { DARABONBA_PTR_GET_DEFAULT(waitTimeAfterCompletion_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson& setWaitTimeAfterCompletion(int32_t waitTimeAfterCompletion) { DARABONBA_PTR_SET_VALUE(waitTimeAfterCompletion_, waitTimeAfterCompletion) };


  protected:
    // The assertions.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions> assertions_ = nullptr;
    // The number of retries after a DNS failure occurred.
    std::shared_ptr<int64_t> attempts_ = nullptr;
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAuthInfo> authInfo_ = nullptr;
    // The blocked URLs. Wildcards are supported in paths.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList> blockedUrlList_ = nullptr;
    // The custom headers. Format: {"key": "somekey", "value":"somevalue"}.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders> browserHeaders_ = nullptr;
    // The custom hosts. Format: {"key": "somekey", "value":"somevalue"}.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts> browserHosts_ = nullptr;
    // The browser information.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo> browserInfo_ = nullptr;
    // Indicates whether certificate errors are ignored. Valid values:
    // - false: Certificate errors are not ignored.
    // - true: Certificate errors are ignored.
    std::shared_ptr<bool> browserInsecure_ = nullptr;
    // The version of the browser test task. Valid values:
    // - 1: browser test for a single page
    // - 2: browser test for multiple pages
    std::shared_ptr<string> browserTaskVersion_ = nullptr;
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables> configVariables_ = nullptr;
    // The cookie of the HTTP request.
    std::shared_ptr<string> cookie_ = nullptr;
    // Indicates whether the automatic MTR diagnostics feature is enabled for a failed task. Valid values:
    // - false: The automatic MTR diagnostics feature is disabled for a failed task.
    // - true: The automatic MTR diagnostics feature is enabled for a failed task.
    std::shared_ptr<bool> diagnosisMtr_ = nullptr;
    // Indicates whether the automatic ping latency detection feature is enabled for a failed task. Valid values:
    // - false: The automatic ping latency detection feature is disabled for a failed task.
    // - true: The automatic ping latency detection feature is enabled for a failed task.
    std::shared_ptr<bool> diagnosisPing_ = nullptr;
    // The DNS hijack whitelist.
    std::shared_ptr<string> dnsHijackWhitelist_ = nullptr;
    // The relationship between the list of expected aliases or IP addresses and the list of DNS results. Valid values:
    // 
    // *   IN_DNS: The list of expected values is a subset of the list of DNS results.
    // *   DNS_IN: The list of DNS results is a subset of the list of expected values.
    // *   EQUAL: The list of DNS results is the same as the list of expected values.
    // *   ANY: The list of DNS results intersects with the list of expected values.
    std::shared_ptr<string> dnsMatchRule_ = nullptr;
    // The IP address of the DNS server.
    // 
    // >  This parameter is returned only if the TaskType parameter is set to DNS.
    std::shared_ptr<string> dnsServer_ = nullptr;
    // The type of the DNS record. This parameter is returned only if the TaskType parameter is set to DNS. Valid values:
    // 
    // *   A (default): a record that specifies an IP address related to the specified host name or domain name.
    // *   CNAME: a record that maps multiple domain names to a domain name.
    // *   NS: a record that specifies a DNS server used to parse domain names.
    // *   MX: a record that links domain names to the address of a mail server.
    // *   TXT: a record that stores the text information of host name or domain names. The text must be 1 to 512 bytes in length. The TXT record serves as a Sender Policy Framework (SPF) record to fight against spam.
    std::shared_ptr<string> dnsType_ = nullptr;
    // Indicates whether the WebSocket task is allowed to return no response or return an empty response. Default value: false. Valid values: false and true.
    std::shared_ptr<bool> emptyMessage_ = nullptr;
    std::shared_ptr<bool> enablePacketCapture_ = nullptr;
    // The string that is expected to exist on the page.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString> expectExistString_ = nullptr;
    // The string that is not expected to exist on the page.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString> expectNonExistString_ = nullptr;
    // The domain name or alias to be parsed.
    // 
    // >  This parameter is returned only if the TaskType parameter is set to DNS.
    std::shared_ptr<string> expectValue_ = nullptr;
    // The packet loss rate.
    // 
    // >  This parameter is returned only if the TaskType parameter is set to PING.
    std::shared_ptr<float> failureRate_ = nullptr;
    // The header of the HTTP request.
    std::shared_ptr<string> header_ = nullptr;
    // The number of hops to perform traceroute diagnostics if the PING task fails.
    std::shared_ptr<int32_t> hops_ = nullptr;
    // The custom hosts for the HTTP test task. Format: ip1,ip2:address. You can specify values in multiple lines. Specify the A record or CNAME record that can be resolved by the domain name at the left of the colon. Separate multiple records with commas (,). Specify the domain name at the right of the colon.
    std::shared_ptr<string> hostBinding_ = nullptr;
    // The host binding type. Valid values: 0 and 1. 0 indicates random. 1 indicates polling.
    std::shared_ptr<int32_t> hostBindingType_ = nullptr;
    // The HTTP request method. Valid values:
    // 
    // *   get
    // *   post
    // *   head
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The timeout period of a PING task that uses ICMP. Unit: milliseconds.
    std::shared_ptr<int32_t> icmpTimeoutMillis_ = nullptr;
    // ip_network indicates the network type of the task. Valid values: v4, v6, and auto. Default value: v4.
    std::shared_ptr<string> ipNetwork_ = nullptr;
    // Indicates whether to perform Base64 decoding and then store the password. Valid values: true and false.
    std::shared_ptr<string> isBase64Encode_ = nullptr;
    // Indicates whether the alert rule is included. Valid values:
    // 
    // *   0: The alert rule is included.
    // *   1: The alert rule is excluded.
    std::shared_ptr<int32_t> matchRule_ = nullptr;
    // The minimum TLS version. By default, TLS 1.2 and later versions are supported. TLS 1.0 and 1.1 are disabled. If you still require TLS 1.0 or 1.1, you can change the configuration.
    std::shared_ptr<string> minTlsVersion_ = nullptr;
    // The password of the SMTP, POP3, or FTP protocol.
    std::shared_ptr<string> password_ = nullptr;
    // The heartbeat of the PING protocol.
    std::shared_ptr<int32_t> pingNum_ = nullptr;
    // The port number for TCP pings.
    std::shared_ptr<int32_t> pingPort_ = nullptr;
    // The PING protocol type. Valid values:
    // 
    // *   icmp
    // *   tcp
    // *   udp
    std::shared_ptr<string> pingType_ = nullptr;
    // The port number of the TCP, UDP, SMTP, or POP3 protocol.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol that is used to send the request.
    std::shared_ptr<string> protocol_ = nullptr;
    // Indicates whether the Quick UDP Internet Connections (QUIC) protocol is used for browser detection. Valid values: true false Default value: false.
    std::shared_ptr<bool> quicEnabled_ = nullptr;
    // The sites for which the QUIC protocol is forcibly used.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonQuicTarget> quicTarget_ = nullptr;
    // The content of the HTTP request.
    std::shared_ptr<string> requestContent_ = nullptr;
    // The format of the HTTP request. Valid values:
    // 
    // *   hex: hexadecimal
    // *   txt: text
    std::shared_ptr<string> requestFormat_ = nullptr;
    // The response to the HTTP request.
    std::shared_ptr<string> responseContent_ = nullptr;
    // The format of the HTTP response. Valid values:
    // 
    // *   hex: hexadecimal
    // *   txt: text
    std::shared_ptr<string> responseFormat_ = nullptr;
    // The number of retries for failed detections.
    std::shared_ptr<int32_t> retryDelay_ = nullptr;
    std::shared_ptr<int32_t> safeLink_ = nullptr;
    // Indicates whether page screenshot is enabled.
    std::shared_ptr<bool> screenShot_ = nullptr;
    // Indicates whether to scroll to the bottom of the page after opening the page. This parameter is valid for a browser test task.
    std::shared_ptr<bool> scrollEnd_ = nullptr;
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps> steps_ = nullptr;
    // Indicates whether to allow the loading failures of some page elements. Valid values: false and true.
    std::shared_ptr<bool> strictMode_ = nullptr;
    // The timeout period. Unit: milliseconds.
    std::shared_ptr<int64_t> timeOut_ = nullptr;
    std::shared_ptr<string> traceRegion_ = nullptr;
    std::shared_ptr<string> traceType_ = nullptr;
    // The traffic hijacking blacklist. When redirection occurs, if the URL of the resource loaded by the browser matches the expression in the blacklist, traffic hijacking is considered to have occurred.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist> trafficHijackElementBlacklist_ = nullptr;
    // When redirection occurs, if the browser loads more than the specified number of resources, traffic hijacking is considered to have occurred. If you set the value to 0, no validation is performed. Default value: 0.
    std::shared_ptr<int32_t> trafficHijackElementCount_ = nullptr;
    // The traffic hijacking whitelist. When redirection occurs, if the URL of the resource loaded by the browser does not match any expression in the whitelist, traffic hijacking is considered to have occurred.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist> trafficHijackElementWhitelist_ = nullptr;
    // The username of the FTP, SMTP, or POP3 protocol.
    std::shared_ptr<string> username_ = nullptr;
    // The additional waiting time after a page is opened in a browser test task.
    std::shared_ptr<int32_t> waitTimeAfterCompletion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
