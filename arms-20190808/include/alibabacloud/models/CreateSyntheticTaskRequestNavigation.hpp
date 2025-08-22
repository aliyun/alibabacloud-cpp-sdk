// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTNAVIGATION_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTNAVIGATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestNavigation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestNavigation& obj) { 
      DARABONBA_PTR_TO_JSON(DNSHijackWhiteList, DNSHijackWhiteList_);
      DARABONBA_PTR_TO_JSON(ElementBlacklist, elementBlacklist_);
      DARABONBA_PTR_TO_JSON(ExecuteActiveX, executeActiveX_);
      DARABONBA_PTR_TO_JSON(ExecuteApplication, executeApplication_);
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
      DARABONBA_PTR_TO_JSON(NavRedirection, navRedirection_);
      DARABONBA_PTR_TO_JSON(NavReturnElement, navReturnElement_);
      DARABONBA_PTR_TO_JSON(PageTamper, pageTamper_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(QUICDomain, QUICDomain_);
      DARABONBA_PTR_TO_JSON(QUICVersion, QUICVersion_);
      DARABONBA_PTR_TO_JSON(RequestHeader, requestHeader_);
      DARABONBA_PTR_TO_JSON(ResponseHeader, responseHeader_);
      DARABONBA_PTR_TO_JSON(SlowElementThreshold, slowElementThreshold_);
      DARABONBA_PTR_TO_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
      DARABONBA_PTR_TO_JSON(VerifyStringWhiteList, verifyStringWhiteList_);
      DARABONBA_PTR_TO_JSON(WaitCompletionTime, waitCompletionTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestNavigation& obj) { 
      DARABONBA_PTR_FROM_JSON(DNSHijackWhiteList, DNSHijackWhiteList_);
      DARABONBA_PTR_FROM_JSON(ElementBlacklist, elementBlacklist_);
      DARABONBA_PTR_FROM_JSON(ExecuteActiveX, executeActiveX_);
      DARABONBA_PTR_FROM_JSON(ExecuteApplication, executeApplication_);
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
      DARABONBA_PTR_FROM_JSON(NavRedirection, navRedirection_);
      DARABONBA_PTR_FROM_JSON(NavReturnElement, navReturnElement_);
      DARABONBA_PTR_FROM_JSON(PageTamper, pageTamper_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(QUICDomain, QUICDomain_);
      DARABONBA_PTR_FROM_JSON(QUICVersion, QUICVersion_);
      DARABONBA_PTR_FROM_JSON(RequestHeader, requestHeader_);
      DARABONBA_PTR_FROM_JSON(ResponseHeader, responseHeader_);
      DARABONBA_PTR_FROM_JSON(SlowElementThreshold, slowElementThreshold_);
      DARABONBA_PTR_FROM_JSON(VerifyStringBlacklist, verifyStringBlacklist_);
      DARABONBA_PTR_FROM_JSON(VerifyStringWhiteList, verifyStringWhiteList_);
      DARABONBA_PTR_FROM_JSON(WaitCompletionTime, waitCompletionTime_);
    };
    CreateSyntheticTaskRequestNavigation() = default ;
    CreateSyntheticTaskRequestNavigation(const CreateSyntheticTaskRequestNavigation &) = default ;
    CreateSyntheticTaskRequestNavigation(CreateSyntheticTaskRequestNavigation &&) = default ;
    CreateSyntheticTaskRequestNavigation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestNavigation() = default ;
    CreateSyntheticTaskRequestNavigation& operator=(const CreateSyntheticTaskRequestNavigation &) = default ;
    CreateSyntheticTaskRequestNavigation& operator=(CreateSyntheticTaskRequestNavigation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DNSHijackWhiteList_ != nullptr
        && this->elementBlacklist_ != nullptr && this->executeActiveX_ != nullptr && this->executeApplication_ != nullptr && this->executeScript_ != nullptr && this->filterInvalidIP_ != nullptr
        && this->flowHijackJumpTimes_ != nullptr && this->flowHijackLogo_ != nullptr && this->monitorTimeout_ != nullptr && this->navAutomaticScrolling_ != nullptr && this->navCustomHeader_ != nullptr
        && this->navCustomHeaderContent_ != nullptr && this->navCustomHost_ != nullptr && this->navCustomHostIp_ != nullptr && this->navDisableCache_ != nullptr && this->navDisableCompression_ != nullptr
        && this->navIgnoreCertificateError_ != nullptr && this->navRedirection_ != nullptr && this->navReturnElement_ != nullptr && this->pageTamper_ != nullptr && this->processName_ != nullptr
        && this->QUICDomain_ != nullptr && this->QUICVersion_ != nullptr && this->requestHeader_ != nullptr && this->responseHeader_ != nullptr && this->slowElementThreshold_ != nullptr
        && this->verifyStringBlacklist_ != nullptr && this->verifyStringWhiteList_ != nullptr && this->waitCompletionTime_ != nullptr; };
    // DNSHijackWhiteList Field Functions 
    bool hasDNSHijackWhiteList() const { return this->DNSHijackWhiteList_ != nullptr;};
    void deleteDNSHijackWhiteList() { this->DNSHijackWhiteList_ = nullptr;};
    inline string DNSHijackWhiteList() const { DARABONBA_PTR_GET_DEFAULT(DNSHijackWhiteList_, "") };
    inline CreateSyntheticTaskRequestNavigation& setDNSHijackWhiteList(string DNSHijackWhiteList) { DARABONBA_PTR_SET_VALUE(DNSHijackWhiteList_, DNSHijackWhiteList) };


    // elementBlacklist Field Functions 
    bool hasElementBlacklist() const { return this->elementBlacklist_ != nullptr;};
    void deleteElementBlacklist() { this->elementBlacklist_ = nullptr;};
    inline string elementBlacklist() const { DARABONBA_PTR_GET_DEFAULT(elementBlacklist_, "") };
    inline CreateSyntheticTaskRequestNavigation& setElementBlacklist(string elementBlacklist) { DARABONBA_PTR_SET_VALUE(elementBlacklist_, elementBlacklist) };


    // executeActiveX Field Functions 
    bool hasExecuteActiveX() const { return this->executeActiveX_ != nullptr;};
    void deleteExecuteActiveX() { this->executeActiveX_ = nullptr;};
    inline int64_t executeActiveX() const { DARABONBA_PTR_GET_DEFAULT(executeActiveX_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setExecuteActiveX(int64_t executeActiveX) { DARABONBA_PTR_SET_VALUE(executeActiveX_, executeActiveX) };


    // executeApplication Field Functions 
    bool hasExecuteApplication() const { return this->executeApplication_ != nullptr;};
    void deleteExecuteApplication() { this->executeApplication_ = nullptr;};
    inline int64_t executeApplication() const { DARABONBA_PTR_GET_DEFAULT(executeApplication_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setExecuteApplication(int64_t executeApplication) { DARABONBA_PTR_SET_VALUE(executeApplication_, executeApplication) };


    // executeScript Field Functions 
    bool hasExecuteScript() const { return this->executeScript_ != nullptr;};
    void deleteExecuteScript() { this->executeScript_ = nullptr;};
    inline int64_t executeScript() const { DARABONBA_PTR_GET_DEFAULT(executeScript_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setExecuteScript(int64_t executeScript) { DARABONBA_PTR_SET_VALUE(executeScript_, executeScript) };


    // filterInvalidIP Field Functions 
    bool hasFilterInvalidIP() const { return this->filterInvalidIP_ != nullptr;};
    void deleteFilterInvalidIP() { this->filterInvalidIP_ = nullptr;};
    inline int64_t filterInvalidIP() const { DARABONBA_PTR_GET_DEFAULT(filterInvalidIP_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setFilterInvalidIP(int64_t filterInvalidIP) { DARABONBA_PTR_SET_VALUE(filterInvalidIP_, filterInvalidIP) };


    // flowHijackJumpTimes Field Functions 
    bool hasFlowHijackJumpTimes() const { return this->flowHijackJumpTimes_ != nullptr;};
    void deleteFlowHijackJumpTimes() { this->flowHijackJumpTimes_ = nullptr;};
    inline int64_t flowHijackJumpTimes() const { DARABONBA_PTR_GET_DEFAULT(flowHijackJumpTimes_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setFlowHijackJumpTimes(int64_t flowHijackJumpTimes) { DARABONBA_PTR_SET_VALUE(flowHijackJumpTimes_, flowHijackJumpTimes) };


    // flowHijackLogo Field Functions 
    bool hasFlowHijackLogo() const { return this->flowHijackLogo_ != nullptr;};
    void deleteFlowHijackLogo() { this->flowHijackLogo_ = nullptr;};
    inline string flowHijackLogo() const { DARABONBA_PTR_GET_DEFAULT(flowHijackLogo_, "") };
    inline CreateSyntheticTaskRequestNavigation& setFlowHijackLogo(string flowHijackLogo) { DARABONBA_PTR_SET_VALUE(flowHijackLogo_, flowHijackLogo) };


    // monitorTimeout Field Functions 
    bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
    void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
    inline string monitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, "") };
    inline CreateSyntheticTaskRequestNavigation& setMonitorTimeout(string monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


    // navAutomaticScrolling Field Functions 
    bool hasNavAutomaticScrolling() const { return this->navAutomaticScrolling_ != nullptr;};
    void deleteNavAutomaticScrolling() { this->navAutomaticScrolling_ = nullptr;};
    inline string navAutomaticScrolling() const { DARABONBA_PTR_GET_DEFAULT(navAutomaticScrolling_, "") };
    inline CreateSyntheticTaskRequestNavigation& setNavAutomaticScrolling(string navAutomaticScrolling) { DARABONBA_PTR_SET_VALUE(navAutomaticScrolling_, navAutomaticScrolling) };


    // navCustomHeader Field Functions 
    bool hasNavCustomHeader() const { return this->navCustomHeader_ != nullptr;};
    void deleteNavCustomHeader() { this->navCustomHeader_ = nullptr;};
    inline string navCustomHeader() const { DARABONBA_PTR_GET_DEFAULT(navCustomHeader_, "") };
    inline CreateSyntheticTaskRequestNavigation& setNavCustomHeader(string navCustomHeader) { DARABONBA_PTR_SET_VALUE(navCustomHeader_, navCustomHeader) };


    // navCustomHeaderContent Field Functions 
    bool hasNavCustomHeaderContent() const { return this->navCustomHeaderContent_ != nullptr;};
    void deleteNavCustomHeaderContent() { this->navCustomHeaderContent_ = nullptr;};
    inline string navCustomHeaderContent() const { DARABONBA_PTR_GET_DEFAULT(navCustomHeaderContent_, "") };
    inline CreateSyntheticTaskRequestNavigation& setNavCustomHeaderContent(string navCustomHeaderContent) { DARABONBA_PTR_SET_VALUE(navCustomHeaderContent_, navCustomHeaderContent) };


    // navCustomHost Field Functions 
    bool hasNavCustomHost() const { return this->navCustomHost_ != nullptr;};
    void deleteNavCustomHost() { this->navCustomHost_ = nullptr;};
    inline int64_t navCustomHost() const { DARABONBA_PTR_GET_DEFAULT(navCustomHost_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setNavCustomHost(int64_t navCustomHost) { DARABONBA_PTR_SET_VALUE(navCustomHost_, navCustomHost) };


    // navCustomHostIp Field Functions 
    bool hasNavCustomHostIp() const { return this->navCustomHostIp_ != nullptr;};
    void deleteNavCustomHostIp() { this->navCustomHostIp_ = nullptr;};
    inline string navCustomHostIp() const { DARABONBA_PTR_GET_DEFAULT(navCustomHostIp_, "") };
    inline CreateSyntheticTaskRequestNavigation& setNavCustomHostIp(string navCustomHostIp) { DARABONBA_PTR_SET_VALUE(navCustomHostIp_, navCustomHostIp) };


    // navDisableCache Field Functions 
    bool hasNavDisableCache() const { return this->navDisableCache_ != nullptr;};
    void deleteNavDisableCache() { this->navDisableCache_ = nullptr;};
    inline int64_t navDisableCache() const { DARABONBA_PTR_GET_DEFAULT(navDisableCache_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setNavDisableCache(int64_t navDisableCache) { DARABONBA_PTR_SET_VALUE(navDisableCache_, navDisableCache) };


    // navDisableCompression Field Functions 
    bool hasNavDisableCompression() const { return this->navDisableCompression_ != nullptr;};
    void deleteNavDisableCompression() { this->navDisableCompression_ = nullptr;};
    inline string navDisableCompression() const { DARABONBA_PTR_GET_DEFAULT(navDisableCompression_, "") };
    inline CreateSyntheticTaskRequestNavigation& setNavDisableCompression(string navDisableCompression) { DARABONBA_PTR_SET_VALUE(navDisableCompression_, navDisableCompression) };


    // navIgnoreCertificateError Field Functions 
    bool hasNavIgnoreCertificateError() const { return this->navIgnoreCertificateError_ != nullptr;};
    void deleteNavIgnoreCertificateError() { this->navIgnoreCertificateError_ = nullptr;};
    inline int64_t navIgnoreCertificateError() const { DARABONBA_PTR_GET_DEFAULT(navIgnoreCertificateError_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setNavIgnoreCertificateError(int64_t navIgnoreCertificateError) { DARABONBA_PTR_SET_VALUE(navIgnoreCertificateError_, navIgnoreCertificateError) };


    // navRedirection Field Functions 
    bool hasNavRedirection() const { return this->navRedirection_ != nullptr;};
    void deleteNavRedirection() { this->navRedirection_ = nullptr;};
    inline int64_t navRedirection() const { DARABONBA_PTR_GET_DEFAULT(navRedirection_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setNavRedirection(int64_t navRedirection) { DARABONBA_PTR_SET_VALUE(navRedirection_, navRedirection) };


    // navReturnElement Field Functions 
    bool hasNavReturnElement() const { return this->navReturnElement_ != nullptr;};
    void deleteNavReturnElement() { this->navReturnElement_ = nullptr;};
    inline int64_t navReturnElement() const { DARABONBA_PTR_GET_DEFAULT(navReturnElement_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setNavReturnElement(int64_t navReturnElement) { DARABONBA_PTR_SET_VALUE(navReturnElement_, navReturnElement) };


    // pageTamper Field Functions 
    bool hasPageTamper() const { return this->pageTamper_ != nullptr;};
    void deletePageTamper() { this->pageTamper_ = nullptr;};
    inline string pageTamper() const { DARABONBA_PTR_GET_DEFAULT(pageTamper_, "") };
    inline CreateSyntheticTaskRequestNavigation& setPageTamper(string pageTamper) { DARABONBA_PTR_SET_VALUE(pageTamper_, pageTamper) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline CreateSyntheticTaskRequestNavigation& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // QUICDomain Field Functions 
    bool hasQUICDomain() const { return this->QUICDomain_ != nullptr;};
    void deleteQUICDomain() { this->QUICDomain_ = nullptr;};
    inline string QUICDomain() const { DARABONBA_PTR_GET_DEFAULT(QUICDomain_, "") };
    inline CreateSyntheticTaskRequestNavigation& setQUICDomain(string QUICDomain) { DARABONBA_PTR_SET_VALUE(QUICDomain_, QUICDomain) };


    // QUICVersion Field Functions 
    bool hasQUICVersion() const { return this->QUICVersion_ != nullptr;};
    void deleteQUICVersion() { this->QUICVersion_ = nullptr;};
    inline int64_t QUICVersion() const { DARABONBA_PTR_GET_DEFAULT(QUICVersion_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setQUICVersion(int64_t QUICVersion) { DARABONBA_PTR_SET_VALUE(QUICVersion_, QUICVersion) };


    // requestHeader Field Functions 
    bool hasRequestHeader() const { return this->requestHeader_ != nullptr;};
    void deleteRequestHeader() { this->requestHeader_ = nullptr;};
    inline int64_t requestHeader() const { DARABONBA_PTR_GET_DEFAULT(requestHeader_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setRequestHeader(int64_t requestHeader) { DARABONBA_PTR_SET_VALUE(requestHeader_, requestHeader) };


    // responseHeader Field Functions 
    bool hasResponseHeader() const { return this->responseHeader_ != nullptr;};
    void deleteResponseHeader() { this->responseHeader_ = nullptr;};
    inline int64_t responseHeader() const { DARABONBA_PTR_GET_DEFAULT(responseHeader_, 0L) };
    inline CreateSyntheticTaskRequestNavigation& setResponseHeader(int64_t responseHeader) { DARABONBA_PTR_SET_VALUE(responseHeader_, responseHeader) };


    // slowElementThreshold Field Functions 
    bool hasSlowElementThreshold() const { return this->slowElementThreshold_ != nullptr;};
    void deleteSlowElementThreshold() { this->slowElementThreshold_ = nullptr;};
    inline double slowElementThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowElementThreshold_, 0.0) };
    inline CreateSyntheticTaskRequestNavigation& setSlowElementThreshold(double slowElementThreshold) { DARABONBA_PTR_SET_VALUE(slowElementThreshold_, slowElementThreshold) };


    // verifyStringBlacklist Field Functions 
    bool hasVerifyStringBlacklist() const { return this->verifyStringBlacklist_ != nullptr;};
    void deleteVerifyStringBlacklist() { this->verifyStringBlacklist_ = nullptr;};
    inline string verifyStringBlacklist() const { DARABONBA_PTR_GET_DEFAULT(verifyStringBlacklist_, "") };
    inline CreateSyntheticTaskRequestNavigation& setVerifyStringBlacklist(string verifyStringBlacklist) { DARABONBA_PTR_SET_VALUE(verifyStringBlacklist_, verifyStringBlacklist) };


    // verifyStringWhiteList Field Functions 
    bool hasVerifyStringWhiteList() const { return this->verifyStringWhiteList_ != nullptr;};
    void deleteVerifyStringWhiteList() { this->verifyStringWhiteList_ = nullptr;};
    inline string verifyStringWhiteList() const { DARABONBA_PTR_GET_DEFAULT(verifyStringWhiteList_, "") };
    inline CreateSyntheticTaskRequestNavigation& setVerifyStringWhiteList(string verifyStringWhiteList) { DARABONBA_PTR_SET_VALUE(verifyStringWhiteList_, verifyStringWhiteList) };


    // waitCompletionTime Field Functions 
    bool hasWaitCompletionTime() const { return this->waitCompletionTime_ != nullptr;};
    void deleteWaitCompletionTime() { this->waitCompletionTime_ = nullptr;};
    inline double waitCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(waitCompletionTime_, 0.0) };
    inline CreateSyntheticTaskRequestNavigation& setWaitCompletionTime(double waitCompletionTime) { DARABONBA_PTR_SET_VALUE(waitCompletionTime_, waitCompletionTime) };


  protected:
    // The whitelist for DNS hijacking.
    std::shared_ptr<string> DNSHijackWhiteList_ = nullptr;
    // The element blacklist.
    std::shared_ptr<string> elementBlacklist_ = nullptr;
    // Specifies whether to execute ActiveX.
    // 
    // *   3: yes
    // *   0: no
    // 
    // >  This parameter is supported only by IE Full Elements.
    std::shared_ptr<int64_t> executeActiveX_ = nullptr;
    // Specifies whether to run applets.
    // 
    // *   1: yes
    // *   0: no
    // 
    // >  This parameter is supported only by IE Full Elements.
    std::shared_ptr<int64_t> executeApplication_ = nullptr;
    // Specifies whether to execute scripts.
    // 
    // *   1: yes
    // *   0: no
    // 
    // >  This parameter is supported only by IE Full Elements.
    std::shared_ptr<int64_t> executeScript_ = nullptr;
    // Specifies whether to filter invalid IP addresses.
    // 
    // *   1: no
    // *   0: yes
    std::shared_ptr<int64_t> filterInvalidIP_ = nullptr;
    // The element that is used in DNS hijacking.
    std::shared_ptr<int64_t> flowHijackJumpTimes_ = nullptr;
    // The tag that is used in DNS hijacking.
    std::shared_ptr<string> flowHijackLogo_ = nullptr;
    // The timeout period of monitoring. Unit: seconds.
    std::shared_ptr<string> monitorTimeout_ = nullptr;
    // Specifies whether to automatically scroll up and down the screen to load a page.
    // 
    // *   1: yes
    // *   0: no
    std::shared_ptr<string> navAutomaticScrolling_ = nullptr;
    // The method that is used to customize the header. Valid values:
    // 
    // *   0: disables the customer header.
    // *   1: modifies the first package.
    // *   2: modifies all packages.
    std::shared_ptr<string> navCustomHeader_ = nullptr;
    // The format of the custom header. You can specify multiple fields. Separate the fields with vertical bars (|).
    std::shared_ptr<string> navCustomHeaderContent_ = nullptr;
    // The custom host mode.
    // 
    // *   1: round robin
    // *   0: random
    std::shared_ptr<int64_t> navCustomHost_ = nullptr;
    // The custom host IP address. You can enter multiple IP addresses. Separate the IP addresses with commas (,).
    std::shared_ptr<string> navCustomHostIp_ = nullptr;
    // Specifies whether to disable caching.
    // 
    // *   1: disable
    // *   0: enable
    std::shared_ptr<int64_t> navDisableCache_ = nullptr;
    // Specifies whether to enable the feature of using the Accept-Encoding field to determine whether to accept compressed files.
    // 
    // *   1: disable
    // *   0: enable
    std::shared_ptr<string> navDisableCompression_ = nullptr;
    // Specifies whether to ignore certificate errors during certificate verification in the SSL handshake and continue browsing.
    // 
    // *   1: ignore
    // *   0: does not ignore
    std::shared_ptr<int64_t> navIgnoreCertificateError_ = nullptr;
    // Specifies whether to continue browsing after a redirection occurs.
    // 
    // *   1: yes
    // *   0: no
    std::shared_ptr<int64_t> navRedirection_ = nullptr;
    // Specifies whether to return the elements on the page.
    // 
    // *   1: no. Returns the basic document data.
    // *   2: yes. Returns all document data.
    std::shared_ptr<int64_t> navReturnElement_ = nullptr;
    // The web page defacement.
    std::shared_ptr<string> pageTamper_ = nullptr;
    // The process ID.
    std::shared_ptr<string> processName_ = nullptr;
    // The domain name of the QUIC request element.
    // 
    // >  This parameter is supported by all elements of only Chrome
    std::shared_ptr<string> QUICDomain_ = nullptr;
    // The Quick UDP Internet Connections (QUIC) protocol version. Default value: 0. Valid values:
    // 
    // *
    // *   35
    // *   39
    // *   43
    // *   44
    // 
    // >  This parameter is supported by all elements of only Chrome
    std::shared_ptr<int64_t> QUICVersion_ = nullptr;
    // Specifies whether to return the request header.
    // 
    // *   0: does not return the response header.
    // *   1: returns the basic document header.
    // *   2: returns all headers.
    std::shared_ptr<int64_t> requestHeader_ = nullptr;
    // The method that is used to return the response header. Valid values:
    // 
    // *   0: does not return the response header.
    // *   1: returns the basic document header.
    // *   2: returns all headers.
    std::shared_ptr<int64_t> responseHeader_ = nullptr;
    // The time threshold that is used to define a slow element. Unit: seconds.
    std::shared_ptr<double> slowElementThreshold_ = nullptr;
    // The blacklist for string verification.
    std::shared_ptr<string> verifyStringBlacklist_ = nullptr;
    // The whitelist for string verification.
    std::shared_ptr<string> verifyStringWhiteList_ = nullptr;
    // The timeout period of waiting for the monitoring to complete.
    std::shared_ptr<double> waitCompletionTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
