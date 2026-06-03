// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class GetLogListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Incomplete, incomplete_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Incomplete, incomplete_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetLogListResponseBody() = default ;
    GetLogListResponseBody(const GetLogListResponseBody &) = default ;
    GetLogListResponseBody(GetLogListResponseBody &&) = default ;
    GetLogListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogListResponseBody() = default ;
    GetLogListResponseBody& operator=(const GetLogListResponseBody &) = default ;
    GetLogListResponseBody& operator=(GetLogListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_TO_JSON(AppClientIp, appClientIp_);
        DARABONBA_PTR_TO_JSON(AppUsername, appUsername_);
        DARABONBA_PTR_TO_JSON(CaptureTime, captureTime_);
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(ClientIpAlias, clientIpAlias_);
        DARABONBA_PTR_TO_JSON(ClientMac, clientMac_);
        DARABONBA_PTR_TO_JSON(ClientOsUser, clientOsUser_);
        DARABONBA_PTR_TO_JSON(ClientPort, clientPort_);
        DARABONBA_PTR_TO_JSON(ClientProgram, clientProgram_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(DbServer, dbServer_);
        DARABONBA_PTR_TO_JSON(DbUser, dbUser_);
        DARABONBA_PTR_TO_JSON(ExecCostUS, execCostUS_);
        DARABONBA_PTR_TO_JSON(FetchCostUS, fetchCostUS_);
        DARABONBA_PTR_TO_JSON(InstName, instName_);
        DARABONBA_PTR_TO_JSON(ResponseCode, responseCode_);
        DARABONBA_PTR_TO_JSON(ResponseText, responseText_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleKeyId, ruleKeyId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(Schema, schema_);
        DARABONBA_PTR_TO_JSON(ServerMac, serverMac_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(SessionLoginTime, sessionLoginTime_);
        DARABONBA_PTR_TO_JSON(SessionLogoutTime, sessionLogoutTime_);
        DARABONBA_PTR_TO_JSON(SqlContent, sqlContent_);
        DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
        DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_FROM_JSON(AppClientIp, appClientIp_);
        DARABONBA_PTR_FROM_JSON(AppUsername, appUsername_);
        DARABONBA_PTR_FROM_JSON(CaptureTime, captureTime_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(ClientIpAlias, clientIpAlias_);
        DARABONBA_PTR_FROM_JSON(ClientMac, clientMac_);
        DARABONBA_PTR_FROM_JSON(ClientOsUser, clientOsUser_);
        DARABONBA_PTR_FROM_JSON(ClientPort, clientPort_);
        DARABONBA_PTR_FROM_JSON(ClientProgram, clientProgram_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(DbServer, dbServer_);
        DARABONBA_PTR_FROM_JSON(DbUser, dbUser_);
        DARABONBA_PTR_FROM_JSON(ExecCostUS, execCostUS_);
        DARABONBA_PTR_FROM_JSON(FetchCostUS, fetchCostUS_);
        DARABONBA_PTR_FROM_JSON(InstName, instName_);
        DARABONBA_PTR_FROM_JSON(ResponseCode, responseCode_);
        DARABONBA_PTR_FROM_JSON(ResponseText, responseText_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleKeyId, ruleKeyId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(Schema, schema_);
        DARABONBA_PTR_FROM_JSON(ServerMac, serverMac_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(SessionLoginTime, sessionLoginTime_);
        DARABONBA_PTR_FROM_JSON(SessionLogoutTime, sessionLogoutTime_);
        DARABONBA_PTR_FROM_JSON(SqlContent, sqlContent_);
        DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
        DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->appClientIp_ == nullptr && this->appUsername_ == nullptr && this->captureTime_ == nullptr && this->clientIp_ == nullptr && this->clientIpAlias_ == nullptr
        && this->clientMac_ == nullptr && this->clientOsUser_ == nullptr && this->clientPort_ == nullptr && this->clientProgram_ == nullptr && this->dbId_ == nullptr
        && this->dbServer_ == nullptr && this->dbUser_ == nullptr && this->execCostUS_ == nullptr && this->fetchCostUS_ == nullptr && this->instName_ == nullptr
        && this->responseCode_ == nullptr && this->responseText_ == nullptr && this->riskLevel_ == nullptr && this->ruleId_ == nullptr && this->ruleKeyId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->schema_ == nullptr && this->serverMac_ == nullptr && this->sessionId_ == nullptr
        && this->sessionLoginTime_ == nullptr && this->sessionLogoutTime_ == nullptr && this->sqlContent_ == nullptr && this->sqlId_ == nullptr && this->sqlType_ == nullptr
        && this->templateId_ == nullptr; };
      // affectRows Field Functions 
      bool hasAffectRows() const { return this->affectRows_ != nullptr;};
      void deleteAffectRows() { this->affectRows_ = nullptr;};
      inline int32_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0) };
      inline Results& setAffectRows(int32_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


      // appClientIp Field Functions 
      bool hasAppClientIp() const { return this->appClientIp_ != nullptr;};
      void deleteAppClientIp() { this->appClientIp_ = nullptr;};
      inline string getAppClientIp() const { DARABONBA_PTR_GET_DEFAULT(appClientIp_, "") };
      inline Results& setAppClientIp(string appClientIp) { DARABONBA_PTR_SET_VALUE(appClientIp_, appClientIp) };


      // appUsername Field Functions 
      bool hasAppUsername() const { return this->appUsername_ != nullptr;};
      void deleteAppUsername() { this->appUsername_ = nullptr;};
      inline string getAppUsername() const { DARABONBA_PTR_GET_DEFAULT(appUsername_, "") };
      inline Results& setAppUsername(string appUsername) { DARABONBA_PTR_SET_VALUE(appUsername_, appUsername) };


      // captureTime Field Functions 
      bool hasCaptureTime() const { return this->captureTime_ != nullptr;};
      void deleteCaptureTime() { this->captureTime_ = nullptr;};
      inline string getCaptureTime() const { DARABONBA_PTR_GET_DEFAULT(captureTime_, "") };
      inline Results& setCaptureTime(string captureTime) { DARABONBA_PTR_SET_VALUE(captureTime_, captureTime) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Results& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // clientIpAlias Field Functions 
      bool hasClientIpAlias() const { return this->clientIpAlias_ != nullptr;};
      void deleteClientIpAlias() { this->clientIpAlias_ = nullptr;};
      inline string getClientIpAlias() const { DARABONBA_PTR_GET_DEFAULT(clientIpAlias_, "") };
      inline Results& setClientIpAlias(string clientIpAlias) { DARABONBA_PTR_SET_VALUE(clientIpAlias_, clientIpAlias) };


      // clientMac Field Functions 
      bool hasClientMac() const { return this->clientMac_ != nullptr;};
      void deleteClientMac() { this->clientMac_ = nullptr;};
      inline string getClientMac() const { DARABONBA_PTR_GET_DEFAULT(clientMac_, "") };
      inline Results& setClientMac(string clientMac) { DARABONBA_PTR_SET_VALUE(clientMac_, clientMac) };


      // clientOsUser Field Functions 
      bool hasClientOsUser() const { return this->clientOsUser_ != nullptr;};
      void deleteClientOsUser() { this->clientOsUser_ = nullptr;};
      inline string getClientOsUser() const { DARABONBA_PTR_GET_DEFAULT(clientOsUser_, "") };
      inline Results& setClientOsUser(string clientOsUser) { DARABONBA_PTR_SET_VALUE(clientOsUser_, clientOsUser) };


      // clientPort Field Functions 
      bool hasClientPort() const { return this->clientPort_ != nullptr;};
      void deleteClientPort() { this->clientPort_ = nullptr;};
      inline int32_t getClientPort() const { DARABONBA_PTR_GET_DEFAULT(clientPort_, 0) };
      inline Results& setClientPort(int32_t clientPort) { DARABONBA_PTR_SET_VALUE(clientPort_, clientPort) };


      // clientProgram Field Functions 
      bool hasClientProgram() const { return this->clientProgram_ != nullptr;};
      void deleteClientProgram() { this->clientProgram_ = nullptr;};
      inline string getClientProgram() const { DARABONBA_PTR_GET_DEFAULT(clientProgram_, "") };
      inline Results& setClientProgram(string clientProgram) { DARABONBA_PTR_SET_VALUE(clientProgram_, clientProgram) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
      inline Results& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // dbServer Field Functions 
      bool hasDbServer() const { return this->dbServer_ != nullptr;};
      void deleteDbServer() { this->dbServer_ = nullptr;};
      inline string getDbServer() const { DARABONBA_PTR_GET_DEFAULT(dbServer_, "") };
      inline Results& setDbServer(string dbServer) { DARABONBA_PTR_SET_VALUE(dbServer_, dbServer) };


      // dbUser Field Functions 
      bool hasDbUser() const { return this->dbUser_ != nullptr;};
      void deleteDbUser() { this->dbUser_ = nullptr;};
      inline string getDbUser() const { DARABONBA_PTR_GET_DEFAULT(dbUser_, "") };
      inline Results& setDbUser(string dbUser) { DARABONBA_PTR_SET_VALUE(dbUser_, dbUser) };


      // execCostUS Field Functions 
      bool hasExecCostUS() const { return this->execCostUS_ != nullptr;};
      void deleteExecCostUS() { this->execCostUS_ = nullptr;};
      inline int32_t getExecCostUS() const { DARABONBA_PTR_GET_DEFAULT(execCostUS_, 0) };
      inline Results& setExecCostUS(int32_t execCostUS) { DARABONBA_PTR_SET_VALUE(execCostUS_, execCostUS) };


      // fetchCostUS Field Functions 
      bool hasFetchCostUS() const { return this->fetchCostUS_ != nullptr;};
      void deleteFetchCostUS() { this->fetchCostUS_ = nullptr;};
      inline int32_t getFetchCostUS() const { DARABONBA_PTR_GET_DEFAULT(fetchCostUS_, 0) };
      inline Results& setFetchCostUS(int32_t fetchCostUS) { DARABONBA_PTR_SET_VALUE(fetchCostUS_, fetchCostUS) };


      // instName Field Functions 
      bool hasInstName() const { return this->instName_ != nullptr;};
      void deleteInstName() { this->instName_ = nullptr;};
      inline string getInstName() const { DARABONBA_PTR_GET_DEFAULT(instName_, "") };
      inline Results& setInstName(string instName) { DARABONBA_PTR_SET_VALUE(instName_, instName) };


      // responseCode Field Functions 
      bool hasResponseCode() const { return this->responseCode_ != nullptr;};
      void deleteResponseCode() { this->responseCode_ = nullptr;};
      inline string getResponseCode() const { DARABONBA_PTR_GET_DEFAULT(responseCode_, "") };
      inline Results& setResponseCode(string responseCode) { DARABONBA_PTR_SET_VALUE(responseCode_, responseCode) };


      // responseText Field Functions 
      bool hasResponseText() const { return this->responseText_ != nullptr;};
      void deleteResponseText() { this->responseText_ = nullptr;};
      inline string getResponseText() const { DARABONBA_PTR_GET_DEFAULT(responseText_, "") };
      inline Results& setResponseText(string responseText) { DARABONBA_PTR_SET_VALUE(responseText_, responseText) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline Results& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int32_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
      inline Results& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleKeyId Field Functions 
      bool hasRuleKeyId() const { return this->ruleKeyId_ != nullptr;};
      void deleteRuleKeyId() { this->ruleKeyId_ = nullptr;};
      inline int32_t getRuleKeyId() const { DARABONBA_PTR_GET_DEFAULT(ruleKeyId_, 0) };
      inline Results& setRuleKeyId(int32_t ruleKeyId) { DARABONBA_PTR_SET_VALUE(ruleKeyId_, ruleKeyId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Results& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
      inline Results& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
      inline Results& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      // serverMac Field Functions 
      bool hasServerMac() const { return this->serverMac_ != nullptr;};
      void deleteServerMac() { this->serverMac_ = nullptr;};
      inline string getServerMac() const { DARABONBA_PTR_GET_DEFAULT(serverMac_, "") };
      inline Results& setServerMac(string serverMac) { DARABONBA_PTR_SET_VALUE(serverMac_, serverMac) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Results& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // sessionLoginTime Field Functions 
      bool hasSessionLoginTime() const { return this->sessionLoginTime_ != nullptr;};
      void deleteSessionLoginTime() { this->sessionLoginTime_ = nullptr;};
      inline string getSessionLoginTime() const { DARABONBA_PTR_GET_DEFAULT(sessionLoginTime_, "") };
      inline Results& setSessionLoginTime(string sessionLoginTime) { DARABONBA_PTR_SET_VALUE(sessionLoginTime_, sessionLoginTime) };


      // sessionLogoutTime Field Functions 
      bool hasSessionLogoutTime() const { return this->sessionLogoutTime_ != nullptr;};
      void deleteSessionLogoutTime() { this->sessionLogoutTime_ = nullptr;};
      inline string getSessionLogoutTime() const { DARABONBA_PTR_GET_DEFAULT(sessionLogoutTime_, "") };
      inline Results& setSessionLogoutTime(string sessionLogoutTime) { DARABONBA_PTR_SET_VALUE(sessionLogoutTime_, sessionLogoutTime) };


      // sqlContent Field Functions 
      bool hasSqlContent() const { return this->sqlContent_ != nullptr;};
      void deleteSqlContent() { this->sqlContent_ = nullptr;};
      inline string getSqlContent() const { DARABONBA_PTR_GET_DEFAULT(sqlContent_, "") };
      inline Results& setSqlContent(string sqlContent) { DARABONBA_PTR_SET_VALUE(sqlContent_, sqlContent) };


      // sqlId Field Functions 
      bool hasSqlId() const { return this->sqlId_ != nullptr;};
      void deleteSqlId() { this->sqlId_ = nullptr;};
      inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
      inline Results& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


      // sqlType Field Functions 
      bool hasSqlType() const { return this->sqlType_ != nullptr;};
      void deleteSqlType() { this->sqlType_ = nullptr;};
      inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
      inline Results& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Results& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<int32_t> affectRows_ {};
      shared_ptr<string> appClientIp_ {};
      shared_ptr<string> appUsername_ {};
      shared_ptr<string> captureTime_ {};
      shared_ptr<string> clientIp_ {};
      shared_ptr<string> clientIpAlias_ {};
      shared_ptr<string> clientMac_ {};
      shared_ptr<string> clientOsUser_ {};
      shared_ptr<int32_t> clientPort_ {};
      shared_ptr<string> clientProgram_ {};
      shared_ptr<int32_t> dbId_ {};
      shared_ptr<string> dbServer_ {};
      shared_ptr<string> dbUser_ {};
      shared_ptr<int32_t> execCostUS_ {};
      shared_ptr<int32_t> fetchCostUS_ {};
      shared_ptr<string> instName_ {};
      shared_ptr<string> responseCode_ {};
      shared_ptr<string> responseText_ {};
      shared_ptr<int32_t> riskLevel_ {};
      shared_ptr<int32_t> ruleId_ {};
      shared_ptr<int32_t> ruleKeyId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<int32_t> ruleType_ {};
      shared_ptr<string> schema_ {};
      shared_ptr<string> serverMac_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> sessionLoginTime_ {};
      shared_ptr<string> sessionLogoutTime_ {};
      shared_ptr<string> sqlContent_ {};
      shared_ptr<string> sqlId_ {};
      shared_ptr<string> sqlType_ {};
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->beginDate_ == nullptr
        && this->endDate_ == nullptr && this->incomplete_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->results_ == nullptr && this->totalCount_ == nullptr; };
    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline GetLogListResponseBody& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetLogListResponseBody& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // incomplete Field Functions 
    bool hasIncomplete() const { return this->incomplete_ != nullptr;};
    void deleteIncomplete() { this->incomplete_ = nullptr;};
    inline string getIncomplete() const { DARABONBA_PTR_GET_DEFAULT(incomplete_, "") };
    inline GetLogListResponseBody& setIncomplete(string incomplete) { DARABONBA_PTR_SET_VALUE(incomplete_, incomplete) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetLogListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetLogListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<GetLogListResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<GetLogListResponseBody::Results>) };
    inline vector<GetLogListResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<GetLogListResponseBody::Results>) };
    inline GetLogListResponseBody& setResults(const vector<GetLogListResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline GetLogListResponseBody& setResults(vector<GetLogListResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetLogListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> beginDate_ {};
    shared_ptr<string> endDate_ {};
    shared_ptr<string> incomplete_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetLogListResponseBody::Results>> results_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
