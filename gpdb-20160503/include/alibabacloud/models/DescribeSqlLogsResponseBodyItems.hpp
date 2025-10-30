// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSQLLogsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBRole, DBRole_);
      DARABONBA_PTR_TO_JSON(ExecuteCost, executeCost_);
      DARABONBA_PTR_TO_JSON(ExecuteState, executeState_);
      DARABONBA_PTR_TO_JSON(OperationClass, operationClass_);
      DARABONBA_PTR_TO_JSON(OperationExecuteTime, operationExecuteTime_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
      DARABONBA_PTR_TO_JSON(SQLPlan, SQLPlan_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(ScanRowCounts, scanRowCounts_);
      DARABONBA_PTR_TO_JSON(SourceIP, sourceIP_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBRole, DBRole_);
      DARABONBA_PTR_FROM_JSON(ExecuteCost, executeCost_);
      DARABONBA_PTR_FROM_JSON(ExecuteState, executeState_);
      DARABONBA_PTR_FROM_JSON(OperationClass, operationClass_);
      DARABONBA_PTR_FROM_JSON(OperationExecuteTime, operationExecuteTime_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
      DARABONBA_PTR_FROM_JSON(SQLPlan, SQLPlan_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(ScanRowCounts, scanRowCounts_);
      DARABONBA_PTR_FROM_JSON(SourceIP, sourceIP_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
    };
    DescribeSQLLogsResponseBodyItems() = default ;
    DescribeSQLLogsResponseBodyItems(const DescribeSQLLogsResponseBodyItems &) = default ;
    DescribeSQLLogsResponseBodyItems(DescribeSQLLogsResponseBodyItems &&) = default ;
    DescribeSQLLogsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogsResponseBodyItems() = default ;
    DescribeSQLLogsResponseBodyItems& operator=(const DescribeSQLLogsResponseBodyItems &) = default ;
    DescribeSQLLogsResponseBodyItems& operator=(DescribeSQLLogsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->DBName_ == nullptr && return this->DBRole_ == nullptr && return this->executeCost_ == nullptr && return this->executeState_ == nullptr && return this->operationClass_ == nullptr
        && return this->operationExecuteTime_ == nullptr && return this->operationType_ == nullptr && return this->returnRowCounts_ == nullptr && return this->SQLPlan_ == nullptr && return this->SQLText_ == nullptr
        && return this->scanRowCounts_ == nullptr && return this->sourceIP_ == nullptr && return this->sourcePort_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeSQLLogsResponseBodyItems& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSQLLogsResponseBodyItems& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBRole Field Functions 
    bool hasDBRole() const { return this->DBRole_ != nullptr;};
    void deleteDBRole() { this->DBRole_ = nullptr;};
    inline string DBRole() const { DARABONBA_PTR_GET_DEFAULT(DBRole_, "") };
    inline DescribeSQLLogsResponseBodyItems& setDBRole(string DBRole) { DARABONBA_PTR_SET_VALUE(DBRole_, DBRole) };


    // executeCost Field Functions 
    bool hasExecuteCost() const { return this->executeCost_ != nullptr;};
    void deleteExecuteCost() { this->executeCost_ = nullptr;};
    inline float executeCost() const { DARABONBA_PTR_GET_DEFAULT(executeCost_, 0.0) };
    inline DescribeSQLLogsResponseBodyItems& setExecuteCost(float executeCost) { DARABONBA_PTR_SET_VALUE(executeCost_, executeCost) };


    // executeState Field Functions 
    bool hasExecuteState() const { return this->executeState_ != nullptr;};
    void deleteExecuteState() { this->executeState_ = nullptr;};
    inline string executeState() const { DARABONBA_PTR_GET_DEFAULT(executeState_, "") };
    inline DescribeSQLLogsResponseBodyItems& setExecuteState(string executeState) { DARABONBA_PTR_SET_VALUE(executeState_, executeState) };


    // operationClass Field Functions 
    bool hasOperationClass() const { return this->operationClass_ != nullptr;};
    void deleteOperationClass() { this->operationClass_ = nullptr;};
    inline string operationClass() const { DARABONBA_PTR_GET_DEFAULT(operationClass_, "") };
    inline DescribeSQLLogsResponseBodyItems& setOperationClass(string operationClass) { DARABONBA_PTR_SET_VALUE(operationClass_, operationClass) };


    // operationExecuteTime Field Functions 
    bool hasOperationExecuteTime() const { return this->operationExecuteTime_ != nullptr;};
    void deleteOperationExecuteTime() { this->operationExecuteTime_ = nullptr;};
    inline string operationExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(operationExecuteTime_, "") };
    inline DescribeSQLLogsResponseBodyItems& setOperationExecuteTime(string operationExecuteTime) { DARABONBA_PTR_SET_VALUE(operationExecuteTime_, operationExecuteTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeSQLLogsResponseBodyItems& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // returnRowCounts Field Functions 
    bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
    void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
    inline int64_t returnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
    inline DescribeSQLLogsResponseBodyItems& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


    // SQLPlan Field Functions 
    bool hasSQLPlan() const { return this->SQLPlan_ != nullptr;};
    void deleteSQLPlan() { this->SQLPlan_ = nullptr;};
    inline string SQLPlan() const { DARABONBA_PTR_GET_DEFAULT(SQLPlan_, "") };
    inline DescribeSQLLogsResponseBodyItems& setSQLPlan(string SQLPlan) { DARABONBA_PTR_SET_VALUE(SQLPlan_, SQLPlan) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSQLLogsResponseBodyItems& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // scanRowCounts Field Functions 
    bool hasScanRowCounts() const { return this->scanRowCounts_ != nullptr;};
    void deleteScanRowCounts() { this->scanRowCounts_ = nullptr;};
    inline int64_t scanRowCounts() const { DARABONBA_PTR_GET_DEFAULT(scanRowCounts_, 0L) };
    inline DescribeSQLLogsResponseBodyItems& setScanRowCounts(int64_t scanRowCounts) { DARABONBA_PTR_SET_VALUE(scanRowCounts_, scanRowCounts) };


    // sourceIP Field Functions 
    bool hasSourceIP() const { return this->sourceIP_ != nullptr;};
    void deleteSourceIP() { this->sourceIP_ = nullptr;};
    inline string sourceIP() const { DARABONBA_PTR_GET_DEFAULT(sourceIP_, "") };
    inline DescribeSQLLogsResponseBodyItems& setSourceIP(string sourceIP) { DARABONBA_PTR_SET_VALUE(sourceIP_, sourceIP) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int32_t sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0) };
    inline DescribeSQLLogsResponseBodyItems& setSourcePort(int32_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


  protected:
    // The database account that executes the SQL statement.
    std::shared_ptr<string> accountName_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The role of the database.
    std::shared_ptr<string> DBRole_ = nullptr;
    // The execution duration of the SQL statement.
    std::shared_ptr<float> executeCost_ = nullptr;
    // The execution status of the SQL statement. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> executeState_ = nullptr;
    // The type of the query language.
    std::shared_ptr<string> operationClass_ = nullptr;
    // The time when the SQL statement was executed.
    std::shared_ptr<string> operationExecuteTime_ = nullptr;
    // The type of the SQL statement.
    std::shared_ptr<string> operationType_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> returnRowCounts_ = nullptr;
    // The SQL execution plan.
    std::shared_ptr<string> SQLPlan_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> SQLText_ = nullptr;
    // The number of entries scanned.
    std::shared_ptr<int64_t> scanRowCounts_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sourceIP_ = nullptr;
    // The number of the source port.
    std::shared_ptr<int32_t> sourcePort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
