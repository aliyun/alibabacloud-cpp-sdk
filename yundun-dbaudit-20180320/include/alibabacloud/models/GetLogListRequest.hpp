// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGLISTREQUEST_HPP_
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
  class GetLogListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(ClientIpList, clientIpList_);
      DARABONBA_PTR_TO_JSON(ClientProgramList, clientProgramList_);
      DARABONBA_PTR_TO_JSON(DbHostList, dbHostList_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbUserList, dbUserList_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxAffectRows, maxAffectRows_);
      DARABONBA_PTR_TO_JSON(MaxExecCostUS, maxExecCostUS_);
      DARABONBA_PTR_TO_JSON(MinAffectRows, minAffectRows_);
      DARABONBA_PTR_TO_JSON(MinExecCostUS, minExecCostUS_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTypeList, ruleTypeList_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(SqlKey, sqlKey_);
      DARABONBA_PTR_TO_JSON(SqlTypeList, sqlTypeList_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(ClientIpList, clientIpList_);
      DARABONBA_PTR_FROM_JSON(ClientProgramList, clientProgramList_);
      DARABONBA_PTR_FROM_JSON(DbHostList, dbHostList_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbUserList, dbUserList_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxAffectRows, maxAffectRows_);
      DARABONBA_PTR_FROM_JSON(MaxExecCostUS, maxExecCostUS_);
      DARABONBA_PTR_FROM_JSON(MinAffectRows, minAffectRows_);
      DARABONBA_PTR_FROM_JSON(MinExecCostUS, minExecCostUS_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTypeList, ruleTypeList_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(SqlKey, sqlKey_);
      DARABONBA_PTR_FROM_JSON(SqlTypeList, sqlTypeList_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetLogListRequest() = default ;
    GetLogListRequest(const GetLogListRequest &) = default ;
    GetLogListRequest(GetLogListRequest &&) = default ;
    GetLogListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogListRequest() = default ;
    GetLogListRequest& operator=(const GetLogListRequest &) = default ;
    GetLogListRequest& operator=(GetLogListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginDate_ == nullptr
        && this->clientIpList_ == nullptr && this->clientProgramList_ == nullptr && this->dbHostList_ == nullptr && this->dbId_ == nullptr && this->dbUserList_ == nullptr
        && this->endDate_ == nullptr && this->instanceId_ == nullptr && this->isSuccess_ == nullptr && this->lang_ == nullptr && this->maxAffectRows_ == nullptr
        && this->maxExecCostUS_ == nullptr && this->minAffectRows_ == nullptr && this->minExecCostUS_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->riskLevelList_ == nullptr && this->ruleName_ == nullptr && this->ruleTypeList_ == nullptr && this->sessionId_ == nullptr
        && this->sqlId_ == nullptr && this->sqlKey_ == nullptr && this->sqlTypeList_ == nullptr && this->templateId_ == nullptr; };
    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline GetLogListRequest& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // clientIpList Field Functions 
    bool hasClientIpList() const { return this->clientIpList_ != nullptr;};
    void deleteClientIpList() { this->clientIpList_ = nullptr;};
    inline const vector<string> & getClientIpList() const { DARABONBA_PTR_GET_CONST(clientIpList_, vector<string>) };
    inline vector<string> getClientIpList() { DARABONBA_PTR_GET(clientIpList_, vector<string>) };
    inline GetLogListRequest& setClientIpList(const vector<string> & clientIpList) { DARABONBA_PTR_SET_VALUE(clientIpList_, clientIpList) };
    inline GetLogListRequest& setClientIpList(vector<string> && clientIpList) { DARABONBA_PTR_SET_RVALUE(clientIpList_, clientIpList) };


    // clientProgramList Field Functions 
    bool hasClientProgramList() const { return this->clientProgramList_ != nullptr;};
    void deleteClientProgramList() { this->clientProgramList_ = nullptr;};
    inline const vector<string> & getClientProgramList() const { DARABONBA_PTR_GET_CONST(clientProgramList_, vector<string>) };
    inline vector<string> getClientProgramList() { DARABONBA_PTR_GET(clientProgramList_, vector<string>) };
    inline GetLogListRequest& setClientProgramList(const vector<string> & clientProgramList) { DARABONBA_PTR_SET_VALUE(clientProgramList_, clientProgramList) };
    inline GetLogListRequest& setClientProgramList(vector<string> && clientProgramList) { DARABONBA_PTR_SET_RVALUE(clientProgramList_, clientProgramList) };


    // dbHostList Field Functions 
    bool hasDbHostList() const { return this->dbHostList_ != nullptr;};
    void deleteDbHostList() { this->dbHostList_ = nullptr;};
    inline const vector<string> & getDbHostList() const { DARABONBA_PTR_GET_CONST(dbHostList_, vector<string>) };
    inline vector<string> getDbHostList() { DARABONBA_PTR_GET(dbHostList_, vector<string>) };
    inline GetLogListRequest& setDbHostList(const vector<string> & dbHostList) { DARABONBA_PTR_SET_VALUE(dbHostList_, dbHostList) };
    inline GetLogListRequest& setDbHostList(vector<string> && dbHostList) { DARABONBA_PTR_SET_RVALUE(dbHostList_, dbHostList) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline GetLogListRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbUserList Field Functions 
    bool hasDbUserList() const { return this->dbUserList_ != nullptr;};
    void deleteDbUserList() { this->dbUserList_ = nullptr;};
    inline const vector<string> & getDbUserList() const { DARABONBA_PTR_GET_CONST(dbUserList_, vector<string>) };
    inline vector<string> getDbUserList() { DARABONBA_PTR_GET(dbUserList_, vector<string>) };
    inline GetLogListRequest& setDbUserList(const vector<string> & dbUserList) { DARABONBA_PTR_SET_VALUE(dbUserList_, dbUserList) };
    inline GetLogListRequest& setDbUserList(vector<string> && dbUserList) { DARABONBA_PTR_SET_RVALUE(dbUserList_, dbUserList) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetLogListRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLogListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline string getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, "") };
    inline GetLogListRequest& setIsSuccess(string isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetLogListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxAffectRows Field Functions 
    bool hasMaxAffectRows() const { return this->maxAffectRows_ != nullptr;};
    void deleteMaxAffectRows() { this->maxAffectRows_ = nullptr;};
    inline int32_t getMaxAffectRows() const { DARABONBA_PTR_GET_DEFAULT(maxAffectRows_, 0) };
    inline GetLogListRequest& setMaxAffectRows(int32_t maxAffectRows) { DARABONBA_PTR_SET_VALUE(maxAffectRows_, maxAffectRows) };


    // maxExecCostUS Field Functions 
    bool hasMaxExecCostUS() const { return this->maxExecCostUS_ != nullptr;};
    void deleteMaxExecCostUS() { this->maxExecCostUS_ = nullptr;};
    inline int32_t getMaxExecCostUS() const { DARABONBA_PTR_GET_DEFAULT(maxExecCostUS_, 0) };
    inline GetLogListRequest& setMaxExecCostUS(int32_t maxExecCostUS) { DARABONBA_PTR_SET_VALUE(maxExecCostUS_, maxExecCostUS) };


    // minAffectRows Field Functions 
    bool hasMinAffectRows() const { return this->minAffectRows_ != nullptr;};
    void deleteMinAffectRows() { this->minAffectRows_ = nullptr;};
    inline int32_t getMinAffectRows() const { DARABONBA_PTR_GET_DEFAULT(minAffectRows_, 0) };
    inline GetLogListRequest& setMinAffectRows(int32_t minAffectRows) { DARABONBA_PTR_SET_VALUE(minAffectRows_, minAffectRows) };


    // minExecCostUS Field Functions 
    bool hasMinExecCostUS() const { return this->minExecCostUS_ != nullptr;};
    void deleteMinExecCostUS() { this->minExecCostUS_ = nullptr;};
    inline int32_t getMinExecCostUS() const { DARABONBA_PTR_GET_DEFAULT(minExecCostUS_, 0) };
    inline GetLogListRequest& setMinExecCostUS(int32_t minExecCostUS) { DARABONBA_PTR_SET_VALUE(minExecCostUS_, minExecCostUS) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetLogListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetLogListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLogListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<string> & getRiskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<string>) };
    inline vector<string> getRiskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<string>) };
    inline GetLogListRequest& setRiskLevelList(const vector<string> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline GetLogListRequest& setRiskLevelList(vector<string> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetLogListRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTypeList Field Functions 
    bool hasRuleTypeList() const { return this->ruleTypeList_ != nullptr;};
    void deleteRuleTypeList() { this->ruleTypeList_ = nullptr;};
    inline const vector<string> & getRuleTypeList() const { DARABONBA_PTR_GET_CONST(ruleTypeList_, vector<string>) };
    inline vector<string> getRuleTypeList() { DARABONBA_PTR_GET(ruleTypeList_, vector<string>) };
    inline GetLogListRequest& setRuleTypeList(const vector<string> & ruleTypeList) { DARABONBA_PTR_SET_VALUE(ruleTypeList_, ruleTypeList) };
    inline GetLogListRequest& setRuleTypeList(vector<string> && ruleTypeList) { DARABONBA_PTR_SET_RVALUE(ruleTypeList_, ruleTypeList) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetLogListRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetLogListRequest& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlKey Field Functions 
    bool hasSqlKey() const { return this->sqlKey_ != nullptr;};
    void deleteSqlKey() { this->sqlKey_ = nullptr;};
    inline string getSqlKey() const { DARABONBA_PTR_GET_DEFAULT(sqlKey_, "") };
    inline GetLogListRequest& setSqlKey(string sqlKey) { DARABONBA_PTR_SET_VALUE(sqlKey_, sqlKey) };


    // sqlTypeList Field Functions 
    bool hasSqlTypeList() const { return this->sqlTypeList_ != nullptr;};
    void deleteSqlTypeList() { this->sqlTypeList_ = nullptr;};
    inline const vector<string> & getSqlTypeList() const { DARABONBA_PTR_GET_CONST(sqlTypeList_, vector<string>) };
    inline vector<string> getSqlTypeList() { DARABONBA_PTR_GET(sqlTypeList_, vector<string>) };
    inline GetLogListRequest& setSqlTypeList(const vector<string> & sqlTypeList) { DARABONBA_PTR_SET_VALUE(sqlTypeList_, sqlTypeList) };
    inline GetLogListRequest& setSqlTypeList(vector<string> && sqlTypeList) { DARABONBA_PTR_SET_RVALUE(sqlTypeList_, sqlTypeList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetLogListRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> beginDate_ {};
    shared_ptr<vector<string>> clientIpList_ {};
    shared_ptr<vector<string>> clientProgramList_ {};
    shared_ptr<vector<string>> dbHostList_ {};
    shared_ptr<int32_t> dbId_ {};
    shared_ptr<vector<string>> dbUserList_ {};
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> isSuccess_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int32_t> maxAffectRows_ {};
    shared_ptr<int32_t> maxExecCostUS_ {};
    shared_ptr<int32_t> minAffectRows_ {};
    shared_ptr<int32_t> minExecCostUS_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<string>> riskLevelList_ {};
    shared_ptr<string> ruleName_ {};
    shared_ptr<vector<string>> ruleTypeList_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> sqlId_ {};
    shared_ptr<string> sqlKey_ {};
    shared_ptr<vector<string>> sqlTypeList_ {};
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
