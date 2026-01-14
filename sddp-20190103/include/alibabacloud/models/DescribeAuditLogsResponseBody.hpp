// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeAuditLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncRequestId, asyncRequestId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncRequestId, asyncRequestId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAuditLogsResponseBody() = default ;
    DescribeAuditLogsResponseBody(const DescribeAuditLogsResponseBody &) = default ;
    DescribeAuditLogsResponseBody(DescribeAuditLogsResponseBody &&) = default ;
    DescribeAuditLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditLogsResponseBody() = default ;
    DescribeAuditLogsResponseBody& operator=(const DescribeAuditLogsResponseBody &) = default ;
    DescribeAuditLogsResponseBody& operator=(DescribeAuditLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(ClientPort, clientPort_);
        DARABONBA_PTR_TO_JSON(ClientUa, clientUa_);
        DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DataSet, dataSet_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(EffectRow, effectRow_);
        DARABONBA_PTR_TO_JSON(ExecuteStatus, executeStatus_);
        DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
        DARABONBA_PTR_TO_JSON(InWhiteList, inWhiteList_);
        DARABONBA_PTR_TO_JSON(InstanceAuditStatus, instanceAuditStatus_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(IpType, ipType_);
        DARABONBA_PTR_TO_JSON(LogSource, logSource_);
        DARABONBA_PTR_TO_JSON(LogTime, logTime_);
        DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(OperateType, operateType_);
        DARABONBA_PTR_TO_JSON(OssObjectKey, ossObjectKey_);
        DARABONBA_PTR_TO_JSON(PackageName, packageName_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(RuleCategory, ruleCategory_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(WarnLevel, warnLevel_);
        DARABONBA_PTR_TO_JSON(WarnLevelName, warnLevelName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(ClientPort, clientPort_);
        DARABONBA_PTR_FROM_JSON(ClientUa, clientUa_);
        DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DataSet, dataSet_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(EffectRow, effectRow_);
        DARABONBA_PTR_FROM_JSON(ExecuteStatus, executeStatus_);
        DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
        DARABONBA_PTR_FROM_JSON(InWhiteList, inWhiteList_);
        DARABONBA_PTR_FROM_JSON(InstanceAuditStatus, instanceAuditStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(IpType, ipType_);
        DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
        DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
        DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
        DARABONBA_PTR_FROM_JSON(OssObjectKey, ossObjectKey_);
        DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(RuleCategory, ruleCategory_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(WarnLevel, warnLevel_);
        DARABONBA_PTR_FROM_JSON(WarnLevelName, warnLevelName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientIp_ == nullptr
        && this->clientPort_ == nullptr && this->clientUa_ == nullptr && this->columnName_ == nullptr && this->creationTime_ == nullptr && this->dataSet_ == nullptr
        && this->databaseName_ == nullptr && this->dbType_ == nullptr && this->effectRow_ == nullptr && this->executeStatus_ == nullptr && this->executeTime_ == nullptr
        && this->inWhiteList_ == nullptr && this->instanceAuditStatus_ == nullptr && this->instanceDescription_ == nullptr && this->instanceName_ == nullptr && this->ipType_ == nullptr
        && this->logSource_ == nullptr && this->logTime_ == nullptr && this->memberAccount_ == nullptr && this->message_ == nullptr && this->modelName_ == nullptr
        && this->operateType_ == nullptr && this->ossObjectKey_ == nullptr && this->packageName_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr
        && this->ruleCategory_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->sqlText_ == nullptr && this->tableName_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr && this->warnLevel_ == nullptr && this->warnLevelName_ == nullptr; };
      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Items& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // clientPort Field Functions 
      bool hasClientPort() const { return this->clientPort_ != nullptr;};
      void deleteClientPort() { this->clientPort_ = nullptr;};
      inline string getClientPort() const { DARABONBA_PTR_GET_DEFAULT(clientPort_, "") };
      inline Items& setClientPort(string clientPort) { DARABONBA_PTR_SET_VALUE(clientPort_, clientPort) };


      // clientUa Field Functions 
      bool hasClientUa() const { return this->clientUa_ != nullptr;};
      void deleteClientUa() { this->clientUa_ = nullptr;};
      inline string getClientUa() const { DARABONBA_PTR_GET_DEFAULT(clientUa_, "") };
      inline Items& setClientUa(string clientUa) { DARABONBA_PTR_SET_VALUE(clientUa_, clientUa) };


      // columnName Field Functions 
      bool hasColumnName() const { return this->columnName_ != nullptr;};
      void deleteColumnName() { this->columnName_ = nullptr;};
      inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
      inline Items& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline Items& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataSet Field Functions 
      bool hasDataSet() const { return this->dataSet_ != nullptr;};
      void deleteDataSet() { this->dataSet_ = nullptr;};
      inline string getDataSet() const { DARABONBA_PTR_GET_DEFAULT(dataSet_, "") };
      inline Items& setDataSet(string dataSet) { DARABONBA_PTR_SET_VALUE(dataSet_, dataSet) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline Items& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Items& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // effectRow Field Functions 
      bool hasEffectRow() const { return this->effectRow_ != nullptr;};
      void deleteEffectRow() { this->effectRow_ = nullptr;};
      inline int64_t getEffectRow() const { DARABONBA_PTR_GET_DEFAULT(effectRow_, 0L) };
      inline Items& setEffectRow(int64_t effectRow) { DARABONBA_PTR_SET_VALUE(effectRow_, effectRow) };


      // executeStatus Field Functions 
      bool hasExecuteStatus() const { return this->executeStatus_ != nullptr;};
      void deleteExecuteStatus() { this->executeStatus_ = nullptr;};
      inline int32_t getExecuteStatus() const { DARABONBA_PTR_GET_DEFAULT(executeStatus_, 0) };
      inline Items& setExecuteStatus(int32_t executeStatus) { DARABONBA_PTR_SET_VALUE(executeStatus_, executeStatus) };


      // executeTime Field Functions 
      bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
      void deleteExecuteTime() { this->executeTime_ = nullptr;};
      inline int64_t getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
      inline Items& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


      // inWhiteList Field Functions 
      bool hasInWhiteList() const { return this->inWhiteList_ != nullptr;};
      void deleteInWhiteList() { this->inWhiteList_ = nullptr;};
      inline bool getInWhiteList() const { DARABONBA_PTR_GET_DEFAULT(inWhiteList_, false) };
      inline Items& setInWhiteList(bool inWhiteList) { DARABONBA_PTR_SET_VALUE(inWhiteList_, inWhiteList) };


      // instanceAuditStatus Field Functions 
      bool hasInstanceAuditStatus() const { return this->instanceAuditStatus_ != nullptr;};
      void deleteInstanceAuditStatus() { this->instanceAuditStatus_ = nullptr;};
      inline string getInstanceAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceAuditStatus_, "") };
      inline Items& setInstanceAuditStatus(string instanceAuditStatus) { DARABONBA_PTR_SET_VALUE(instanceAuditStatus_, instanceAuditStatus) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline Items& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Items& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // ipType Field Functions 
      bool hasIpType() const { return this->ipType_ != nullptr;};
      void deleteIpType() { this->ipType_ = nullptr;};
      inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
      inline Items& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


      // logSource Field Functions 
      bool hasLogSource() const { return this->logSource_ != nullptr;};
      void deleteLogSource() { this->logSource_ = nullptr;};
      inline string getLogSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
      inline Items& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


      // logTime Field Functions 
      bool hasLogTime() const { return this->logTime_ != nullptr;};
      void deleteLogTime() { this->logTime_ = nullptr;};
      inline int64_t getLogTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, 0L) };
      inline Items& setLogTime(int64_t logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


      // memberAccount Field Functions 
      bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
      void deleteMemberAccount() { this->memberAccount_ = nullptr;};
      inline string getMemberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, "") };
      inline Items& setMemberAccount(string memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Items& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Items& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // operateType Field Functions 
      bool hasOperateType() const { return this->operateType_ != nullptr;};
      void deleteOperateType() { this->operateType_ = nullptr;};
      inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
      inline Items& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


      // ossObjectKey Field Functions 
      bool hasOssObjectKey() const { return this->ossObjectKey_ != nullptr;};
      void deleteOssObjectKey() { this->ossObjectKey_ = nullptr;};
      inline string getOssObjectKey() const { DARABONBA_PTR_GET_DEFAULT(ossObjectKey_, "") };
      inline Items& setOssObjectKey(string ossObjectKey) { DARABONBA_PTR_SET_VALUE(ossObjectKey_, ossObjectKey) };


      // packageName Field Functions 
      bool hasPackageName() const { return this->packageName_ != nullptr;};
      void deletePackageName() { this->packageName_ = nullptr;};
      inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
      inline Items& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
      inline Items& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // ruleCategory Field Functions 
      bool hasRuleCategory() const { return this->ruleCategory_ != nullptr;};
      void deleteRuleCategory() { this->ruleCategory_ = nullptr;};
      inline string getRuleCategory() const { DARABONBA_PTR_GET_DEFAULT(ruleCategory_, "") };
      inline Items& setRuleCategory(string ruleCategory) { DARABONBA_PTR_SET_VALUE(ruleCategory_, ruleCategory) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Items& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Items& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sqlText Field Functions 
      bool hasSqlText() const { return this->sqlText_ != nullptr;};
      void deleteSqlText() { this->sqlText_ = nullptr;};
      inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
      inline Items& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Items& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Items& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // warnLevel Field Functions 
      bool hasWarnLevel() const { return this->warnLevel_ != nullptr;};
      void deleteWarnLevel() { this->warnLevel_ = nullptr;};
      inline string getWarnLevel() const { DARABONBA_PTR_GET_DEFAULT(warnLevel_, "") };
      inline Items& setWarnLevel(string warnLevel) { DARABONBA_PTR_SET_VALUE(warnLevel_, warnLevel) };


      // warnLevelName Field Functions 
      bool hasWarnLevelName() const { return this->warnLevelName_ != nullptr;};
      void deleteWarnLevelName() { this->warnLevelName_ = nullptr;};
      inline string getWarnLevelName() const { DARABONBA_PTR_GET_DEFAULT(warnLevelName_, "") };
      inline Items& setWarnLevelName(string warnLevelName) { DARABONBA_PTR_SET_VALUE(warnLevelName_, warnLevelName) };


    protected:
      shared_ptr<string> clientIp_ {};
      shared_ptr<string> clientPort_ {};
      shared_ptr<string> clientUa_ {};
      shared_ptr<string> columnName_ {};
      shared_ptr<int64_t> creationTime_ {};
      shared_ptr<string> dataSet_ {};
      shared_ptr<string> databaseName_ {};
      shared_ptr<string> dbType_ {};
      shared_ptr<int64_t> effectRow_ {};
      shared_ptr<int32_t> executeStatus_ {};
      shared_ptr<int64_t> executeTime_ {};
      shared_ptr<bool> inWhiteList_ {};
      shared_ptr<string> instanceAuditStatus_ {};
      shared_ptr<string> instanceDescription_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> ipType_ {};
      shared_ptr<string> logSource_ {};
      shared_ptr<int64_t> logTime_ {};
      shared_ptr<string> memberAccount_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> modelName_ {};
      shared_ptr<string> operateType_ {};
      shared_ptr<string> ossObjectKey_ {};
      shared_ptr<string> packageName_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<int64_t> productId_ {};
      shared_ptr<string> ruleCategory_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<string> sqlText_ {};
      shared_ptr<string> tableName_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
      shared_ptr<string> warnLevel_ {};
      shared_ptr<string> warnLevelName_ {};
    };

    virtual bool empty() const override { return this->asyncRequestId_ == nullptr
        && this->currentPage_ == nullptr && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // asyncRequestId Field Functions 
    bool hasAsyncRequestId() const { return this->asyncRequestId_ != nullptr;};
    void deleteAsyncRequestId() { this->asyncRequestId_ = nullptr;};
    inline string getAsyncRequestId() const { DARABONBA_PTR_GET_DEFAULT(asyncRequestId_, "") };
    inline DescribeAuditLogsResponseBody& setAsyncRequestId(string asyncRequestId) { DARABONBA_PTR_SET_VALUE(asyncRequestId_, asyncRequestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAuditLogsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAuditLogsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAuditLogsResponseBody::Items>) };
    inline vector<DescribeAuditLogsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAuditLogsResponseBody::Items>) };
    inline DescribeAuditLogsResponseBody& setItems(const vector<DescribeAuditLogsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAuditLogsResponseBody& setItems(vector<DescribeAuditLogsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAuditLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuditLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAuditLogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> asyncRequestId_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<DescribeAuditLogsResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
