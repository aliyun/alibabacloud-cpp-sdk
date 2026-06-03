// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGDETAILRESPONSEBODY_HPP_
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
  class GetLogDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
      DARABONBA_PTR_TO_JSON(AppClientIp, appClientIp_);
      DARABONBA_PTR_TO_JSON(AppUsername, appUsername_);
      DARABONBA_PTR_TO_JSON(CaptureTime, captureTime_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_TO_JSON(ResponseText, responseText_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleKeyId, ruleKeyId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(SecondarySqlType, secondarySqlType_);
      DARABONBA_PTR_TO_JSON(ServerMac, serverMac_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SessionLoginTime, sessionLoginTime_);
      DARABONBA_PTR_TO_JSON(SessionLogoutTime, sessionLogoutTime_);
      DARABONBA_PTR_TO_JSON(SqlContent, sqlContent_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(SqlResult, sqlResult_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(SqlTypeName, sqlTypeName_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateRules, templateRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
      DARABONBA_PTR_FROM_JSON(AppClientIp, appClientIp_);
      DARABONBA_PTR_FROM_JSON(AppUsername, appUsername_);
      DARABONBA_PTR_FROM_JSON(CaptureTime, captureTime_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_FROM_JSON(ResponseText, responseText_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleKeyId, ruleKeyId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(SecondarySqlType, secondarySqlType_);
      DARABONBA_PTR_FROM_JSON(ServerMac, serverMac_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SessionLoginTime, sessionLoginTime_);
      DARABONBA_PTR_FROM_JSON(SessionLogoutTime, sessionLogoutTime_);
      DARABONBA_PTR_FROM_JSON(SqlContent, sqlContent_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(SqlResult, sqlResult_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(SqlTypeName, sqlTypeName_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateRules, templateRules_);
    };
    GetLogDetailResponseBody() = default ;
    GetLogDetailResponseBody(const GetLogDetailResponseBody &) = default ;
    GetLogDetailResponseBody(GetLogDetailResponseBody &&) = default ;
    GetLogDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogDetailResponseBody() = default ;
    GetLogDetailResponseBody& operator=(const GetLogDetailResponseBody &) = default ;
    GetLogDetailResponseBody& operator=(GetLogDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->appClientIp_ == nullptr && this->appUsername_ == nullptr && this->captureTime_ == nullptr && this->clientIp_ == nullptr && this->clientMac_ == nullptr
        && this->clientOsUser_ == nullptr && this->clientPort_ == nullptr && this->clientProgram_ == nullptr && this->dbId_ == nullptr && this->dbServer_ == nullptr
        && this->dbUser_ == nullptr && this->execCostUS_ == nullptr && this->fetchCostUS_ == nullptr && this->instName_ == nullptr && this->requestId_ == nullptr
        && this->responseCode_ == nullptr && this->responseText_ == nullptr && this->riskLevel_ == nullptr && this->ruleId_ == nullptr && this->ruleKeyId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->schema_ == nullptr && this->secondarySqlType_ == nullptr && this->serverMac_ == nullptr
        && this->sessionId_ == nullptr && this->sessionLoginTime_ == nullptr && this->sessionLogoutTime_ == nullptr && this->sqlContent_ == nullptr && this->sqlId_ == nullptr
        && this->sqlResult_ == nullptr && this->sqlType_ == nullptr && this->sqlTypeName_ == nullptr && this->templateContent_ == nullptr && this->templateId_ == nullptr
        && this->templateRules_ == nullptr; };
    // affectRows Field Functions 
    bool hasAffectRows() const { return this->affectRows_ != nullptr;};
    void deleteAffectRows() { this->affectRows_ = nullptr;};
    inline int32_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0) };
    inline GetLogDetailResponseBody& setAffectRows(int32_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


    // appClientIp Field Functions 
    bool hasAppClientIp() const { return this->appClientIp_ != nullptr;};
    void deleteAppClientIp() { this->appClientIp_ = nullptr;};
    inline string getAppClientIp() const { DARABONBA_PTR_GET_DEFAULT(appClientIp_, "") };
    inline GetLogDetailResponseBody& setAppClientIp(string appClientIp) { DARABONBA_PTR_SET_VALUE(appClientIp_, appClientIp) };


    // appUsername Field Functions 
    bool hasAppUsername() const { return this->appUsername_ != nullptr;};
    void deleteAppUsername() { this->appUsername_ = nullptr;};
    inline string getAppUsername() const { DARABONBA_PTR_GET_DEFAULT(appUsername_, "") };
    inline GetLogDetailResponseBody& setAppUsername(string appUsername) { DARABONBA_PTR_SET_VALUE(appUsername_, appUsername) };


    // captureTime Field Functions 
    bool hasCaptureTime() const { return this->captureTime_ != nullptr;};
    void deleteCaptureTime() { this->captureTime_ = nullptr;};
    inline string getCaptureTime() const { DARABONBA_PTR_GET_DEFAULT(captureTime_, "") };
    inline GetLogDetailResponseBody& setCaptureTime(string captureTime) { DARABONBA_PTR_SET_VALUE(captureTime_, captureTime) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline GetLogDetailResponseBody& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientMac Field Functions 
    bool hasClientMac() const { return this->clientMac_ != nullptr;};
    void deleteClientMac() { this->clientMac_ = nullptr;};
    inline string getClientMac() const { DARABONBA_PTR_GET_DEFAULT(clientMac_, "") };
    inline GetLogDetailResponseBody& setClientMac(string clientMac) { DARABONBA_PTR_SET_VALUE(clientMac_, clientMac) };


    // clientOsUser Field Functions 
    bool hasClientOsUser() const { return this->clientOsUser_ != nullptr;};
    void deleteClientOsUser() { this->clientOsUser_ = nullptr;};
    inline string getClientOsUser() const { DARABONBA_PTR_GET_DEFAULT(clientOsUser_, "") };
    inline GetLogDetailResponseBody& setClientOsUser(string clientOsUser) { DARABONBA_PTR_SET_VALUE(clientOsUser_, clientOsUser) };


    // clientPort Field Functions 
    bool hasClientPort() const { return this->clientPort_ != nullptr;};
    void deleteClientPort() { this->clientPort_ = nullptr;};
    inline int32_t getClientPort() const { DARABONBA_PTR_GET_DEFAULT(clientPort_, 0) };
    inline GetLogDetailResponseBody& setClientPort(int32_t clientPort) { DARABONBA_PTR_SET_VALUE(clientPort_, clientPort) };


    // clientProgram Field Functions 
    bool hasClientProgram() const { return this->clientProgram_ != nullptr;};
    void deleteClientProgram() { this->clientProgram_ = nullptr;};
    inline string getClientProgram() const { DARABONBA_PTR_GET_DEFAULT(clientProgram_, "") };
    inline GetLogDetailResponseBody& setClientProgram(string clientProgram) { DARABONBA_PTR_SET_VALUE(clientProgram_, clientProgram) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline GetLogDetailResponseBody& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbServer Field Functions 
    bool hasDbServer() const { return this->dbServer_ != nullptr;};
    void deleteDbServer() { this->dbServer_ = nullptr;};
    inline string getDbServer() const { DARABONBA_PTR_GET_DEFAULT(dbServer_, "") };
    inline GetLogDetailResponseBody& setDbServer(string dbServer) { DARABONBA_PTR_SET_VALUE(dbServer_, dbServer) };


    // dbUser Field Functions 
    bool hasDbUser() const { return this->dbUser_ != nullptr;};
    void deleteDbUser() { this->dbUser_ = nullptr;};
    inline string getDbUser() const { DARABONBA_PTR_GET_DEFAULT(dbUser_, "") };
    inline GetLogDetailResponseBody& setDbUser(string dbUser) { DARABONBA_PTR_SET_VALUE(dbUser_, dbUser) };


    // execCostUS Field Functions 
    bool hasExecCostUS() const { return this->execCostUS_ != nullptr;};
    void deleteExecCostUS() { this->execCostUS_ = nullptr;};
    inline int32_t getExecCostUS() const { DARABONBA_PTR_GET_DEFAULT(execCostUS_, 0) };
    inline GetLogDetailResponseBody& setExecCostUS(int32_t execCostUS) { DARABONBA_PTR_SET_VALUE(execCostUS_, execCostUS) };


    // fetchCostUS Field Functions 
    bool hasFetchCostUS() const { return this->fetchCostUS_ != nullptr;};
    void deleteFetchCostUS() { this->fetchCostUS_ = nullptr;};
    inline int32_t getFetchCostUS() const { DARABONBA_PTR_GET_DEFAULT(fetchCostUS_, 0) };
    inline GetLogDetailResponseBody& setFetchCostUS(int32_t fetchCostUS) { DARABONBA_PTR_SET_VALUE(fetchCostUS_, fetchCostUS) };


    // instName Field Functions 
    bool hasInstName() const { return this->instName_ != nullptr;};
    void deleteInstName() { this->instName_ = nullptr;};
    inline string getInstName() const { DARABONBA_PTR_GET_DEFAULT(instName_, "") };
    inline GetLogDetailResponseBody& setInstName(string instName) { DARABONBA_PTR_SET_VALUE(instName_, instName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseCode Field Functions 
    bool hasResponseCode() const { return this->responseCode_ != nullptr;};
    void deleteResponseCode() { this->responseCode_ = nullptr;};
    inline string getResponseCode() const { DARABONBA_PTR_GET_DEFAULT(responseCode_, "") };
    inline GetLogDetailResponseBody& setResponseCode(string responseCode) { DARABONBA_PTR_SET_VALUE(responseCode_, responseCode) };


    // responseText Field Functions 
    bool hasResponseText() const { return this->responseText_ != nullptr;};
    void deleteResponseText() { this->responseText_ = nullptr;};
    inline string getResponseText() const { DARABONBA_PTR_GET_DEFAULT(responseText_, "") };
    inline GetLogDetailResponseBody& setResponseText(string responseText) { DARABONBA_PTR_SET_VALUE(responseText_, responseText) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline GetLogDetailResponseBody& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int32_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
    inline GetLogDetailResponseBody& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleKeyId Field Functions 
    bool hasRuleKeyId() const { return this->ruleKeyId_ != nullptr;};
    void deleteRuleKeyId() { this->ruleKeyId_ = nullptr;};
    inline int32_t getRuleKeyId() const { DARABONBA_PTR_GET_DEFAULT(ruleKeyId_, 0) };
    inline GetLogDetailResponseBody& setRuleKeyId(int32_t ruleKeyId) { DARABONBA_PTR_SET_VALUE(ruleKeyId_, ruleKeyId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetLogDetailResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline GetLogDetailResponseBody& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline GetLogDetailResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // secondarySqlType Field Functions 
    bool hasSecondarySqlType() const { return this->secondarySqlType_ != nullptr;};
    void deleteSecondarySqlType() { this->secondarySqlType_ = nullptr;};
    inline string getSecondarySqlType() const { DARABONBA_PTR_GET_DEFAULT(secondarySqlType_, "") };
    inline GetLogDetailResponseBody& setSecondarySqlType(string secondarySqlType) { DARABONBA_PTR_SET_VALUE(secondarySqlType_, secondarySqlType) };


    // serverMac Field Functions 
    bool hasServerMac() const { return this->serverMac_ != nullptr;};
    void deleteServerMac() { this->serverMac_ = nullptr;};
    inline string getServerMac() const { DARABONBA_PTR_GET_DEFAULT(serverMac_, "") };
    inline GetLogDetailResponseBody& setServerMac(string serverMac) { DARABONBA_PTR_SET_VALUE(serverMac_, serverMac) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetLogDetailResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionLoginTime Field Functions 
    bool hasSessionLoginTime() const { return this->sessionLoginTime_ != nullptr;};
    void deleteSessionLoginTime() { this->sessionLoginTime_ = nullptr;};
    inline string getSessionLoginTime() const { DARABONBA_PTR_GET_DEFAULT(sessionLoginTime_, "") };
    inline GetLogDetailResponseBody& setSessionLoginTime(string sessionLoginTime) { DARABONBA_PTR_SET_VALUE(sessionLoginTime_, sessionLoginTime) };


    // sessionLogoutTime Field Functions 
    bool hasSessionLogoutTime() const { return this->sessionLogoutTime_ != nullptr;};
    void deleteSessionLogoutTime() { this->sessionLogoutTime_ = nullptr;};
    inline string getSessionLogoutTime() const { DARABONBA_PTR_GET_DEFAULT(sessionLogoutTime_, "") };
    inline GetLogDetailResponseBody& setSessionLogoutTime(string sessionLogoutTime) { DARABONBA_PTR_SET_VALUE(sessionLogoutTime_, sessionLogoutTime) };


    // sqlContent Field Functions 
    bool hasSqlContent() const { return this->sqlContent_ != nullptr;};
    void deleteSqlContent() { this->sqlContent_ = nullptr;};
    inline string getSqlContent() const { DARABONBA_PTR_GET_DEFAULT(sqlContent_, "") };
    inline GetLogDetailResponseBody& setSqlContent(string sqlContent) { DARABONBA_PTR_SET_VALUE(sqlContent_, sqlContent) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetLogDetailResponseBody& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlResult Field Functions 
    bool hasSqlResult() const { return this->sqlResult_ != nullptr;};
    void deleteSqlResult() { this->sqlResult_ = nullptr;};
    inline string getSqlResult() const { DARABONBA_PTR_GET_DEFAULT(sqlResult_, "") };
    inline GetLogDetailResponseBody& setSqlResult(string sqlResult) { DARABONBA_PTR_SET_VALUE(sqlResult_, sqlResult) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetLogDetailResponseBody& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // sqlTypeName Field Functions 
    bool hasSqlTypeName() const { return this->sqlTypeName_ != nullptr;};
    void deleteSqlTypeName() { this->sqlTypeName_ = nullptr;};
    inline string getSqlTypeName() const { DARABONBA_PTR_GET_DEFAULT(sqlTypeName_, "") };
    inline GetLogDetailResponseBody& setSqlTypeName(string sqlTypeName) { DARABONBA_PTR_SET_VALUE(sqlTypeName_, sqlTypeName) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline GetLogDetailResponseBody& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLogDetailResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateRules Field Functions 
    bool hasTemplateRules() const { return this->templateRules_ != nullptr;};
    void deleteTemplateRules() { this->templateRules_ = nullptr;};
    inline const vector<string> & getTemplateRules() const { DARABONBA_PTR_GET_CONST(templateRules_, vector<string>) };
    inline vector<string> getTemplateRules() { DARABONBA_PTR_GET(templateRules_, vector<string>) };
    inline GetLogDetailResponseBody& setTemplateRules(const vector<string> & templateRules) { DARABONBA_PTR_SET_VALUE(templateRules_, templateRules) };
    inline GetLogDetailResponseBody& setTemplateRules(vector<string> && templateRules) { DARABONBA_PTR_SET_RVALUE(templateRules_, templateRules) };


  protected:
    shared_ptr<int32_t> affectRows_ {};
    shared_ptr<string> appClientIp_ {};
    shared_ptr<string> appUsername_ {};
    shared_ptr<string> captureTime_ {};
    shared_ptr<string> clientIp_ {};
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
    shared_ptr<string> requestId_ {};
    shared_ptr<string> responseCode_ {};
    shared_ptr<string> responseText_ {};
    shared_ptr<int32_t> riskLevel_ {};
    shared_ptr<int32_t> ruleId_ {};
    shared_ptr<int32_t> ruleKeyId_ {};
    shared_ptr<string> ruleName_ {};
    shared_ptr<int32_t> ruleType_ {};
    shared_ptr<string> schema_ {};
    shared_ptr<string> secondarySqlType_ {};
    shared_ptr<string> serverMac_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> sessionLoginTime_ {};
    shared_ptr<string> sessionLogoutTime_ {};
    shared_ptr<string> sqlContent_ {};
    shared_ptr<string> sqlId_ {};
    shared_ptr<string> sqlResult_ {};
    shared_ptr<string> sqlType_ {};
    shared_ptr<string> sqlTypeName_ {};
    shared_ptr<string> templateContent_ {};
    shared_ptr<string> templateId_ {};
    shared_ptr<vector<string>> templateRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
