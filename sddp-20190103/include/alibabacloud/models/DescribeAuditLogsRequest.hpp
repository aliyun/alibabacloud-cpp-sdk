// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeAuditLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncRequestId, asyncRequestId_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientUa, clientUa_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(EffectRowRange, effectRowRange_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecuteTimeRange, executeTimeRange_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LoadWhiteList, loadWhiteList_);
      DARABONBA_PTR_TO_JSON(LogSource, logSource_);
      DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(OssObjectKey, ossObjectKey_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RuleAggQuery, ruleAggQuery_);
      DARABONBA_PTR_TO_JSON(RuleCategory, ruleCategory_);
      DARABONBA_PTR_TO_JSON(RuleID, ruleID_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncRequestId, asyncRequestId_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientUa, clientUa_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(EffectRowRange, effectRowRange_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecuteTimeRange, executeTimeRange_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LoadWhiteList, loadWhiteList_);
      DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
      DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(OssObjectKey, ossObjectKey_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RuleAggQuery, ruleAggQuery_);
      DARABONBA_PTR_FROM_JSON(RuleCategory, ruleCategory_);
      DARABONBA_PTR_FROM_JSON(RuleID, ruleID_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeAuditLogsRequest() = default ;
    DescribeAuditLogsRequest(const DescribeAuditLogsRequest &) = default ;
    DescribeAuditLogsRequest(DescribeAuditLogsRequest &&) = default ;
    DescribeAuditLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditLogsRequest() = default ;
    DescribeAuditLogsRequest& operator=(const DescribeAuditLogsRequest &) = default ;
    DescribeAuditLogsRequest& operator=(DescribeAuditLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncRequestId_ != nullptr
        && this->clientIp_ != nullptr && this->clientUa_ != nullptr && this->currentPage_ != nullptr && this->databaseName_ != nullptr && this->effectRowRange_ != nullptr
        && this->endTime_ != nullptr && this->executeTimeRange_ != nullptr && this->instanceName_ != nullptr && this->ipType_ != nullptr && this->lang_ != nullptr
        && this->loadWhiteList_ != nullptr && this->logSource_ != nullptr && this->memberAccount_ != nullptr && this->message_ != nullptr && this->operateType_ != nullptr
        && this->ossObjectKey_ != nullptr && this->pageSize_ != nullptr && this->productCode_ != nullptr && this->productId_ != nullptr && this->ruleAggQuery_ != nullptr
        && this->ruleCategory_ != nullptr && this->ruleID_ != nullptr && this->ruleName_ != nullptr && this->sqlText_ != nullptr && this->startTime_ != nullptr
        && this->userName_ != nullptr; };
    // asyncRequestId Field Functions 
    bool hasAsyncRequestId() const { return this->asyncRequestId_ != nullptr;};
    void deleteAsyncRequestId() { this->asyncRequestId_ = nullptr;};
    inline string asyncRequestId() const { DARABONBA_PTR_GET_DEFAULT(asyncRequestId_, "") };
    inline DescribeAuditLogsRequest& setAsyncRequestId(string asyncRequestId) { DARABONBA_PTR_SET_VALUE(asyncRequestId_, asyncRequestId) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeAuditLogsRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientUa Field Functions 
    bool hasClientUa() const { return this->clientUa_ != nullptr;};
    void deleteClientUa() { this->clientUa_ = nullptr;};
    inline string clientUa() const { DARABONBA_PTR_GET_DEFAULT(clientUa_, "") };
    inline DescribeAuditLogsRequest& setClientUa(string clientUa) { DARABONBA_PTR_SET_VALUE(clientUa_, clientUa) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAuditLogsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeAuditLogsRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // effectRowRange Field Functions 
    bool hasEffectRowRange() const { return this->effectRowRange_ != nullptr;};
    void deleteEffectRowRange() { this->effectRowRange_ = nullptr;};
    inline string effectRowRange() const { DARABONBA_PTR_GET_DEFAULT(effectRowRange_, "") };
    inline DescribeAuditLogsRequest& setEffectRowRange(string effectRowRange) { DARABONBA_PTR_SET_VALUE(effectRowRange_, effectRowRange) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAuditLogsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executeTimeRange Field Functions 
    bool hasExecuteTimeRange() const { return this->executeTimeRange_ != nullptr;};
    void deleteExecuteTimeRange() { this->executeTimeRange_ = nullptr;};
    inline string executeTimeRange() const { DARABONBA_PTR_GET_DEFAULT(executeTimeRange_, "") };
    inline DescribeAuditLogsRequest& setExecuteTimeRange(string executeTimeRange) { DARABONBA_PTR_SET_VALUE(executeTimeRange_, executeTimeRange) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAuditLogsRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline DescribeAuditLogsRequest& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAuditLogsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // loadWhiteList Field Functions 
    bool hasLoadWhiteList() const { return this->loadWhiteList_ != nullptr;};
    void deleteLoadWhiteList() { this->loadWhiteList_ = nullptr;};
    inline bool loadWhiteList() const { DARABONBA_PTR_GET_DEFAULT(loadWhiteList_, false) };
    inline DescribeAuditLogsRequest& setLoadWhiteList(bool loadWhiteList) { DARABONBA_PTR_SET_VALUE(loadWhiteList_, loadWhiteList) };


    // logSource Field Functions 
    bool hasLogSource() const { return this->logSource_ != nullptr;};
    void deleteLogSource() { this->logSource_ = nullptr;};
    inline string logSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
    inline DescribeAuditLogsRequest& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


    // memberAccount Field Functions 
    bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
    void deleteMemberAccount() { this->memberAccount_ = nullptr;};
    inline string memberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, "") };
    inline DescribeAuditLogsRequest& setMemberAccount(string memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAuditLogsRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline DescribeAuditLogsRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // ossObjectKey Field Functions 
    bool hasOssObjectKey() const { return this->ossObjectKey_ != nullptr;};
    void deleteOssObjectKey() { this->ossObjectKey_ = nullptr;};
    inline string ossObjectKey() const { DARABONBA_PTR_GET_DEFAULT(ossObjectKey_, "") };
    inline DescribeAuditLogsRequest& setOssObjectKey(string ossObjectKey) { DARABONBA_PTR_SET_VALUE(ossObjectKey_, ossObjectKey) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAuditLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeAuditLogsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeAuditLogsRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // ruleAggQuery Field Functions 
    bool hasRuleAggQuery() const { return this->ruleAggQuery_ != nullptr;};
    void deleteRuleAggQuery() { this->ruleAggQuery_ = nullptr;};
    inline bool ruleAggQuery() const { DARABONBA_PTR_GET_DEFAULT(ruleAggQuery_, false) };
    inline DescribeAuditLogsRequest& setRuleAggQuery(bool ruleAggQuery) { DARABONBA_PTR_SET_VALUE(ruleAggQuery_, ruleAggQuery) };


    // ruleCategory Field Functions 
    bool hasRuleCategory() const { return this->ruleCategory_ != nullptr;};
    void deleteRuleCategory() { this->ruleCategory_ = nullptr;};
    inline string ruleCategory() const { DARABONBA_PTR_GET_DEFAULT(ruleCategory_, "") };
    inline DescribeAuditLogsRequest& setRuleCategory(string ruleCategory) { DARABONBA_PTR_SET_VALUE(ruleCategory_, ruleCategory) };


    // ruleID Field Functions 
    bool hasRuleID() const { return this->ruleID_ != nullptr;};
    void deleteRuleID() { this->ruleID_ = nullptr;};
    inline string ruleID() const { DARABONBA_PTR_GET_DEFAULT(ruleID_, "") };
    inline DescribeAuditLogsRequest& setRuleID(string ruleID) { DARABONBA_PTR_SET_VALUE(ruleID_, ruleID) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAuditLogsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string sqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline DescribeAuditLogsRequest& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAuditLogsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeAuditLogsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> asyncRequestId_ = nullptr;
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<string> clientUa_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<string> effectRowRange_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> executeTimeRange_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> ipType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<bool> loadWhiteList_ = nullptr;
    std::shared_ptr<string> logSource_ = nullptr;
    std::shared_ptr<string> memberAccount_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> operateType_ = nullptr;
    std::shared_ptr<string> ossObjectKey_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<int64_t> productId_ = nullptr;
    std::shared_ptr<bool> ruleAggQuery_ = nullptr;
    std::shared_ptr<string> ruleCategory_ = nullptr;
    std::shared_ptr<string> ruleID_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> sqlText_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
