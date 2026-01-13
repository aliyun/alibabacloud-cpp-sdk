// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGSV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGSV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSQLLogsV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogsV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecuteCost, executeCost_);
      DARABONBA_PTR_TO_JSON(ExecuteState, executeState_);
      DARABONBA_PTR_TO_JSON(MaxExecuteCost, maxExecuteCost_);
      DARABONBA_PTR_TO_JSON(MinExecuteCost, minExecuteCost_);
      DARABONBA_PTR_TO_JSON(OperationClass, operationClass_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryKeywords, queryKeywords_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceIP, sourceIP_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogsV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecuteCost, executeCost_);
      DARABONBA_PTR_FROM_JSON(ExecuteState, executeState_);
      DARABONBA_PTR_FROM_JSON(MaxExecuteCost, maxExecuteCost_);
      DARABONBA_PTR_FROM_JSON(MinExecuteCost, minExecuteCost_);
      DARABONBA_PTR_FROM_JSON(OperationClass, operationClass_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryKeywords, queryKeywords_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceIP, sourceIP_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeSQLLogsV2Request() = default ;
    DescribeSQLLogsV2Request(const DescribeSQLLogsV2Request &) = default ;
    DescribeSQLLogsV2Request(DescribeSQLLogsV2Request &&) = default ;
    DescribeSQLLogsV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogsV2Request() = default ;
    DescribeSQLLogsV2Request& operator=(const DescribeSQLLogsV2Request &) = default ;
    DescribeSQLLogsV2Request& operator=(DescribeSQLLogsV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->database_ == nullptr && this->endTime_ == nullptr && this->executeCost_ == nullptr && this->executeState_ == nullptr && this->maxExecuteCost_ == nullptr
        && this->minExecuteCost_ == nullptr && this->operationClass_ == nullptr && this->operationType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->queryKeywords_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->sourceIP_ == nullptr && this->startTime_ == nullptr
        && this->user_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSQLLogsV2Request& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeSQLLogsV2Request& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSQLLogsV2Request& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executeCost Field Functions 
    bool hasExecuteCost() const { return this->executeCost_ != nullptr;};
    void deleteExecuteCost() { this->executeCost_ = nullptr;};
    inline string getExecuteCost() const { DARABONBA_PTR_GET_DEFAULT(executeCost_, "") };
    inline DescribeSQLLogsV2Request& setExecuteCost(string executeCost) { DARABONBA_PTR_SET_VALUE(executeCost_, executeCost) };


    // executeState Field Functions 
    bool hasExecuteState() const { return this->executeState_ != nullptr;};
    void deleteExecuteState() { this->executeState_ = nullptr;};
    inline string getExecuteState() const { DARABONBA_PTR_GET_DEFAULT(executeState_, "") };
    inline DescribeSQLLogsV2Request& setExecuteState(string executeState) { DARABONBA_PTR_SET_VALUE(executeState_, executeState) };


    // maxExecuteCost Field Functions 
    bool hasMaxExecuteCost() const { return this->maxExecuteCost_ != nullptr;};
    void deleteMaxExecuteCost() { this->maxExecuteCost_ = nullptr;};
    inline string getMaxExecuteCost() const { DARABONBA_PTR_GET_DEFAULT(maxExecuteCost_, "") };
    inline DescribeSQLLogsV2Request& setMaxExecuteCost(string maxExecuteCost) { DARABONBA_PTR_SET_VALUE(maxExecuteCost_, maxExecuteCost) };


    // minExecuteCost Field Functions 
    bool hasMinExecuteCost() const { return this->minExecuteCost_ != nullptr;};
    void deleteMinExecuteCost() { this->minExecuteCost_ = nullptr;};
    inline string getMinExecuteCost() const { DARABONBA_PTR_GET_DEFAULT(minExecuteCost_, "") };
    inline DescribeSQLLogsV2Request& setMinExecuteCost(string minExecuteCost) { DARABONBA_PTR_SET_VALUE(minExecuteCost_, minExecuteCost) };


    // operationClass Field Functions 
    bool hasOperationClass() const { return this->operationClass_ != nullptr;};
    void deleteOperationClass() { this->operationClass_ = nullptr;};
    inline string getOperationClass() const { DARABONBA_PTR_GET_DEFAULT(operationClass_, "") };
    inline DescribeSQLLogsV2Request& setOperationClass(string operationClass) { DARABONBA_PTR_SET_VALUE(operationClass_, operationClass) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeSQLLogsV2Request& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeSQLLogsV2Request& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSQLLogsV2Request& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryKeywords Field Functions 
    bool hasQueryKeywords() const { return this->queryKeywords_ != nullptr;};
    void deleteQueryKeywords() { this->queryKeywords_ = nullptr;};
    inline string getQueryKeywords() const { DARABONBA_PTR_GET_DEFAULT(queryKeywords_, "") };
    inline DescribeSQLLogsV2Request& setQueryKeywords(string queryKeywords) { DARABONBA_PTR_SET_VALUE(queryKeywords_, queryKeywords) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSQLLogsV2Request& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSQLLogsV2Request& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceIP Field Functions 
    bool hasSourceIP() const { return this->sourceIP_ != nullptr;};
    void deleteSourceIP() { this->sourceIP_ = nullptr;};
    inline string getSourceIP() const { DARABONBA_PTR_GET_DEFAULT(sourceIP_, "") };
    inline DescribeSQLLogsV2Request& setSourceIP(string sourceIP) { DARABONBA_PTR_SET_VALUE(sourceIP_, sourceIP) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSQLLogsV2Request& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeSQLLogsV2Request& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The ID of instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database.
    shared_ptr<string> database_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time must be in UTC.
    // 
    // >  The end time must be later than the start time. The interval cannot be more than 24 hours.
    shared_ptr<string> endTime_ {};
    // The execution duration of the SQL statement. Unit: seconds.
    shared_ptr<string> executeCost_ {};
    // The execution status of the SQL statement. Valid values:
    // 
    // *   **1**: successful.
    // *   **0**: failed.
    shared_ptr<string> executeState_ {};
    // The maximum amount of time consumed by a slow query. Minimum value: 0. Unit: seconds.
    shared_ptr<string> maxExecuteCost_ {};
    // The minimum amount of time consumed by a slow query. Minimum value: 0. Unit: seconds.
    shared_ptr<string> minExecuteCost_ {};
    // The type of the query language. Valid values:
    // 
    // *   **DQL**
    // *   **DML**
    // *   **DDL**
    // *   **DCL**
    // *   **TCL**
    shared_ptr<string> operationClass_ {};
    // The type of the SQL statement.
    // 
    // > *   If the **OperationClass** parameter is specified, the **OperationType** value must belong to the corresponding query language. For example, if the **OperationClass** value is **DQL**, the **OperationType** value must be a **DQL** SQL statement such as **SELECT**.
    // >*   If the **OperationClass** parameter is not specified, the **OperationType** value can be an SQL statement of all query languages.
    // >*   If neither of the **OperationClass** and **OperationType** parameters is specified, all types of SQL statements are returned.
    shared_ptr<string> operationType_ {};
    // The number of entries to return on each page.
    shared_ptr<string> pageNumber_ {};
    // The number of the page to return. The maximum value is 200.
    shared_ptr<string> pageSize_ {};
    // The keywords of the SQL statement.
    shared_ptr<string> queryKeywords_ {};
    // The region ID of the instance.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The source IP address.
    shared_ptr<string> sourceIP_ {};
    // The beginning of the time range. Specify the time in the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
    // The name of the database account.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
