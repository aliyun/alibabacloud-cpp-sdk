// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeAuditLogsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditLogsResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeAuditLogsResponseBodyItems& obj) { 
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
    DescribeAuditLogsResponseBodyItems() = default ;
    DescribeAuditLogsResponseBodyItems(const DescribeAuditLogsResponseBodyItems &) = default ;
    DescribeAuditLogsResponseBodyItems(DescribeAuditLogsResponseBodyItems &&) = default ;
    DescribeAuditLogsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditLogsResponseBodyItems() = default ;
    DescribeAuditLogsResponseBodyItems& operator=(const DescribeAuditLogsResponseBodyItems &) = default ;
    DescribeAuditLogsResponseBodyItems& operator=(DescribeAuditLogsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIp_ != nullptr
        && this->clientPort_ != nullptr && this->clientUa_ != nullptr && this->columnName_ != nullptr && this->creationTime_ != nullptr && this->dataSet_ != nullptr
        && this->databaseName_ != nullptr && this->dbType_ != nullptr && this->effectRow_ != nullptr && this->executeStatus_ != nullptr && this->executeTime_ != nullptr
        && this->inWhiteList_ != nullptr && this->instanceAuditStatus_ != nullptr && this->instanceDescription_ != nullptr && this->instanceName_ != nullptr && this->ipType_ != nullptr
        && this->logSource_ != nullptr && this->logTime_ != nullptr && this->memberAccount_ != nullptr && this->message_ != nullptr && this->modelName_ != nullptr
        && this->operateType_ != nullptr && this->ossObjectKey_ != nullptr && this->packageName_ != nullptr && this->productCode_ != nullptr && this->productId_ != nullptr
        && this->ruleCategory_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->sqlText_ != nullptr && this->tableName_ != nullptr
        && this->userId_ != nullptr && this->userName_ != nullptr && this->warnLevel_ != nullptr && this->warnLevelName_ != nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeAuditLogsResponseBodyItems& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientPort Field Functions 
    bool hasClientPort() const { return this->clientPort_ != nullptr;};
    void deleteClientPort() { this->clientPort_ = nullptr;};
    inline string clientPort() const { DARABONBA_PTR_GET_DEFAULT(clientPort_, "") };
    inline DescribeAuditLogsResponseBodyItems& setClientPort(string clientPort) { DARABONBA_PTR_SET_VALUE(clientPort_, clientPort) };


    // clientUa Field Functions 
    bool hasClientUa() const { return this->clientUa_ != nullptr;};
    void deleteClientUa() { this->clientUa_ = nullptr;};
    inline string clientUa() const { DARABONBA_PTR_GET_DEFAULT(clientUa_, "") };
    inline DescribeAuditLogsResponseBodyItems& setClientUa(string clientUa) { DARABONBA_PTR_SET_VALUE(clientUa_, clientUa) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline DescribeAuditLogsResponseBodyItems& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline DescribeAuditLogsResponseBodyItems& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataSet Field Functions 
    bool hasDataSet() const { return this->dataSet_ != nullptr;};
    void deleteDataSet() { this->dataSet_ = nullptr;};
    inline string dataSet() const { DARABONBA_PTR_GET_DEFAULT(dataSet_, "") };
    inline DescribeAuditLogsResponseBodyItems& setDataSet(string dataSet) { DARABONBA_PTR_SET_VALUE(dataSet_, dataSet) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeAuditLogsResponseBodyItems& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DescribeAuditLogsResponseBodyItems& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // effectRow Field Functions 
    bool hasEffectRow() const { return this->effectRow_ != nullptr;};
    void deleteEffectRow() { this->effectRow_ = nullptr;};
    inline int64_t effectRow() const { DARABONBA_PTR_GET_DEFAULT(effectRow_, 0L) };
    inline DescribeAuditLogsResponseBodyItems& setEffectRow(int64_t effectRow) { DARABONBA_PTR_SET_VALUE(effectRow_, effectRow) };


    // executeStatus Field Functions 
    bool hasExecuteStatus() const { return this->executeStatus_ != nullptr;};
    void deleteExecuteStatus() { this->executeStatus_ = nullptr;};
    inline int32_t executeStatus() const { DARABONBA_PTR_GET_DEFAULT(executeStatus_, 0) };
    inline DescribeAuditLogsResponseBodyItems& setExecuteStatus(int32_t executeStatus) { DARABONBA_PTR_SET_VALUE(executeStatus_, executeStatus) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline int64_t executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
    inline DescribeAuditLogsResponseBodyItems& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // inWhiteList Field Functions 
    bool hasInWhiteList() const { return this->inWhiteList_ != nullptr;};
    void deleteInWhiteList() { this->inWhiteList_ = nullptr;};
    inline bool inWhiteList() const { DARABONBA_PTR_GET_DEFAULT(inWhiteList_, false) };
    inline DescribeAuditLogsResponseBodyItems& setInWhiteList(bool inWhiteList) { DARABONBA_PTR_SET_VALUE(inWhiteList_, inWhiteList) };


    // instanceAuditStatus Field Functions 
    bool hasInstanceAuditStatus() const { return this->instanceAuditStatus_ != nullptr;};
    void deleteInstanceAuditStatus() { this->instanceAuditStatus_ = nullptr;};
    inline string instanceAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceAuditStatus_, "") };
    inline DescribeAuditLogsResponseBodyItems& setInstanceAuditStatus(string instanceAuditStatus) { DARABONBA_PTR_SET_VALUE(instanceAuditStatus_, instanceAuditStatus) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline DescribeAuditLogsResponseBodyItems& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAuditLogsResponseBodyItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline DescribeAuditLogsResponseBodyItems& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // logSource Field Functions 
    bool hasLogSource() const { return this->logSource_ != nullptr;};
    void deleteLogSource() { this->logSource_ = nullptr;};
    inline string logSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
    inline DescribeAuditLogsResponseBodyItems& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


    // logTime Field Functions 
    bool hasLogTime() const { return this->logTime_ != nullptr;};
    void deleteLogTime() { this->logTime_ = nullptr;};
    inline int64_t logTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, 0L) };
    inline DescribeAuditLogsResponseBodyItems& setLogTime(int64_t logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


    // memberAccount Field Functions 
    bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
    void deleteMemberAccount() { this->memberAccount_ = nullptr;};
    inline string memberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, "") };
    inline DescribeAuditLogsResponseBodyItems& setMemberAccount(string memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAuditLogsResponseBodyItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DescribeAuditLogsResponseBodyItems& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline DescribeAuditLogsResponseBodyItems& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // ossObjectKey Field Functions 
    bool hasOssObjectKey() const { return this->ossObjectKey_ != nullptr;};
    void deleteOssObjectKey() { this->ossObjectKey_ = nullptr;};
    inline string ossObjectKey() const { DARABONBA_PTR_GET_DEFAULT(ossObjectKey_, "") };
    inline DescribeAuditLogsResponseBodyItems& setOssObjectKey(string ossObjectKey) { DARABONBA_PTR_SET_VALUE(ossObjectKey_, ossObjectKey) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline DescribeAuditLogsResponseBodyItems& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeAuditLogsResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DescribeAuditLogsResponseBodyItems& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // ruleCategory Field Functions 
    bool hasRuleCategory() const { return this->ruleCategory_ != nullptr;};
    void deleteRuleCategory() { this->ruleCategory_ = nullptr;};
    inline string ruleCategory() const { DARABONBA_PTR_GET_DEFAULT(ruleCategory_, "") };
    inline DescribeAuditLogsResponseBodyItems& setRuleCategory(string ruleCategory) { DARABONBA_PTR_SET_VALUE(ruleCategory_, ruleCategory) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeAuditLogsResponseBodyItems& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAuditLogsResponseBodyItems& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string sqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline DescribeAuditLogsResponseBodyItems& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAuditLogsResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeAuditLogsResponseBodyItems& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeAuditLogsResponseBodyItems& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // warnLevel Field Functions 
    bool hasWarnLevel() const { return this->warnLevel_ != nullptr;};
    void deleteWarnLevel() { this->warnLevel_ = nullptr;};
    inline string warnLevel() const { DARABONBA_PTR_GET_DEFAULT(warnLevel_, "") };
    inline DescribeAuditLogsResponseBodyItems& setWarnLevel(string warnLevel) { DARABONBA_PTR_SET_VALUE(warnLevel_, warnLevel) };


    // warnLevelName Field Functions 
    bool hasWarnLevelName() const { return this->warnLevelName_ != nullptr;};
    void deleteWarnLevelName() { this->warnLevelName_ = nullptr;};
    inline string warnLevelName() const { DARABONBA_PTR_GET_DEFAULT(warnLevelName_, "") };
    inline DescribeAuditLogsResponseBodyItems& setWarnLevelName(string warnLevelName) { DARABONBA_PTR_SET_VALUE(warnLevelName_, warnLevelName) };


  protected:
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<string> clientPort_ = nullptr;
    std::shared_ptr<string> clientUa_ = nullptr;
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    std::shared_ptr<string> dataSet_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<string> dbType_ = nullptr;
    std::shared_ptr<int64_t> effectRow_ = nullptr;
    std::shared_ptr<int32_t> executeStatus_ = nullptr;
    std::shared_ptr<int64_t> executeTime_ = nullptr;
    std::shared_ptr<bool> inWhiteList_ = nullptr;
    std::shared_ptr<string> instanceAuditStatus_ = nullptr;
    std::shared_ptr<string> instanceDescription_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> ipType_ = nullptr;
    std::shared_ptr<string> logSource_ = nullptr;
    std::shared_ptr<int64_t> logTime_ = nullptr;
    std::shared_ptr<string> memberAccount_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> operateType_ = nullptr;
    std::shared_ptr<string> ossObjectKey_ = nullptr;
    std::shared_ptr<string> packageName_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<int64_t> productId_ = nullptr;
    std::shared_ptr<string> ruleCategory_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> sqlText_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> warnLevel_ = nullptr;
    std::shared_ptr<string> warnLevelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
