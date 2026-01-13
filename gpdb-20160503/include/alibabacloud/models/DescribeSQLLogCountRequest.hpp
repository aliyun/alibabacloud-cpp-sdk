// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSQLLogCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecuteCost, executeCost_);
      DARABONBA_PTR_TO_JSON(ExecuteState, executeState_);
      DARABONBA_PTR_TO_JSON(MaxExecuteCost, maxExecuteCost_);
      DARABONBA_PTR_TO_JSON(MinExecuteCost, minExecuteCost_);
      DARABONBA_PTR_TO_JSON(OperationClass, operationClass_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(QueryKeywords, queryKeywords_);
      DARABONBA_PTR_TO_JSON(SourceIP, sourceIP_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecuteCost, executeCost_);
      DARABONBA_PTR_FROM_JSON(ExecuteState, executeState_);
      DARABONBA_PTR_FROM_JSON(MaxExecuteCost, maxExecuteCost_);
      DARABONBA_PTR_FROM_JSON(MinExecuteCost, minExecuteCost_);
      DARABONBA_PTR_FROM_JSON(OperationClass, operationClass_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(QueryKeywords, queryKeywords_);
      DARABONBA_PTR_FROM_JSON(SourceIP, sourceIP_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeSQLLogCountRequest() = default ;
    DescribeSQLLogCountRequest(const DescribeSQLLogCountRequest &) = default ;
    DescribeSQLLogCountRequest(DescribeSQLLogCountRequest &&) = default ;
    DescribeSQLLogCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogCountRequest() = default ;
    DescribeSQLLogCountRequest& operator=(const DescribeSQLLogCountRequest &) = default ;
    DescribeSQLLogCountRequest& operator=(DescribeSQLLogCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->database_ == nullptr && this->endTime_ == nullptr && this->executeCost_ == nullptr && this->executeState_ == nullptr && this->maxExecuteCost_ == nullptr
        && this->minExecuteCost_ == nullptr && this->operationClass_ == nullptr && this->operationType_ == nullptr && this->queryKeywords_ == nullptr && this->sourceIP_ == nullptr
        && this->startTime_ == nullptr && this->user_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSQLLogCountRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeSQLLogCountRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSQLLogCountRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executeCost Field Functions 
    bool hasExecuteCost() const { return this->executeCost_ != nullptr;};
    void deleteExecuteCost() { this->executeCost_ = nullptr;};
    inline string getExecuteCost() const { DARABONBA_PTR_GET_DEFAULT(executeCost_, "") };
    inline DescribeSQLLogCountRequest& setExecuteCost(string executeCost) { DARABONBA_PTR_SET_VALUE(executeCost_, executeCost) };


    // executeState Field Functions 
    bool hasExecuteState() const { return this->executeState_ != nullptr;};
    void deleteExecuteState() { this->executeState_ = nullptr;};
    inline string getExecuteState() const { DARABONBA_PTR_GET_DEFAULT(executeState_, "") };
    inline DescribeSQLLogCountRequest& setExecuteState(string executeState) { DARABONBA_PTR_SET_VALUE(executeState_, executeState) };


    // maxExecuteCost Field Functions 
    bool hasMaxExecuteCost() const { return this->maxExecuteCost_ != nullptr;};
    void deleteMaxExecuteCost() { this->maxExecuteCost_ = nullptr;};
    inline string getMaxExecuteCost() const { DARABONBA_PTR_GET_DEFAULT(maxExecuteCost_, "") };
    inline DescribeSQLLogCountRequest& setMaxExecuteCost(string maxExecuteCost) { DARABONBA_PTR_SET_VALUE(maxExecuteCost_, maxExecuteCost) };


    // minExecuteCost Field Functions 
    bool hasMinExecuteCost() const { return this->minExecuteCost_ != nullptr;};
    void deleteMinExecuteCost() { this->minExecuteCost_ = nullptr;};
    inline string getMinExecuteCost() const { DARABONBA_PTR_GET_DEFAULT(minExecuteCost_, "") };
    inline DescribeSQLLogCountRequest& setMinExecuteCost(string minExecuteCost) { DARABONBA_PTR_SET_VALUE(minExecuteCost_, minExecuteCost) };


    // operationClass Field Functions 
    bool hasOperationClass() const { return this->operationClass_ != nullptr;};
    void deleteOperationClass() { this->operationClass_ = nullptr;};
    inline string getOperationClass() const { DARABONBA_PTR_GET_DEFAULT(operationClass_, "") };
    inline DescribeSQLLogCountRequest& setOperationClass(string operationClass) { DARABONBA_PTR_SET_VALUE(operationClass_, operationClass) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeSQLLogCountRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // queryKeywords Field Functions 
    bool hasQueryKeywords() const { return this->queryKeywords_ != nullptr;};
    void deleteQueryKeywords() { this->queryKeywords_ = nullptr;};
    inline string getQueryKeywords() const { DARABONBA_PTR_GET_DEFAULT(queryKeywords_, "") };
    inline DescribeSQLLogCountRequest& setQueryKeywords(string queryKeywords) { DARABONBA_PTR_SET_VALUE(queryKeywords_, queryKeywords) };


    // sourceIP Field Functions 
    bool hasSourceIP() const { return this->sourceIP_ != nullptr;};
    void deleteSourceIP() { this->sourceIP_ = nullptr;};
    inline string getSourceIP() const { DARABONBA_PTR_GET_DEFAULT(sourceIP_, "") };
    inline DescribeSQLLogCountRequest& setSourceIP(string sourceIP) { DARABONBA_PTR_SET_VALUE(sourceIP_, sourceIP) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSQLLogCountRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeSQLLogCountRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database.
    shared_ptr<string> database_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC.
    // 
    // > The end time must be later than the start time. The maximum time range that can be specified is seven days.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The execution duration of the SQL statement. Unit: seconds.
    shared_ptr<string> executeCost_ {};
    // The execution status of the query. Valid values:
    // 
    // *   1: successful.
    // *   0: failed.
    // *   0,1 or 1,0: all.
    shared_ptr<string> executeState_ {};
    // The maximum amount of time consumed by a slow query. Unit: seconds. Minimum value: 0.
    shared_ptr<string> maxExecuteCost_ {};
    // The minimum amount of time consumed by a slow query. Unit: seconds. Minimum value: 0.
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
    // > 
    // 
    // *   If you specify **OperationClass**, the value of **OperationType** must be of the corresponding query language. For example, if you set **OperationClass** to **DQL**, the value of **OperationType** must be a **DQL** statement such as **SELECT**.
    // 
    // *   If you leave **OperationClass** empty, the value of **OperationType** can be an SQL statement of any query language.
    // 
    // *   If you leave **OperationClass** and **OperationType** empty, all types of SQL statements are returned.
    shared_ptr<string> operationType_ {};
    // The keywords that are used to query audit logs.
    shared_ptr<string> queryKeywords_ {};
    // The source IP address.
    shared_ptr<string> sourceIP_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The name of the database account that is used to connect to the database.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
