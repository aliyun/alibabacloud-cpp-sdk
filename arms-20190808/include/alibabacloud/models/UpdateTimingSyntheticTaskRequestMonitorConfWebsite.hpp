// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFWEBSITE_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFWEBSITE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskRequestMonitorConfWebsite : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskRequestMonitorConfWebsite& obj) { 
      DARABONBA_PTR_TO_JSON(AutomaticScrolling, automaticScrolling_);
      DARABONBA_PTR_TO_JSON(CustomHeader, customHeader_);
      DARABONBA_PTR_TO_JSON(CustomHeaderContent, customHeaderContent_);
      DARABONBA_PTR_TO_JSON(DNSHijackWhitelist, DNSHijackWhitelist_);
      DARABONBA_PTR_TO_JSON(DisableCache, disableCache_);
      DARABONBA_PTR_TO_JSON(DisableCompression, disableCompression_);
      DARABONBA_PTR_TO_JSON(ElementBlacklist, elementBlacklist_);
      DARABONBA_PTR_TO_JSON(FilterInvalidIP, filterInvalidIP_);
      DARABONBA_PTR_TO_JSON(FlowHijackJumpTimes, flowHijackJumpTimes_);
      DARABONBA_PTR_TO_JSON(FlowHijackLogo, flowHijackLogo_);
      DARABONBA_PTR_TO_JSON(IgnoreCertificateError, ignoreCertificateError_);
      DARABONBA_PTR_TO_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_TO_JSON(PageTamper, pageTamper_);
      DARABONBA_PTR_TO_JSON(Redirection, redirection_);
      DARABONBA_PTR_TO_JSON(SlowElementThreshold, slowElementThreshold_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
      DARABONBA_PTR_TO_JSON(VerifyStringWhitelist, verifyStringWhitelist_);
      DARABONBA_PTR_TO_JSON(WaitCompletionTime, waitCompletionTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskRequestMonitorConfWebsite& obj) { 
      DARABONBA_PTR_FROM_JSON(AutomaticScrolling, automaticScrolling_);
      DARABONBA_PTR_FROM_JSON(CustomHeader, customHeader_);
      DARABONBA_PTR_FROM_JSON(CustomHeaderContent, customHeaderContent_);
      DARABONBA_PTR_FROM_JSON(DNSHijackWhitelist, DNSHijackWhitelist_);
      DARABONBA_PTR_FROM_JSON(DisableCache, disableCache_);
      DARABONBA_PTR_FROM_JSON(DisableCompression, disableCompression_);
      DARABONBA_PTR_FROM_JSON(ElementBlacklist, elementBlacklist_);
      DARABONBA_PTR_FROM_JSON(FilterInvalidIP, filterInvalidIP_);
      DARABONBA_PTR_FROM_JSON(FlowHijackJumpTimes, flowHijackJumpTimes_);
      DARABONBA_PTR_FROM_JSON(FlowHijackLogo, flowHijackLogo_);
      DARABONBA_PTR_FROM_JSON(IgnoreCertificateError, ignoreCertificateError_);
      DARABONBA_PTR_FROM_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_FROM_JSON(PageTamper, pageTamper_);
      DARABONBA_PTR_FROM_JSON(Redirection, redirection_);
      DARABONBA_PTR_FROM_JSON(SlowElementThreshold, slowElementThreshold_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
      DARABONBA_PTR_FROM_JSON(VerifyStringWhitelist, verifyStringWhitelist_);
      DARABONBA_PTR_FROM_JSON(WaitCompletionTime, waitCompletionTime_);
    };
    UpdateTimingSyntheticTaskRequestMonitorConfWebsite() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfWebsite(const UpdateTimingSyntheticTaskRequestMonitorConfWebsite &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfWebsite(UpdateTimingSyntheticTaskRequestMonitorConfWebsite &&) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfWebsite(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskRequestMonitorConfWebsite() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfWebsite& operator=(const UpdateTimingSyntheticTaskRequestMonitorConfWebsite &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfWebsite& operator=(UpdateTimingSyntheticTaskRequestMonitorConfWebsite &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->automaticScrolling_ != nullptr
        && this->customHeader_ != nullptr && this->customHeaderContent_ != nullptr && this->DNSHijackWhitelist_ != nullptr && this->disableCache_ != nullptr && this->disableCompression_ != nullptr
        && this->elementBlacklist_ != nullptr && this->filterInvalidIP_ != nullptr && this->flowHijackJumpTimes_ != nullptr && this->flowHijackLogo_ != nullptr && this->ignoreCertificateError_ != nullptr
        && this->monitorTimeout_ != nullptr && this->pageTamper_ != nullptr && this->redirection_ != nullptr && this->slowElementThreshold_ != nullptr && this->targetUrl_ != nullptr
        && this->verifyStringBlacklist_ != nullptr && this->verifyStringWhitelist_ != nullptr && this->waitCompletionTime_ != nullptr; };
    // automaticScrolling Field Functions 
    bool hasAutomaticScrolling() const { return this->automaticScrolling_ != nullptr;};
    void deleteAutomaticScrolling() { this->automaticScrolling_ = nullptr;};
    inline int32_t automaticScrolling() const { DARABONBA_PTR_GET_DEFAULT(automaticScrolling_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setAutomaticScrolling(int32_t automaticScrolling) { DARABONBA_PTR_SET_VALUE(automaticScrolling_, automaticScrolling) };


    // customHeader Field Functions 
    bool hasCustomHeader() const { return this->customHeader_ != nullptr;};
    void deleteCustomHeader() { this->customHeader_ = nullptr;};
    inline int32_t customHeader() const { DARABONBA_PTR_GET_DEFAULT(customHeader_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setCustomHeader(int32_t customHeader) { DARABONBA_PTR_SET_VALUE(customHeader_, customHeader) };


    // customHeaderContent Field Functions 
    bool hasCustomHeaderContent() const { return this->customHeaderContent_ != nullptr;};
    void deleteCustomHeaderContent() { this->customHeaderContent_ = nullptr;};
    inline const map<string, string> & customHeaderContent() const { DARABONBA_PTR_GET_CONST(customHeaderContent_, map<string, string>) };
    inline map<string, string> customHeaderContent() { DARABONBA_PTR_GET(customHeaderContent_, map<string, string>) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setCustomHeaderContent(const map<string, string> & customHeaderContent) { DARABONBA_PTR_SET_VALUE(customHeaderContent_, customHeaderContent) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setCustomHeaderContent(map<string, string> && customHeaderContent) { DARABONBA_PTR_SET_RVALUE(customHeaderContent_, customHeaderContent) };


    // DNSHijackWhitelist Field Functions 
    bool hasDNSHijackWhitelist() const { return this->DNSHijackWhitelist_ != nullptr;};
    void deleteDNSHijackWhitelist() { this->DNSHijackWhitelist_ = nullptr;};
    inline string DNSHijackWhitelist() const { DARABONBA_PTR_GET_DEFAULT(DNSHijackWhitelist_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setDNSHijackWhitelist(string DNSHijackWhitelist) { DARABONBA_PTR_SET_VALUE(DNSHijackWhitelist_, DNSHijackWhitelist) };


    // disableCache Field Functions 
    bool hasDisableCache() const { return this->disableCache_ != nullptr;};
    void deleteDisableCache() { this->disableCache_ = nullptr;};
    inline int32_t disableCache() const { DARABONBA_PTR_GET_DEFAULT(disableCache_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setDisableCache(int32_t disableCache) { DARABONBA_PTR_SET_VALUE(disableCache_, disableCache) };


    // disableCompression Field Functions 
    bool hasDisableCompression() const { return this->disableCompression_ != nullptr;};
    void deleteDisableCompression() { this->disableCompression_ = nullptr;};
    inline int32_t disableCompression() const { DARABONBA_PTR_GET_DEFAULT(disableCompression_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setDisableCompression(int32_t disableCompression) { DARABONBA_PTR_SET_VALUE(disableCompression_, disableCompression) };


    // elementBlacklist Field Functions 
    bool hasElementBlacklist() const { return this->elementBlacklist_ != nullptr;};
    void deleteElementBlacklist() { this->elementBlacklist_ = nullptr;};
    inline string elementBlacklist() const { DARABONBA_PTR_GET_DEFAULT(elementBlacklist_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setElementBlacklist(string elementBlacklist) { DARABONBA_PTR_SET_VALUE(elementBlacklist_, elementBlacklist) };


    // filterInvalidIP Field Functions 
    bool hasFilterInvalidIP() const { return this->filterInvalidIP_ != nullptr;};
    void deleteFilterInvalidIP() { this->filterInvalidIP_ = nullptr;};
    inline int32_t filterInvalidIP() const { DARABONBA_PTR_GET_DEFAULT(filterInvalidIP_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setFilterInvalidIP(int32_t filterInvalidIP) { DARABONBA_PTR_SET_VALUE(filterInvalidIP_, filterInvalidIP) };


    // flowHijackJumpTimes Field Functions 
    bool hasFlowHijackJumpTimes() const { return this->flowHijackJumpTimes_ != nullptr;};
    void deleteFlowHijackJumpTimes() { this->flowHijackJumpTimes_ = nullptr;};
    inline int32_t flowHijackJumpTimes() const { DARABONBA_PTR_GET_DEFAULT(flowHijackJumpTimes_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setFlowHijackJumpTimes(int32_t flowHijackJumpTimes) { DARABONBA_PTR_SET_VALUE(flowHijackJumpTimes_, flowHijackJumpTimes) };


    // flowHijackLogo Field Functions 
    bool hasFlowHijackLogo() const { return this->flowHijackLogo_ != nullptr;};
    void deleteFlowHijackLogo() { this->flowHijackLogo_ = nullptr;};
    inline string flowHijackLogo() const { DARABONBA_PTR_GET_DEFAULT(flowHijackLogo_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setFlowHijackLogo(string flowHijackLogo) { DARABONBA_PTR_SET_VALUE(flowHijackLogo_, flowHijackLogo) };


    // ignoreCertificateError Field Functions 
    bool hasIgnoreCertificateError() const { return this->ignoreCertificateError_ != nullptr;};
    void deleteIgnoreCertificateError() { this->ignoreCertificateError_ = nullptr;};
    inline int32_t ignoreCertificateError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateError_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setIgnoreCertificateError(int32_t ignoreCertificateError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateError_, ignoreCertificateError) };


    // monitorTimeout Field Functions 
    bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
    void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
    inline int64_t monitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, 0L) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setMonitorTimeout(int64_t monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


    // pageTamper Field Functions 
    bool hasPageTamper() const { return this->pageTamper_ != nullptr;};
    void deletePageTamper() { this->pageTamper_ = nullptr;};
    inline string pageTamper() const { DARABONBA_PTR_GET_DEFAULT(pageTamper_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setPageTamper(string pageTamper) { DARABONBA_PTR_SET_VALUE(pageTamper_, pageTamper) };


    // redirection Field Functions 
    bool hasRedirection() const { return this->redirection_ != nullptr;};
    void deleteRedirection() { this->redirection_ = nullptr;};
    inline int32_t redirection() const { DARABONBA_PTR_GET_DEFAULT(redirection_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setRedirection(int32_t redirection) { DARABONBA_PTR_SET_VALUE(redirection_, redirection) };


    // slowElementThreshold Field Functions 
    bool hasSlowElementThreshold() const { return this->slowElementThreshold_ != nullptr;};
    void deleteSlowElementThreshold() { this->slowElementThreshold_ = nullptr;};
    inline int64_t slowElementThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowElementThreshold_, 0L) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setSlowElementThreshold(int64_t slowElementThreshold) { DARABONBA_PTR_SET_VALUE(slowElementThreshold_, slowElementThreshold) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // verifyStringBlacklist Field Functions 
    bool hasVerifyStringBlacklist() const { return this->verifyStringBlacklist_ != nullptr;};
    void deleteVerifyStringBlacklist() { this->verifyStringBlacklist_ = nullptr;};
    inline string verifyStringBlacklist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringBlacklist_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setVerifyStringBlacklist(string verifyStringBlacklist) { DARABONBA_PTR_SET_VALUE(verifyStringBlacklist_, verifyStringBlacklist) };


    // verifyStringWhitelist Field Functions 
    bool hasVerifyStringWhitelist() const { return this->verifyStringWhitelist_ != nullptr;};
    void deleteVerifyStringWhitelist() { this->verifyStringWhitelist_ = nullptr;};
    inline string verifyStringWhitelist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringWhitelist_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setVerifyStringWhitelist(string verifyStringWhitelist) { DARABONBA_PTR_SET_VALUE(verifyStringWhitelist_, verifyStringWhitelist) };


    // waitCompletionTime Field Functions 
    bool hasWaitCompletionTime() const { return this->waitCompletionTime_ != nullptr;};
    void deleteWaitCompletionTime() { this->waitCompletionTime_ = nullptr;};
    inline int64_t waitCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(waitCompletionTime_, 0L) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfWebsite& setWaitCompletionTime(int64_t waitCompletionTime) { DARABONBA_PTR_SET_VALUE(waitCompletionTime_, waitCompletionTime) };


  protected:
    // Specifies whether to automatically scroll up and down the screen to load a page. Valid values: 0: no. 1: yes. Default value: 0.
    std::shared_ptr<int32_t> automaticScrolling_ = nullptr;
    // Specifies whether to create a custom header. Valid values: 0: no. 1: The first packet is modified. 2: All packets are modified. Default value: 0.
    std::shared_ptr<int32_t> customHeader_ = nullptr;
    // The custom header. Format: JSON map.
    std::shared_ptr<map<string, string>> customHeaderContent_ = nullptr;
    // If the IP address or CNAME record resolved from a domain name is not included in the DNS whitelist, you cannot access the domain name, or an IP address that belongs to a different domain name is returned. If the IP address or CNAME record is included in the DNS whitelist, DNS hijacking does not occur.
    // 
    // Format: \\<domain name>:\\<objects>. The objects can be IP addresses, wildcard mask, subnet mask, or CNAME records. Separate multiple objects with vertical bars (|). Example: www.aliyun.com:203.0.3.55|203.3.44.67. It indicates that all IP addresses that belong to the www.aliyun.com domain name except 203.0.3.55 and 203.3.44.67 are hijacked.
    std::shared_ptr<string> DNSHijackWhitelist_ = nullptr;
    // Specifies whether to disable the cache. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> disableCache_ = nullptr;
    // Specifies whether to accept compressed files based on the HTTP Accept-Encoding request header. Valid values: 0: no. 1: yes. Default value: 0.
    std::shared_ptr<int32_t> disableCompression_ = nullptr;
    // The elements not to be loaded in the page loading process.
    std::shared_ptr<string> elementBlacklist_ = nullptr;
    // Specifies whether to exclude invalid IP addresses. Valid values:
    // 
    // *   1: no
    // *   0: yes
    std::shared_ptr<int32_t> filterInvalidIP_ = nullptr;
    // The total number of elements on the page.
    std::shared_ptr<int32_t> flowHijackJumpTimes_ = nullptr;
    // The keyword that is used to identify hijacking. Asterisks (\\*) are allowed.
    std::shared_ptr<string> flowHijackLogo_ = nullptr;
    // Specifies whether to ignore SSL certificate errors during browsing. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> ignoreCertificateError_ = nullptr;
    // The monitoring timeout period. Unit: milliseconds. Minimum value: 5000. Maximum value: 300000. Default value: 40000.
    std::shared_ptr<int64_t> monitorTimeout_ = nullptr;
    // Elements that are not included in the whitelist and appear on the page are manipulated. These elements can be pop-up ads, floating ads, and page redirection.
    std::shared_ptr<string> pageTamper_ = nullptr;
    // Specifies whether to continue browsing after redirection. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> redirection_ = nullptr;
    // The time threshold that is used to define a slow element. Unit: milliseconds. Default value: 5000. Minimum value: 1. Maximum value: 300000.
    std::shared_ptr<int64_t> slowElementThreshold_ = nullptr;
    // The URL of the website.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // An arbitrary string in the source code of the page for verification. If the source code returned by the client contains a string that is in the blacklist, the 650 error code is reported, which indicates that the string fails to be verified. Separate multiple strings with vertical bars (|).
    std::shared_ptr<string> verifyStringBlacklist_ = nullptr;
    // An arbitrary string in the source code of the page for verification. If the source code returned by the client contains a string that is not in the whitelist, the 650 error code is reported, which indicates that the string fails to be verified. Separate multiple strings with vertical bars (|).
    std::shared_ptr<string> verifyStringWhitelist_ = nullptr;
    // The maximum waiting time. Unit: milliseconds. Default value: 5000. Minimum value: 5000. Maximum value: 300000.
    std::shared_ptr<int64_t> waitCompletionTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
