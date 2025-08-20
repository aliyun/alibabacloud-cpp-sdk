// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGRECORDSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGRECORDSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAuditLogRecordsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ConnId, connId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(ProcessID, processID_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(SQLType, SQLType_);
      DARABONBA_PTR_TO_JSON(Succeed, succeed_);
      DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnId, connId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(ProcessID, processID_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(SQLType, SQLType_);
      DARABONBA_PTR_FROM_JSON(Succeed, succeed_);
      DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeAuditLogRecordsResponseBodyItems() = default ;
    DescribeAuditLogRecordsResponseBodyItems(const DescribeAuditLogRecordsResponseBodyItems &) = default ;
    DescribeAuditLogRecordsResponseBodyItems(DescribeAuditLogRecordsResponseBodyItems &&) = default ;
    DescribeAuditLogRecordsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditLogRecordsResponseBodyItems() = default ;
    DescribeAuditLogRecordsResponseBodyItems& operator=(const DescribeAuditLogRecordsResponseBodyItems &) = default ;
    DescribeAuditLogRecordsResponseBodyItems& operator=(DescribeAuditLogRecordsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connId_ != nullptr
        && this->DBName_ != nullptr && this->executeTime_ != nullptr && this->hostAddress_ != nullptr && this->processID_ != nullptr && this->SQLText_ != nullptr
        && this->SQLType_ != nullptr && this->succeed_ != nullptr && this->totalTime_ != nullptr && this->user_ != nullptr; };
    // connId Field Functions 
    bool hasConnId() const { return this->connId_ != nullptr;};
    void deleteConnId() { this->connId_ = nullptr;};
    inline string connId() const { DARABONBA_PTR_GET_DEFAULT(connId_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setConnId(string connId) { DARABONBA_PTR_SET_VALUE(connId_, connId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline string executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // processID Field Functions 
    bool hasProcessID() const { return this->processID_ != nullptr;};
    void deleteProcessID() { this->processID_ = nullptr;};
    inline string processID() const { DARABONBA_PTR_GET_DEFAULT(processID_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setProcessID(string processID) { DARABONBA_PTR_SET_VALUE(processID_, processID) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // SQLType Field Functions 
    bool hasSQLType() const { return this->SQLType_ != nullptr;};
    void deleteSQLType() { this->SQLType_ = nullptr;};
    inline string SQLType() const { DARABONBA_PTR_GET_DEFAULT(SQLType_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setSQLType(string SQLType) { DARABONBA_PTR_SET_VALUE(SQLType_, SQLType) };


    // succeed Field Functions 
    bool hasSucceed() const { return this->succeed_ != nullptr;};
    void deleteSucceed() { this->succeed_ = nullptr;};
    inline string succeed() const { DARABONBA_PTR_GET_DEFAULT(succeed_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setSucceed(string succeed) { DARABONBA_PTR_SET_VALUE(succeed_, succeed) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline string totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setTotalTime(string totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeAuditLogRecordsResponseBodyItems& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The connection ID.
    std::shared_ptr<string> connId_ = nullptr;
    // The name of the database on which the SQL statement was executed.
    std::shared_ptr<string> DBName_ = nullptr;
    // The start time of the execution of the SQL statement. The time is displayed in the ISO 8601 standard in the yyyy-MM-dd HH:mm:ss format. The time must be in UTC.
    std::shared_ptr<string> executeTime_ = nullptr;
    // The IP address and port number of the client that is used to execute the SQL statement.
    std::shared_ptr<string> hostAddress_ = nullptr;
    // The task ID.
    std::shared_ptr<string> processID_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> SQLText_ = nullptr;
    // The type of the SQL statement.
    std::shared_ptr<string> SQLType_ = nullptr;
    // Indicates whether the SQL statement was successfully executed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> succeed_ = nullptr;
    // The amount of time that is consumed to execute the SQL statement. Unit: milliseconds.
    std::shared_ptr<string> totalTime_ = nullptr;
    // The username that is used to execute the SQL statement.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
