// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEDIAGNOSEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEDIAGNOSEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeTraceDiagnoseReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientAddr, clientAddr_);
      DARABONBA_PTR_TO_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_TO_JSON(DiagnoseReportLink, diagnoseReportLink_);
      DARABONBA_PTR_TO_JSON(DiagnoseUrl, diagnoseUrl_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(RemainDiagnoseTimes, remainDiagnoseTimes_);
      DARABONBA_PTR_TO_JSON(Report, report_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TimeConsuming, timeConsuming_);
      DARABONBA_PTR_TO_JSON(TraceDisplayLink, traceDisplayLink_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientAddr, clientAddr_);
      DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_FROM_JSON(DiagnoseReportLink, diagnoseReportLink_);
      DARABONBA_PTR_FROM_JSON(DiagnoseUrl, diagnoseUrl_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(RemainDiagnoseTimes, remainDiagnoseTimes_);
      DARABONBA_PTR_FROM_JSON(Report, report_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TimeConsuming, timeConsuming_);
      DARABONBA_PTR_FROM_JSON(TraceDisplayLink, traceDisplayLink_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeTraceDiagnoseReportResponseBody() = default ;
    DescribeTraceDiagnoseReportResponseBody(const DescribeTraceDiagnoseReportResponseBody &) = default ;
    DescribeTraceDiagnoseReportResponseBody(DescribeTraceDiagnoseReportResponseBody &&) = default ;
    DescribeTraceDiagnoseReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceDiagnoseReportResponseBody() = default ;
    DescribeTraceDiagnoseReportResponseBody& operator=(const DescribeTraceDiagnoseReportResponseBody &) = default ;
    DescribeTraceDiagnoseReportResponseBody& operator=(DescribeTraceDiagnoseReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Report : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Report& obj) { 
        DARABONBA_PTR_TO_JSON(ClientInfo, clientInfo_);
        DARABONBA_PTR_TO_JSON(DiagnoseResult, diagnoseResult_);
        DARABONBA_PTR_TO_JSON(ResponseHeader, responseHeader_);
        DARABONBA_PTR_TO_JSON(StaticHtml, staticHtml_);
      };
      friend void from_json(const Darabonba::Json& j, Report& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfo_);
        DARABONBA_PTR_FROM_JSON(DiagnoseResult, diagnoseResult_);
        DARABONBA_PTR_FROM_JSON(ResponseHeader, responseHeader_);
        DARABONBA_PTR_FROM_JSON(StaticHtml, staticHtml_);
      };
      Report() = default ;
      Report(const Report &) = default ;
      Report(Report &&) = default ;
      Report(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Report() = default ;
      Report& operator=(const Report &) = default ;
      Report& operator=(Report &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientInfo_ == nullptr
        && this->diagnoseResult_ == nullptr && this->responseHeader_ == nullptr && this->staticHtml_ == nullptr; };
      // clientInfo Field Functions 
      bool hasClientInfo() const { return this->clientInfo_ != nullptr;};
      void deleteClientInfo() { this->clientInfo_ = nullptr;};
      inline string getClientInfo() const { DARABONBA_PTR_GET_DEFAULT(clientInfo_, "") };
      inline Report& setClientInfo(string clientInfo) { DARABONBA_PTR_SET_VALUE(clientInfo_, clientInfo) };


      // diagnoseResult Field Functions 
      bool hasDiagnoseResult() const { return this->diagnoseResult_ != nullptr;};
      void deleteDiagnoseResult() { this->diagnoseResult_ = nullptr;};
      inline string getDiagnoseResult() const { DARABONBA_PTR_GET_DEFAULT(diagnoseResult_, "") };
      inline Report& setDiagnoseResult(string diagnoseResult) { DARABONBA_PTR_SET_VALUE(diagnoseResult_, diagnoseResult) };


      // responseHeader Field Functions 
      bool hasResponseHeader() const { return this->responseHeader_ != nullptr;};
      void deleteResponseHeader() { this->responseHeader_ = nullptr;};
      inline string getResponseHeader() const { DARABONBA_PTR_GET_DEFAULT(responseHeader_, "") };
      inline Report& setResponseHeader(string responseHeader) { DARABONBA_PTR_SET_VALUE(responseHeader_, responseHeader) };


      // staticHtml Field Functions 
      bool hasStaticHtml() const { return this->staticHtml_ != nullptr;};
      void deleteStaticHtml() { this->staticHtml_ = nullptr;};
      inline string getStaticHtml() const { DARABONBA_PTR_GET_DEFAULT(staticHtml_, "") };
      inline Report& setStaticHtml(string staticHtml) { DARABONBA_PTR_SET_VALUE(staticHtml_, staticHtml) };


    protected:
      // The client information.
      shared_ptr<string> clientInfo_ {};
      // The diagnostic result.
      shared_ptr<string> diagnoseResult_ {};
      // The response header of the client request.
      shared_ptr<string> responseHeader_ {};
      // The static snapshot page.
      shared_ptr<string> staticHtml_ {};
    };

    class ClientInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BrowserInfo, browserInfo_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(UaString, uaString_);
      };
      friend void from_json(const Darabonba::Json& j, ClientInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BrowserInfo, browserInfo_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(UaString, uaString_);
      };
      ClientInfo() = default ;
      ClientInfo(const ClientInfo &) = default ;
      ClientInfo(ClientInfo &&) = default ;
      ClientInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientInfo() = default ;
      ClientInfo& operator=(const ClientInfo &) = default ;
      ClientInfo& operator=(ClientInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->browserInfo_ == nullptr
        && this->os_ == nullptr && this->uaString_ == nullptr; };
      // browserInfo Field Functions 
      bool hasBrowserInfo() const { return this->browserInfo_ != nullptr;};
      void deleteBrowserInfo() { this->browserInfo_ = nullptr;};
      inline string getBrowserInfo() const { DARABONBA_PTR_GET_DEFAULT(browserInfo_, "") };
      inline ClientInfo& setBrowserInfo(string browserInfo) { DARABONBA_PTR_SET_VALUE(browserInfo_, browserInfo) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline ClientInfo& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // uaString Field Functions 
      bool hasUaString() const { return this->uaString_ != nullptr;};
      void deleteUaString() { this->uaString_ = nullptr;};
      inline string getUaString() const { DARABONBA_PTR_GET_DEFAULT(uaString_, "") };
      inline ClientInfo& setUaString(string uaString) { DARABONBA_PTR_SET_VALUE(uaString_, uaString) };


    protected:
      // The browser.
      shared_ptr<string> browserInfo_ {};
      // The operating system name.
      shared_ptr<string> os_ {};
      // The version.
      shared_ptr<string> uaString_ {};
    };

    virtual bool empty() const override { return this->clientAddr_ == nullptr
        && this->clientInfo_ == nullptr && this->clientIp_ == nullptr && this->createTime_ == nullptr && this->diagnoseId_ == nullptr && this->diagnoseReportLink_ == nullptr
        && this->diagnoseUrl_ == nullptr && this->domain_ == nullptr && this->expireTime_ == nullptr && this->remainDiagnoseTimes_ == nullptr && this->report_ == nullptr
        && this->requestId_ == nullptr && this->state_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->timeConsuming_ == nullptr
        && this->traceDisplayLink_ == nullptr && this->traceId_ == nullptr; };
    // clientAddr Field Functions 
    bool hasClientAddr() const { return this->clientAddr_ != nullptr;};
    void deleteClientAddr() { this->clientAddr_ = nullptr;};
    inline string getClientAddr() const { DARABONBA_PTR_GET_DEFAULT(clientAddr_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setClientAddr(string clientAddr) { DARABONBA_PTR_SET_VALUE(clientAddr_, clientAddr) };


    // clientInfo Field Functions 
    bool hasClientInfo() const { return this->clientInfo_ != nullptr;};
    void deleteClientInfo() { this->clientInfo_ = nullptr;};
    inline const DescribeTraceDiagnoseReportResponseBody::ClientInfo & getClientInfo() const { DARABONBA_PTR_GET_CONST(clientInfo_, DescribeTraceDiagnoseReportResponseBody::ClientInfo) };
    inline DescribeTraceDiagnoseReportResponseBody::ClientInfo getClientInfo() { DARABONBA_PTR_GET(clientInfo_, DescribeTraceDiagnoseReportResponseBody::ClientInfo) };
    inline DescribeTraceDiagnoseReportResponseBody& setClientInfo(const DescribeTraceDiagnoseReportResponseBody::ClientInfo & clientInfo) { DARABONBA_PTR_SET_VALUE(clientInfo_, clientInfo) };
    inline DescribeTraceDiagnoseReportResponseBody& setClientInfo(DescribeTraceDiagnoseReportResponseBody::ClientInfo && clientInfo) { DARABONBA_PTR_SET_RVALUE(clientInfo_, clientInfo) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // diagnoseId Field Functions 
    bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
    void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
    inline string getDiagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


    // diagnoseReportLink Field Functions 
    bool hasDiagnoseReportLink() const { return this->diagnoseReportLink_ != nullptr;};
    void deleteDiagnoseReportLink() { this->diagnoseReportLink_ = nullptr;};
    inline string getDiagnoseReportLink() const { DARABONBA_PTR_GET_DEFAULT(diagnoseReportLink_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setDiagnoseReportLink(string diagnoseReportLink) { DARABONBA_PTR_SET_VALUE(diagnoseReportLink_, diagnoseReportLink) };


    // diagnoseUrl Field Functions 
    bool hasDiagnoseUrl() const { return this->diagnoseUrl_ != nullptr;};
    void deleteDiagnoseUrl() { this->diagnoseUrl_ = nullptr;};
    inline string getDiagnoseUrl() const { DARABONBA_PTR_GET_DEFAULT(diagnoseUrl_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setDiagnoseUrl(string diagnoseUrl) { DARABONBA_PTR_SET_VALUE(diagnoseUrl_, diagnoseUrl) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeTraceDiagnoseReportResponseBody& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // remainDiagnoseTimes Field Functions 
    bool hasRemainDiagnoseTimes() const { return this->remainDiagnoseTimes_ != nullptr;};
    void deleteRemainDiagnoseTimes() { this->remainDiagnoseTimes_ = nullptr;};
    inline int64_t getRemainDiagnoseTimes() const { DARABONBA_PTR_GET_DEFAULT(remainDiagnoseTimes_, 0L) };
    inline DescribeTraceDiagnoseReportResponseBody& setRemainDiagnoseTimes(int64_t remainDiagnoseTimes) { DARABONBA_PTR_SET_VALUE(remainDiagnoseTimes_, remainDiagnoseTimes) };


    // report Field Functions 
    bool hasReport() const { return this->report_ != nullptr;};
    void deleteReport() { this->report_ = nullptr;};
    inline const DescribeTraceDiagnoseReportResponseBody::Report & getReport() const { DARABONBA_PTR_GET_CONST(report_, DescribeTraceDiagnoseReportResponseBody::Report) };
    inline DescribeTraceDiagnoseReportResponseBody::Report getReport() { DARABONBA_PTR_GET(report_, DescribeTraceDiagnoseReportResponseBody::Report) };
    inline DescribeTraceDiagnoseReportResponseBody& setReport(const DescribeTraceDiagnoseReportResponseBody::Report & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
    inline DescribeTraceDiagnoseReportResponseBody& setReport(DescribeTraceDiagnoseReportResponseBody::Report && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline DescribeTraceDiagnoseReportResponseBody& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timeConsuming Field Functions 
    bool hasTimeConsuming() const { return this->timeConsuming_ != nullptr;};
    void deleteTimeConsuming() { this->timeConsuming_ = nullptr;};
    inline int64_t getTimeConsuming() const { DARABONBA_PTR_GET_DEFAULT(timeConsuming_, 0L) };
    inline DescribeTraceDiagnoseReportResponseBody& setTimeConsuming(int64_t timeConsuming) { DARABONBA_PTR_SET_VALUE(timeConsuming_, timeConsuming) };


    // traceDisplayLink Field Functions 
    bool hasTraceDisplayLink() const { return this->traceDisplayLink_ != nullptr;};
    void deleteTraceDisplayLink() { this->traceDisplayLink_ = nullptr;};
    inline string getTraceDisplayLink() const { DARABONBA_PTR_GET_DEFAULT(traceDisplayLink_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setTraceDisplayLink(string traceDisplayLink) { DARABONBA_PTR_SET_VALUE(traceDisplayLink_, traceDisplayLink) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeTraceDiagnoseReportResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The IP address of the local DNS server.
    shared_ptr<string> clientAddr_ {};
    // The client information.
    shared_ptr<DescribeTraceDiagnoseReportResponseBody::ClientInfo> clientInfo_ {};
    // The client IP address.
    shared_ptr<string> clientIp_ {};
    // The creation time. Format: yyyy-MM-dd HH:mm:ss. Time zone: UTC+8.
    shared_ptr<string> createTime_ {};
    // The diagnostic ID.
    shared_ptr<string> diagnoseId_ {};
    // The diagnostic report link.
    shared_ptr<string> diagnoseReportLink_ {};
    // The diagnostic link.
    shared_ptr<string> diagnoseUrl_ {};
    // The diagnosed domain name.
    shared_ptr<string> domain_ {};
    // The expiration time. Unit: seconds. The value is a UNIX timestamp.
    shared_ptr<int64_t> expireTime_ {};
    // The remaining number of available diagnostic attempts.
    shared_ptr<int64_t> remainDiagnoseTimes_ {};
    // The diagnostic report details.
    shared_ptr<DescribeTraceDiagnoseReportResponseBody::Report> report_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The report generation status. Valid values:
    // 
    // 0: succeeded.
    // 1: failed.
    // 2: timed out.
    // 3: running.
    // 4: waiting.
    shared_ptr<string> state_ {};
    // The status of the diagnostic link. Valid values:
    // 
    // 1: active.
    // 0: expired.
    shared_ptr<int64_t> status_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The time consumed to generate the report. Unit: seconds.
    shared_ptr<int64_t> timeConsuming_ {};
    // The trace display link.
    shared_ptr<string> traceDisplayLink_ {};
    // The diagnostic trace ID.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
