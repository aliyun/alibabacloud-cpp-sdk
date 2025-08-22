// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILNAV_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILNAV_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetailNav : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetailNav& obj) { 
      DARABONBA_PTR_TO_JSON(DnsHijackWhitelist, dnsHijackWhitelist_);
      DARABONBA_PTR_TO_JSON(ElementBlacklist, elementBlacklist_);
      DARABONBA_PTR_TO_JSON(ExecuteActiveX, executeActiveX_);
      DARABONBA_PTR_TO_JSON(ExecuteApplet, executeApplet_);
      DARABONBA_PTR_TO_JSON(ExecuteScript, executeScript_);
      DARABONBA_PTR_TO_JSON(FilterInvalidIP, filterInvalidIP_);
      DARABONBA_PTR_TO_JSON(FlowHijackJumpTimes, flowHijackJumpTimes_);
      DARABONBA_PTR_TO_JSON(FlowHijackLogo, flowHijackLogo_);
      DARABONBA_PTR_TO_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_TO_JSON(NavAutomaticScrolling, navAutomaticScrolling_);
      DARABONBA_PTR_TO_JSON(NavCustomHeader, navCustomHeader_);
      DARABONBA_PTR_TO_JSON(NavCustomHeaderContent, navCustomHeaderContent_);
      DARABONBA_PTR_TO_JSON(NavCustomHost, navCustomHost_);
      DARABONBA_PTR_TO_JSON(NavCustomHostIp, navCustomHostIp_);
      DARABONBA_PTR_TO_JSON(NavDisableCache, navDisableCache_);
      DARABONBA_PTR_TO_JSON(NavDisableCompression, navDisableCompression_);
      DARABONBA_PTR_TO_JSON(NavIgnoreCertificateError, navIgnoreCertificateError_);
      DARABONBA_PTR_TO_JSON(NavRedirect, navRedirect_);
      DARABONBA_PTR_TO_JSON(NavReturnElement, navReturnElement_);
      DARABONBA_PTR_TO_JSON(PageTampering, pageTampering_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(QuicDomain, quicDomain_);
      DARABONBA_PTR_TO_JSON(QuicVersion, quicVersion_);
      DARABONBA_PTR_TO_JSON(RequestHeader, requestHeader_);
      DARABONBA_PTR_TO_JSON(SlowElementThreshold, slowElementThreshold_);
      DARABONBA_PTR_TO_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
      DARABONBA_PTR_TO_JSON(VerifyStringWhitelist, verifyStringWhitelist_);
      DARABONBA_PTR_TO_JSON(WaitCompletionTime, waitCompletionTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetailNav& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsHijackWhitelist, dnsHijackWhitelist_);
      DARABONBA_PTR_FROM_JSON(ElementBlacklist, elementBlacklist_);
      DARABONBA_PTR_FROM_JSON(ExecuteActiveX, executeActiveX_);
      DARABONBA_PTR_FROM_JSON(ExecuteApplet, executeApplet_);
      DARABONBA_PTR_FROM_JSON(ExecuteScript, executeScript_);
      DARABONBA_PTR_FROM_JSON(FilterInvalidIP, filterInvalidIP_);
      DARABONBA_PTR_FROM_JSON(FlowHijackJumpTimes, flowHijackJumpTimes_);
      DARABONBA_PTR_FROM_JSON(FlowHijackLogo, flowHijackLogo_);
      DARABONBA_PTR_FROM_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_FROM_JSON(NavAutomaticScrolling, navAutomaticScrolling_);
      DARABONBA_PTR_FROM_JSON(NavCustomHeader, navCustomHeader_);
      DARABONBA_PTR_FROM_JSON(NavCustomHeaderContent, navCustomHeaderContent_);
      DARABONBA_PTR_FROM_JSON(NavCustomHost, navCustomHost_);
      DARABONBA_PTR_FROM_JSON(NavCustomHostIp, navCustomHostIp_);
      DARABONBA_PTR_FROM_JSON(NavDisableCache, navDisableCache_);
      DARABONBA_PTR_FROM_JSON(NavDisableCompression, navDisableCompression_);
      DARABONBA_PTR_FROM_JSON(NavIgnoreCertificateError, navIgnoreCertificateError_);
      DARABONBA_PTR_FROM_JSON(NavRedirect, navRedirect_);
      DARABONBA_PTR_FROM_JSON(NavReturnElement, navReturnElement_);
      DARABONBA_PTR_FROM_JSON(PageTampering, pageTampering_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(QuicDomain, quicDomain_);
      DARABONBA_PTR_FROM_JSON(QuicVersion, quicVersion_);
      DARABONBA_PTR_FROM_JSON(RequestHeader, requestHeader_);
      DARABONBA_PTR_FROM_JSON(SlowElementThreshold, slowElementThreshold_);
      DARABONBA_PTR_FROM_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
      DARABONBA_PTR_FROM_JSON(VerifyStringWhitelist, verifyStringWhitelist_);
      DARABONBA_PTR_FROM_JSON(WaitCompletionTime, waitCompletionTime_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetailNav() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNav(const GetSyntheticTaskDetailResponseBodyTaskDetailNav &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNav(GetSyntheticTaskDetailResponseBodyTaskDetailNav &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNav(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetailNav() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNav& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetailNav &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailNav& operator=(GetSyntheticTaskDetailResponseBodyTaskDetailNav &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsHijackWhitelist_ != nullptr
        && this->elementBlacklist_ != nullptr && this->executeActiveX_ != nullptr && this->executeApplet_ != nullptr && this->executeScript_ != nullptr && this->filterInvalidIP_ != nullptr
        && this->flowHijackJumpTimes_ != nullptr && this->flowHijackLogo_ != nullptr && this->monitorTimeout_ != nullptr && this->navAutomaticScrolling_ != nullptr && this->navCustomHeader_ != nullptr
        && this->navCustomHeaderContent_ != nullptr && this->navCustomHost_ != nullptr && this->navCustomHostIp_ != nullptr && this->navDisableCache_ != nullptr && this->navDisableCompression_ != nullptr
        && this->navIgnoreCertificateError_ != nullptr && this->navRedirect_ != nullptr && this->navReturnElement_ != nullptr && this->pageTampering_ != nullptr && this->processName_ != nullptr
        && this->quicDomain_ != nullptr && this->quicVersion_ != nullptr && this->requestHeader_ != nullptr && this->slowElementThreshold_ != nullptr && this->verifyStringBlacklist_ != nullptr
        && this->verifyStringWhitelist_ != nullptr && this->waitCompletionTime_ != nullptr; };
    // dnsHijackWhitelist Field Functions 
    bool hasDnsHijackWhitelist() const { return this->dnsHijackWhitelist_ != nullptr;};
    void deleteDnsHijackWhitelist() { this->dnsHijackWhitelist_ = nullptr;};
    inline string dnsHijackWhitelist() const { DARABONBA_PTR_GET_DEFAULT(dnsHijackWhitelist_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setDnsHijackWhitelist(string dnsHijackWhitelist) { DARABONBA_PTR_SET_VALUE(dnsHijackWhitelist_, dnsHijackWhitelist) };


    // elementBlacklist Field Functions 
    bool hasElementBlacklist() const { return this->elementBlacklist_ != nullptr;};
    void deleteElementBlacklist() { this->elementBlacklist_ = nullptr;};
    inline string elementBlacklist() const { DARABONBA_PTR_GET_DEFAULT(elementBlacklist_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setElementBlacklist(string elementBlacklist) { DARABONBA_PTR_SET_VALUE(elementBlacklist_, elementBlacklist) };


    // executeActiveX Field Functions 
    bool hasExecuteActiveX() const { return this->executeActiveX_ != nullptr;};
    void deleteExecuteActiveX() { this->executeActiveX_ = nullptr;};
    inline int64_t executeActiveX() const { DARABONBA_PTR_GET_DEFAULT(executeActiveX_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setExecuteActiveX(int64_t executeActiveX) { DARABONBA_PTR_SET_VALUE(executeActiveX_, executeActiveX) };


    // executeApplet Field Functions 
    bool hasExecuteApplet() const { return this->executeApplet_ != nullptr;};
    void deleteExecuteApplet() { this->executeApplet_ = nullptr;};
    inline int64_t executeApplet() const { DARABONBA_PTR_GET_DEFAULT(executeApplet_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setExecuteApplet(int64_t executeApplet) { DARABONBA_PTR_SET_VALUE(executeApplet_, executeApplet) };


    // executeScript Field Functions 
    bool hasExecuteScript() const { return this->executeScript_ != nullptr;};
    void deleteExecuteScript() { this->executeScript_ = nullptr;};
    inline int64_t executeScript() const { DARABONBA_PTR_GET_DEFAULT(executeScript_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setExecuteScript(int64_t executeScript) { DARABONBA_PTR_SET_VALUE(executeScript_, executeScript) };


    // filterInvalidIP Field Functions 
    bool hasFilterInvalidIP() const { return this->filterInvalidIP_ != nullptr;};
    void deleteFilterInvalidIP() { this->filterInvalidIP_ = nullptr;};
    inline int64_t filterInvalidIP() const { DARABONBA_PTR_GET_DEFAULT(filterInvalidIP_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setFilterInvalidIP(int64_t filterInvalidIP) { DARABONBA_PTR_SET_VALUE(filterInvalidIP_, filterInvalidIP) };


    // flowHijackJumpTimes Field Functions 
    bool hasFlowHijackJumpTimes() const { return this->flowHijackJumpTimes_ != nullptr;};
    void deleteFlowHijackJumpTimes() { this->flowHijackJumpTimes_ = nullptr;};
    inline int64_t flowHijackJumpTimes() const { DARABONBA_PTR_GET_DEFAULT(flowHijackJumpTimes_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setFlowHijackJumpTimes(int64_t flowHijackJumpTimes) { DARABONBA_PTR_SET_VALUE(flowHijackJumpTimes_, flowHijackJumpTimes) };


    // flowHijackLogo Field Functions 
    bool hasFlowHijackLogo() const { return this->flowHijackLogo_ != nullptr;};
    void deleteFlowHijackLogo() { this->flowHijackLogo_ = nullptr;};
    inline string flowHijackLogo() const { DARABONBA_PTR_GET_DEFAULT(flowHijackLogo_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setFlowHijackLogo(string flowHijackLogo) { DARABONBA_PTR_SET_VALUE(flowHijackLogo_, flowHijackLogo) };


    // monitorTimeout Field Functions 
    bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
    void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
    inline int64_t monitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setMonitorTimeout(int64_t monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


    // navAutomaticScrolling Field Functions 
    bool hasNavAutomaticScrolling() const { return this->navAutomaticScrolling_ != nullptr;};
    void deleteNavAutomaticScrolling() { this->navAutomaticScrolling_ = nullptr;};
    inline int64_t navAutomaticScrolling() const { DARABONBA_PTR_GET_DEFAULT(navAutomaticScrolling_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavAutomaticScrolling(int64_t navAutomaticScrolling) { DARABONBA_PTR_SET_VALUE(navAutomaticScrolling_, navAutomaticScrolling) };


    // navCustomHeader Field Functions 
    bool hasNavCustomHeader() const { return this->navCustomHeader_ != nullptr;};
    void deleteNavCustomHeader() { this->navCustomHeader_ = nullptr;};
    inline string navCustomHeader() const { DARABONBA_PTR_GET_DEFAULT(navCustomHeader_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavCustomHeader(string navCustomHeader) { DARABONBA_PTR_SET_VALUE(navCustomHeader_, navCustomHeader) };


    // navCustomHeaderContent Field Functions 
    bool hasNavCustomHeaderContent() const { return this->navCustomHeaderContent_ != nullptr;};
    void deleteNavCustomHeaderContent() { this->navCustomHeaderContent_ = nullptr;};
    inline string navCustomHeaderContent() const { DARABONBA_PTR_GET_DEFAULT(navCustomHeaderContent_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavCustomHeaderContent(string navCustomHeaderContent) { DARABONBA_PTR_SET_VALUE(navCustomHeaderContent_, navCustomHeaderContent) };


    // navCustomHost Field Functions 
    bool hasNavCustomHost() const { return this->navCustomHost_ != nullptr;};
    void deleteNavCustomHost() { this->navCustomHost_ = nullptr;};
    inline int64_t navCustomHost() const { DARABONBA_PTR_GET_DEFAULT(navCustomHost_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavCustomHost(int64_t navCustomHost) { DARABONBA_PTR_SET_VALUE(navCustomHost_, navCustomHost) };


    // navCustomHostIp Field Functions 
    bool hasNavCustomHostIp() const { return this->navCustomHostIp_ != nullptr;};
    void deleteNavCustomHostIp() { this->navCustomHostIp_ = nullptr;};
    inline string navCustomHostIp() const { DARABONBA_PTR_GET_DEFAULT(navCustomHostIp_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavCustomHostIp(string navCustomHostIp) { DARABONBA_PTR_SET_VALUE(navCustomHostIp_, navCustomHostIp) };


    // navDisableCache Field Functions 
    bool hasNavDisableCache() const { return this->navDisableCache_ != nullptr;};
    void deleteNavDisableCache() { this->navDisableCache_ = nullptr;};
    inline int64_t navDisableCache() const { DARABONBA_PTR_GET_DEFAULT(navDisableCache_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavDisableCache(int64_t navDisableCache) { DARABONBA_PTR_SET_VALUE(navDisableCache_, navDisableCache) };


    // navDisableCompression Field Functions 
    bool hasNavDisableCompression() const { return this->navDisableCompression_ != nullptr;};
    void deleteNavDisableCompression() { this->navDisableCompression_ = nullptr;};
    inline int64_t navDisableCompression() const { DARABONBA_PTR_GET_DEFAULT(navDisableCompression_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavDisableCompression(int64_t navDisableCompression) { DARABONBA_PTR_SET_VALUE(navDisableCompression_, navDisableCompression) };


    // navIgnoreCertificateError Field Functions 
    bool hasNavIgnoreCertificateError() const { return this->navIgnoreCertificateError_ != nullptr;};
    void deleteNavIgnoreCertificateError() { this->navIgnoreCertificateError_ = nullptr;};
    inline int64_t navIgnoreCertificateError() const { DARABONBA_PTR_GET_DEFAULT(navIgnoreCertificateError_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavIgnoreCertificateError(int64_t navIgnoreCertificateError) { DARABONBA_PTR_SET_VALUE(navIgnoreCertificateError_, navIgnoreCertificateError) };


    // navRedirect Field Functions 
    bool hasNavRedirect() const { return this->navRedirect_ != nullptr;};
    void deleteNavRedirect() { this->navRedirect_ = nullptr;};
    inline int64_t navRedirect() const { DARABONBA_PTR_GET_DEFAULT(navRedirect_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavRedirect(int64_t navRedirect) { DARABONBA_PTR_SET_VALUE(navRedirect_, navRedirect) };


    // navReturnElement Field Functions 
    bool hasNavReturnElement() const { return this->navReturnElement_ != nullptr;};
    void deleteNavReturnElement() { this->navReturnElement_ = nullptr;};
    inline int64_t navReturnElement() const { DARABONBA_PTR_GET_DEFAULT(navReturnElement_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setNavReturnElement(int64_t navReturnElement) { DARABONBA_PTR_SET_VALUE(navReturnElement_, navReturnElement) };


    // pageTampering Field Functions 
    bool hasPageTampering() const { return this->pageTampering_ != nullptr;};
    void deletePageTampering() { this->pageTampering_ = nullptr;};
    inline string pageTampering() const { DARABONBA_PTR_GET_DEFAULT(pageTampering_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setPageTampering(string pageTampering) { DARABONBA_PTR_SET_VALUE(pageTampering_, pageTampering) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // quicDomain Field Functions 
    bool hasQuicDomain() const { return this->quicDomain_ != nullptr;};
    void deleteQuicDomain() { this->quicDomain_ = nullptr;};
    inline string quicDomain() const { DARABONBA_PTR_GET_DEFAULT(quicDomain_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setQuicDomain(string quicDomain) { DARABONBA_PTR_SET_VALUE(quicDomain_, quicDomain) };


    // quicVersion Field Functions 
    bool hasQuicVersion() const { return this->quicVersion_ != nullptr;};
    void deleteQuicVersion() { this->quicVersion_ = nullptr;};
    inline int64_t quicVersion() const { DARABONBA_PTR_GET_DEFAULT(quicVersion_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setQuicVersion(int64_t quicVersion) { DARABONBA_PTR_SET_VALUE(quicVersion_, quicVersion) };


    // requestHeader Field Functions 
    bool hasRequestHeader() const { return this->requestHeader_ != nullptr;};
    void deleteRequestHeader() { this->requestHeader_ = nullptr;};
    inline int64_t requestHeader() const { DARABONBA_PTR_GET_DEFAULT(requestHeader_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setRequestHeader(int64_t requestHeader) { DARABONBA_PTR_SET_VALUE(requestHeader_, requestHeader) };


    // slowElementThreshold Field Functions 
    bool hasSlowElementThreshold() const { return this->slowElementThreshold_ != nullptr;};
    void deleteSlowElementThreshold() { this->slowElementThreshold_ = nullptr;};
    inline int64_t slowElementThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowElementThreshold_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setSlowElementThreshold(int64_t slowElementThreshold) { DARABONBA_PTR_SET_VALUE(slowElementThreshold_, slowElementThreshold) };


    // verifyStringBlacklist Field Functions 
    bool hasVerifyStringBlacklist() const { return this->verifyStringBlacklist_ != nullptr;};
    void deleteVerifyStringBlacklist() { this->verifyStringBlacklist_ = nullptr;};
    inline string verifyStringBlacklist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringBlacklist_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setVerifyStringBlacklist(string verifyStringBlacklist) { DARABONBA_PTR_SET_VALUE(verifyStringBlacklist_, verifyStringBlacklist) };


    // verifyStringWhitelist Field Functions 
    bool hasVerifyStringWhitelist() const { return this->verifyStringWhitelist_ != nullptr;};
    void deleteVerifyStringWhitelist() { this->verifyStringWhitelist_ = nullptr;};
    inline string verifyStringWhitelist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringWhitelist_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setVerifyStringWhitelist(string verifyStringWhitelist) { DARABONBA_PTR_SET_VALUE(verifyStringWhitelist_, verifyStringWhitelist) };


    // waitCompletionTime Field Functions 
    bool hasWaitCompletionTime() const { return this->waitCompletionTime_ != nullptr;};
    void deleteWaitCompletionTime() { this->waitCompletionTime_ = nullptr;};
    inline int64_t waitCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(waitCompletionTime_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailNav& setWaitCompletionTime(int64_t waitCompletionTime) { DARABONBA_PTR_SET_VALUE(waitCompletionTime_, waitCompletionTime) };


  protected:
    // The DNS whitelist.
    std::shared_ptr<string> dnsHijackWhitelist_ = nullptr;
    // The element blacklist.
    std::shared_ptr<string> elementBlacklist_ = nullptr;
    // Indicates whether ActiveX is executed. Valid values:
    // 
    // *   3: yes
    // *   0: no
    // 
    // >  Only IE elements support this parameter.
    std::shared_ptr<int64_t> executeActiveX_ = nullptr;
    // Indicates whether the applet is executed. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> executeApplet_ = nullptr;
    // Indicates whether scripts are executed. Valid values:
    // 
    // *   1: yes
    // *   0: no
    // 
    // >  Only IE elements support this parameter.
    std::shared_ptr<int64_t> executeScript_ = nullptr;
    // Indicates whether invalid IP addresses are excluded. Valid values:
    // 
    // *   1: no
    // *   0: yes
    std::shared_ptr<int64_t> filterInvalidIP_ = nullptr;
    // The element that is used in DNS hijacking.
    std::shared_ptr<int64_t> flowHijackJumpTimes_ = nullptr;
    // The tag that is used in DNS hijacking.
    std::shared_ptr<string> flowHijackLogo_ = nullptr;
    // The monitoring timeout period.
    std::shared_ptr<int64_t> monitorTimeout_ = nullptr;
    // Indicates whether the screen is automatically scrolled up and down to load a page. Valid values:
    // 
    // *   1: yes
    // *   0: no
    std::shared_ptr<int64_t> navAutomaticScrolling_ = nullptr;
    // Indicates whether a custom header is created. Valid values:
    // 
    // *   0: no
    // *   1: A custom header is created for the first packet.
    // *   2: A custom header is created for all packets.
    std::shared_ptr<string> navCustomHeader_ = nullptr;
    // The format of the custom header. Multiple fields are separated with vertical bars (|).
    std::shared_ptr<string> navCustomHeaderContent_ = nullptr;
    // The custom host mode. Valid values:
    // 
    // *   1: round robin
    // *   0: random
    std::shared_ptr<int64_t> navCustomHost_ = nullptr;
    // The custom IP address of the host. Multiple IP addresses are separated with commas (,).
    std::shared_ptr<string> navCustomHostIp_ = nullptr;
    // Indicates whether caching is disabled. Valid values:
    // 
    // *   1: Caching is disabled.
    // *   0: Caching is enabled.
    std::shared_ptr<int64_t> navDisableCache_ = nullptr;
    // Indicates whether compression is disabled. Valid values:
    // 
    // *   0: Compression is enabled.
    // *   1: Compression is disabled.
    std::shared_ptr<int64_t> navDisableCompression_ = nullptr;
    // Indicates whether certificate errors are ignored during certificate verification in the SSL handshake. Valid values:
    // 
    // *   1: yes
    // *   0: no
    std::shared_ptr<int64_t> navIgnoreCertificateError_ = nullptr;
    // Indicates whether redirection is enabled. Valid values:
    // 
    // *   0: no
    // *   1: yes
    std::shared_ptr<int64_t> navRedirect_ = nullptr;
    // Indicates whether the elements on the page are returned.
    // 
    // *   1: no. The basic document data is returned.
    // *   2: yes. All document data is returned.
    std::shared_ptr<int64_t> navReturnElement_ = nullptr;
    // The page tampering.
    std::shared_ptr<string> pageTampering_ = nullptr;
    // The process ID.
    std::shared_ptr<string> processName_ = nullptr;
    // The domain name of the QUIC request element.
    std::shared_ptr<string> quicDomain_ = nullptr;
    // The QUIC version. Default value: 0. Valid values:
    // 
    // *   35
    // *   39
    // *   43
    // *   44
    // 
    // >  Only Chrome elements support this parameter.
    std::shared_ptr<int64_t> quicVersion_ = nullptr;
    // Indicates whether request headers are returned. Valid values:
    // 
    // *   0: no
    // *   1: The headers of base documents are returned.
    // *   2: All headers are returned.
    std::shared_ptr<int64_t> requestHeader_ = nullptr;
    // The time threshold that is used to define a slow element. Unit: seconds.
    std::shared_ptr<int64_t> slowElementThreshold_ = nullptr;
    // The blacklist for string verification.
    std::shared_ptr<string> verifyStringBlacklist_ = nullptr;
    // The whitelist for string verification.
    std::shared_ptr<string> verifyStringWhitelist_ = nullptr;
    // The timeout period of waiting for the monitoring to complete.
    std::shared_ptr<int64_t> waitCompletionTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
