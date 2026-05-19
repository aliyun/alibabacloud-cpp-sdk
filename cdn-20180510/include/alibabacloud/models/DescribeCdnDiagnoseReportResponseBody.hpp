// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDIAGNOSEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDIAGNOSEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDiagnoseReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnDiagnoseReportResponseBody() = default ;
    DescribeCdnDiagnoseReportResponseBody(const DescribeCdnDiagnoseReportResponseBody &) = default ;
    DescribeCdnDiagnoseReportResponseBody(DescribeCdnDiagnoseReportResponseBody &&) = default ;
    DescribeCdnDiagnoseReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDiagnoseReportResponseBody() = default ;
    DescribeCdnDiagnoseReportResponseBody& operator=(const DescribeCdnDiagnoseReportResponseBody &) = default ;
    DescribeCdnDiagnoseReportResponseBody& operator=(DescribeCdnDiagnoseReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
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
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TimeConsuming, timeConsuming_);
        DARABONBA_PTR_TO_JSON(TraceDisplayLink, traceDisplayLink_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
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
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TimeConsuming, timeConsuming_);
        DARABONBA_PTR_FROM_JSON(TraceDisplayLink, traceDisplayLink_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Report : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Report& obj) { 
          DARABONBA_PTR_TO_JSON(ClientInfo, clientInfo_);
          DARABONBA_PTR_TO_JSON(DiagnoseResult, diagnoseResult_);
          DARABONBA_PTR_TO_JSON(L1Node, l1Node_);
          DARABONBA_PTR_TO_JSON(L1Tengine, l1Tengine_);
          DARABONBA_PTR_TO_JSON(SourceInfo, sourceInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Report& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfo_);
          DARABONBA_PTR_FROM_JSON(DiagnoseResult, diagnoseResult_);
          DARABONBA_PTR_FROM_JSON(L1Node, l1Node_);
          DARABONBA_PTR_FROM_JSON(L1Tengine, l1Tengine_);
          DARABONBA_PTR_FROM_JSON(SourceInfo, sourceInfo_);
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
        class L1Tengine : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const L1Tengine& obj) { 
            DARABONBA_PTR_TO_JSON(Addr, addr_);
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(ErrorLog, errorLog_);
            DARABONBA_PTR_TO_JSON(Fbt, fbt_);
            DARABONBA_PTR_TO_JSON(Intro, intro_);
            DARABONBA_PTR_TO_JSON(ReqHeader, reqHeader_);
            DARABONBA_PTR_TO_JSON(ReqTime, reqTime_);
            DARABONBA_PTR_TO_JSON(RespHeader, respHeader_);
            DARABONBA_PTR_TO_JSON(RespSize, respSize_);
            DARABONBA_PTR_TO_JSON(Rt, rt_);
            DARABONBA_PTR_TO_JSON(Station, station_);
          };
          friend void from_json(const Darabonba::Json& j, L1Tengine& obj) { 
            DARABONBA_PTR_FROM_JSON(Addr, addr_);
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(ErrorLog, errorLog_);
            DARABONBA_PTR_FROM_JSON(Fbt, fbt_);
            DARABONBA_PTR_FROM_JSON(Intro, intro_);
            DARABONBA_PTR_FROM_JSON(ReqHeader, reqHeader_);
            DARABONBA_PTR_FROM_JSON(ReqTime, reqTime_);
            DARABONBA_PTR_FROM_JSON(RespHeader, respHeader_);
            DARABONBA_PTR_FROM_JSON(RespSize, respSize_);
            DARABONBA_PTR_FROM_JSON(Rt, rt_);
            DARABONBA_PTR_FROM_JSON(Station, station_);
          };
          L1Tengine() = default ;
          L1Tengine(const L1Tengine &) = default ;
          L1Tengine(L1Tengine &&) = default ;
          L1Tengine(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~L1Tengine() = default ;
          L1Tengine& operator=(const L1Tengine &) = default ;
          L1Tengine& operator=(L1Tengine &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->addr_ == nullptr
        && this->code_ == nullptr && this->errorLog_ == nullptr && this->fbt_ == nullptr && this->intro_ == nullptr && this->reqHeader_ == nullptr
        && this->reqTime_ == nullptr && this->respHeader_ == nullptr && this->respSize_ == nullptr && this->rt_ == nullptr && this->station_ == nullptr; };
          // addr Field Functions 
          bool hasAddr() const { return this->addr_ != nullptr;};
          void deleteAddr() { this->addr_ = nullptr;};
          inline string getAddr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
          inline L1Tengine& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline L1Tengine& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // errorLog Field Functions 
          bool hasErrorLog() const { return this->errorLog_ != nullptr;};
          void deleteErrorLog() { this->errorLog_ = nullptr;};
          inline string getErrorLog() const { DARABONBA_PTR_GET_DEFAULT(errorLog_, "") };
          inline L1Tengine& setErrorLog(string errorLog) { DARABONBA_PTR_SET_VALUE(errorLog_, errorLog) };


          // fbt Field Functions 
          bool hasFbt() const { return this->fbt_ != nullptr;};
          void deleteFbt() { this->fbt_ = nullptr;};
          inline string getFbt() const { DARABONBA_PTR_GET_DEFAULT(fbt_, "") };
          inline L1Tengine& setFbt(string fbt) { DARABONBA_PTR_SET_VALUE(fbt_, fbt) };


          // intro Field Functions 
          bool hasIntro() const { return this->intro_ != nullptr;};
          void deleteIntro() { this->intro_ = nullptr;};
          inline string getIntro() const { DARABONBA_PTR_GET_DEFAULT(intro_, "") };
          inline L1Tengine& setIntro(string intro) { DARABONBA_PTR_SET_VALUE(intro_, intro) };


          // reqHeader Field Functions 
          bool hasReqHeader() const { return this->reqHeader_ != nullptr;};
          void deleteReqHeader() { this->reqHeader_ = nullptr;};
          inline string getReqHeader() const { DARABONBA_PTR_GET_DEFAULT(reqHeader_, "") };
          inline L1Tengine& setReqHeader(string reqHeader) { DARABONBA_PTR_SET_VALUE(reqHeader_, reqHeader) };


          // reqTime Field Functions 
          bool hasReqTime() const { return this->reqTime_ != nullptr;};
          void deleteReqTime() { this->reqTime_ = nullptr;};
          inline string getReqTime() const { DARABONBA_PTR_GET_DEFAULT(reqTime_, "") };
          inline L1Tengine& setReqTime(string reqTime) { DARABONBA_PTR_SET_VALUE(reqTime_, reqTime) };


          // respHeader Field Functions 
          bool hasRespHeader() const { return this->respHeader_ != nullptr;};
          void deleteRespHeader() { this->respHeader_ = nullptr;};
          inline string getRespHeader() const { DARABONBA_PTR_GET_DEFAULT(respHeader_, "") };
          inline L1Tengine& setRespHeader(string respHeader) { DARABONBA_PTR_SET_VALUE(respHeader_, respHeader) };


          // respSize Field Functions 
          bool hasRespSize() const { return this->respSize_ != nullptr;};
          void deleteRespSize() { this->respSize_ = nullptr;};
          inline int64_t getRespSize() const { DARABONBA_PTR_GET_DEFAULT(respSize_, 0L) };
          inline L1Tengine& setRespSize(int64_t respSize) { DARABONBA_PTR_SET_VALUE(respSize_, respSize) };


          // rt Field Functions 
          bool hasRt() const { return this->rt_ != nullptr;};
          void deleteRt() { this->rt_ = nullptr;};
          inline string getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, "") };
          inline L1Tengine& setRt(string rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


          // station Field Functions 
          bool hasStation() const { return this->station_ != nullptr;};
          void deleteStation() { this->station_ = nullptr;};
          inline string getStation() const { DARABONBA_PTR_GET_DEFAULT(station_, "") };
          inline L1Tengine& setStation(string station) { DARABONBA_PTR_SET_VALUE(station_, station) };


        protected:
          shared_ptr<string> addr_ {};
          shared_ptr<string> code_ {};
          shared_ptr<string> errorLog_ {};
          shared_ptr<string> fbt_ {};
          shared_ptr<string> intro_ {};
          shared_ptr<string> reqHeader_ {};
          shared_ptr<string> reqTime_ {};
          shared_ptr<string> respHeader_ {};
          shared_ptr<int64_t> respSize_ {};
          shared_ptr<string> rt_ {};
          shared_ptr<string> station_ {};
        };

        virtual bool empty() const override { return this->clientInfo_ == nullptr
        && this->diagnoseResult_ == nullptr && this->l1Node_ == nullptr && this->l1Tengine_ == nullptr && this->sourceInfo_ == nullptr; };
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


        // l1Node Field Functions 
        bool hasL1Node() const { return this->l1Node_ != nullptr;};
        void deleteL1Node() { this->l1Node_ = nullptr;};
        inline string getL1Node() const { DARABONBA_PTR_GET_DEFAULT(l1Node_, "") };
        inline Report& setL1Node(string l1Node) { DARABONBA_PTR_SET_VALUE(l1Node_, l1Node) };


        // l1Tengine Field Functions 
        bool hasL1Tengine() const { return this->l1Tengine_ != nullptr;};
        void deleteL1Tengine() { this->l1Tengine_ = nullptr;};
        inline const Report::L1Tengine & getL1Tengine() const { DARABONBA_PTR_GET_CONST(l1Tengine_, Report::L1Tengine) };
        inline Report::L1Tengine getL1Tengine() { DARABONBA_PTR_GET(l1Tengine_, Report::L1Tengine) };
        inline Report& setL1Tengine(const Report::L1Tengine & l1Tengine) { DARABONBA_PTR_SET_VALUE(l1Tengine_, l1Tengine) };
        inline Report& setL1Tengine(Report::L1Tengine && l1Tengine) { DARABONBA_PTR_SET_RVALUE(l1Tengine_, l1Tengine) };


        // sourceInfo Field Functions 
        bool hasSourceInfo() const { return this->sourceInfo_ != nullptr;};
        void deleteSourceInfo() { this->sourceInfo_ = nullptr;};
        inline const vector<string> & getSourceInfo() const { DARABONBA_PTR_GET_CONST(sourceInfo_, vector<string>) };
        inline vector<string> getSourceInfo() { DARABONBA_PTR_GET(sourceInfo_, vector<string>) };
        inline Report& setSourceInfo(const vector<string> & sourceInfo) { DARABONBA_PTR_SET_VALUE(sourceInfo_, sourceInfo) };
        inline Report& setSourceInfo(vector<string> && sourceInfo) { DARABONBA_PTR_SET_RVALUE(sourceInfo_, sourceInfo) };


      protected:
        shared_ptr<string> clientInfo_ {};
        shared_ptr<string> diagnoseResult_ {};
        shared_ptr<string> l1Node_ {};
        shared_ptr<Report::L1Tengine> l1Tengine_ {};
        shared_ptr<vector<string>> sourceInfo_ {};
      };

      class ClientInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BrowserInfo, browserInfo_);
          DARABONBA_PTR_TO_JSON(Os, os_);
          DARABONBA_PTR_TO_JSON(UAString, UAString_);
        };
        friend void from_json(const Darabonba::Json& j, ClientInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BrowserInfo, browserInfo_);
          DARABONBA_PTR_FROM_JSON(Os, os_);
          DARABONBA_PTR_FROM_JSON(UAString, UAString_);
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
        && this->os_ == nullptr && this->UAString_ == nullptr; };
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


        // UAString Field Functions 
        bool hasUAString() const { return this->UAString_ != nullptr;};
        void deleteUAString() { this->UAString_ = nullptr;};
        inline string getUAString() const { DARABONBA_PTR_GET_DEFAULT(UAString_, "") };
        inline ClientInfo& setUAString(string UAString) { DARABONBA_PTR_SET_VALUE(UAString_, UAString) };


      protected:
        shared_ptr<string> browserInfo_ {};
        shared_ptr<string> os_ {};
        shared_ptr<string> UAString_ {};
      };

      virtual bool empty() const override { return this->aliuid_ == nullptr
        && this->clientAddr_ == nullptr && this->clientInfo_ == nullptr && this->clientIp_ == nullptr && this->createTime_ == nullptr && this->diagnoseId_ == nullptr
        && this->diagnoseReportLink_ == nullptr && this->diagnoseUrl_ == nullptr && this->domain_ == nullptr && this->expireTime_ == nullptr && this->remainDiagnoseTimes_ == nullptr
        && this->report_ == nullptr && this->state_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->timeConsuming_ == nullptr
        && this->traceDisplayLink_ == nullptr && this->traceId_ == nullptr; };
      // aliuid Field Functions 
      bool hasAliuid() const { return this->aliuid_ != nullptr;};
      void deleteAliuid() { this->aliuid_ = nullptr;};
      inline string getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
      inline Content& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


      // clientAddr Field Functions 
      bool hasClientAddr() const { return this->clientAddr_ != nullptr;};
      void deleteClientAddr() { this->clientAddr_ = nullptr;};
      inline string getClientAddr() const { DARABONBA_PTR_GET_DEFAULT(clientAddr_, "") };
      inline Content& setClientAddr(string clientAddr) { DARABONBA_PTR_SET_VALUE(clientAddr_, clientAddr) };


      // clientInfo Field Functions 
      bool hasClientInfo() const { return this->clientInfo_ != nullptr;};
      void deleteClientInfo() { this->clientInfo_ = nullptr;};
      inline const Content::ClientInfo & getClientInfo() const { DARABONBA_PTR_GET_CONST(clientInfo_, Content::ClientInfo) };
      inline Content::ClientInfo getClientInfo() { DARABONBA_PTR_GET(clientInfo_, Content::ClientInfo) };
      inline Content& setClientInfo(const Content::ClientInfo & clientInfo) { DARABONBA_PTR_SET_VALUE(clientInfo_, clientInfo) };
      inline Content& setClientInfo(Content::ClientInfo && clientInfo) { DARABONBA_PTR_SET_RVALUE(clientInfo_, clientInfo) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Content& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Content& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // diagnoseId Field Functions 
      bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
      void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
      inline string getDiagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
      inline Content& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


      // diagnoseReportLink Field Functions 
      bool hasDiagnoseReportLink() const { return this->diagnoseReportLink_ != nullptr;};
      void deleteDiagnoseReportLink() { this->diagnoseReportLink_ = nullptr;};
      inline string getDiagnoseReportLink() const { DARABONBA_PTR_GET_DEFAULT(diagnoseReportLink_, "") };
      inline Content& setDiagnoseReportLink(string diagnoseReportLink) { DARABONBA_PTR_SET_VALUE(diagnoseReportLink_, diagnoseReportLink) };


      // diagnoseUrl Field Functions 
      bool hasDiagnoseUrl() const { return this->diagnoseUrl_ != nullptr;};
      void deleteDiagnoseUrl() { this->diagnoseUrl_ = nullptr;};
      inline string getDiagnoseUrl() const { DARABONBA_PTR_GET_DEFAULT(diagnoseUrl_, "") };
      inline Content& setDiagnoseUrl(string diagnoseUrl) { DARABONBA_PTR_SET_VALUE(diagnoseUrl_, diagnoseUrl) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Content& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Content& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // remainDiagnoseTimes Field Functions 
      bool hasRemainDiagnoseTimes() const { return this->remainDiagnoseTimes_ != nullptr;};
      void deleteRemainDiagnoseTimes() { this->remainDiagnoseTimes_ = nullptr;};
      inline int64_t getRemainDiagnoseTimes() const { DARABONBA_PTR_GET_DEFAULT(remainDiagnoseTimes_, 0L) };
      inline Content& setRemainDiagnoseTimes(int64_t remainDiagnoseTimes) { DARABONBA_PTR_SET_VALUE(remainDiagnoseTimes_, remainDiagnoseTimes) };


      // report Field Functions 
      bool hasReport() const { return this->report_ != nullptr;};
      void deleteReport() { this->report_ = nullptr;};
      inline const Content::Report & getReport() const { DARABONBA_PTR_GET_CONST(report_, Content::Report) };
      inline Content::Report getReport() { DARABONBA_PTR_GET(report_, Content::Report) };
      inline Content& setReport(const Content::Report & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
      inline Content& setReport(Content::Report && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Content& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline Content& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Content& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // timeConsuming Field Functions 
      bool hasTimeConsuming() const { return this->timeConsuming_ != nullptr;};
      void deleteTimeConsuming() { this->timeConsuming_ = nullptr;};
      inline int64_t getTimeConsuming() const { DARABONBA_PTR_GET_DEFAULT(timeConsuming_, 0L) };
      inline Content& setTimeConsuming(int64_t timeConsuming) { DARABONBA_PTR_SET_VALUE(timeConsuming_, timeConsuming) };


      // traceDisplayLink Field Functions 
      bool hasTraceDisplayLink() const { return this->traceDisplayLink_ != nullptr;};
      void deleteTraceDisplayLink() { this->traceDisplayLink_ = nullptr;};
      inline string getTraceDisplayLink() const { DARABONBA_PTR_GET_DEFAULT(traceDisplayLink_, "") };
      inline Content& setTraceDisplayLink(string traceDisplayLink) { DARABONBA_PTR_SET_VALUE(traceDisplayLink_, traceDisplayLink) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Content& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    protected:
      shared_ptr<string> aliuid_ {};
      shared_ptr<string> clientAddr_ {};
      shared_ptr<Content::ClientInfo> clientInfo_ {};
      shared_ptr<string> clientIp_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> diagnoseId_ {};
      shared_ptr<string> diagnoseReportLink_ {};
      shared_ptr<string> diagnoseUrl_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<int64_t> remainDiagnoseTimes_ {};
      shared_ptr<Content::Report> report_ {};
      shared_ptr<string> state_ {};
      shared_ptr<int64_t> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<int64_t> timeConsuming_ {};
      shared_ptr<string> traceDisplayLink_ {};
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeCdnDiagnoseReportResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeCdnDiagnoseReportResponseBody::Content) };
    inline DescribeCdnDiagnoseReportResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeCdnDiagnoseReportResponseBody::Content) };
    inline DescribeCdnDiagnoseReportResponseBody& setContent(const DescribeCdnDiagnoseReportResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeCdnDiagnoseReportResponseBody& setContent(DescribeCdnDiagnoseReportResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnDiagnoseReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeCdnDiagnoseReportResponseBody::Content> content_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
