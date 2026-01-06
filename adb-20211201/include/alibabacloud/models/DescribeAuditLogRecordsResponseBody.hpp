// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAuditLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAuditLogRecordsResponseBody() = default ;
    DescribeAuditLogRecordsResponseBody(const DescribeAuditLogRecordsResponseBody &) = default ;
    DescribeAuditLogRecordsResponseBody(DescribeAuditLogRecordsResponseBody &&) = default ;
    DescribeAuditLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditLogRecordsResponseBody() = default ;
    DescribeAuditLogRecordsResponseBody& operator=(const DescribeAuditLogRecordsResponseBody &) = default ;
    DescribeAuditLogRecordsResponseBody& operator=(DescribeAuditLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ConnId, connId_);
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
        DARABONBA_PTR_TO_JSON(ExecuteTimestamp, executeTimestamp_);
        DARABONBA_PTR_TO_JSON(HasDiagnosticInfo, hasDiagnosticInfo_);
        DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
        DARABONBA_PTR_TO_JSON(ProcessID, processID_);
        DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
        DARABONBA_PTR_TO_JSON(SQLType, SQLType_);
        DARABONBA_PTR_TO_JSON(Succeed, succeed_);
        DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnId, connId_);
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
        DARABONBA_PTR_FROM_JSON(ExecuteTimestamp, executeTimestamp_);
        DARABONBA_PTR_FROM_JSON(HasDiagnosticInfo, hasDiagnosticInfo_);
        DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
        DARABONBA_PTR_FROM_JSON(ProcessID, processID_);
        DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
        DARABONBA_PTR_FROM_JSON(SQLType, SQLType_);
        DARABONBA_PTR_FROM_JSON(Succeed, succeed_);
        DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
        DARABONBA_PTR_FROM_JSON(User, user_);
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
      virtual bool empty() const override { return this->connId_ == nullptr
        && this->DBName_ == nullptr && this->executeTime_ == nullptr && this->executeTimestamp_ == nullptr && this->hasDiagnosticInfo_ == nullptr && this->hostAddress_ == nullptr
        && this->processID_ == nullptr && this->SQLText_ == nullptr && this->SQLType_ == nullptr && this->succeed_ == nullptr && this->totalTime_ == nullptr
        && this->user_ == nullptr; };
      // connId Field Functions 
      bool hasConnId() const { return this->connId_ != nullptr;};
      void deleteConnId() { this->connId_ = nullptr;};
      inline string getConnId() const { DARABONBA_PTR_GET_DEFAULT(connId_, "") };
      inline Items& setConnId(string connId) { DARABONBA_PTR_SET_VALUE(connId_, connId) };


      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline Items& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // executeTime Field Functions 
      bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
      void deleteExecuteTime() { this->executeTime_ = nullptr;};
      inline string getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
      inline Items& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


      // executeTimestamp Field Functions 
      bool hasExecuteTimestamp() const { return this->executeTimestamp_ != nullptr;};
      void deleteExecuteTimestamp() { this->executeTimestamp_ = nullptr;};
      inline int64_t getExecuteTimestamp() const { DARABONBA_PTR_GET_DEFAULT(executeTimestamp_, 0L) };
      inline Items& setExecuteTimestamp(int64_t executeTimestamp) { DARABONBA_PTR_SET_VALUE(executeTimestamp_, executeTimestamp) };


      // hasDiagnosticInfo Field Functions 
      bool hasHasDiagnosticInfo() const { return this->hasDiagnosticInfo_ != nullptr;};
      void deleteHasDiagnosticInfo() { this->hasDiagnosticInfo_ = nullptr;};
      inline bool getHasDiagnosticInfo() const { DARABONBA_PTR_GET_DEFAULT(hasDiagnosticInfo_, false) };
      inline Items& setHasDiagnosticInfo(bool hasDiagnosticInfo) { DARABONBA_PTR_SET_VALUE(hasDiagnosticInfo_, hasDiagnosticInfo) };


      // hostAddress Field Functions 
      bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
      void deleteHostAddress() { this->hostAddress_ = nullptr;};
      inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
      inline Items& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


      // processID Field Functions 
      bool hasProcessID() const { return this->processID_ != nullptr;};
      void deleteProcessID() { this->processID_ = nullptr;};
      inline string getProcessID() const { DARABONBA_PTR_GET_DEFAULT(processID_, "") };
      inline Items& setProcessID(string processID) { DARABONBA_PTR_SET_VALUE(processID_, processID) };


      // SQLText Field Functions 
      bool hasSQLText() const { return this->SQLText_ != nullptr;};
      void deleteSQLText() { this->SQLText_ = nullptr;};
      inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
      inline Items& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


      // SQLType Field Functions 
      bool hasSQLType() const { return this->SQLType_ != nullptr;};
      void deleteSQLType() { this->SQLType_ = nullptr;};
      inline string getSQLType() const { DARABONBA_PTR_GET_DEFAULT(SQLType_, "") };
      inline Items& setSQLType(string SQLType) { DARABONBA_PTR_SET_VALUE(SQLType_, SQLType) };


      // succeed Field Functions 
      bool hasSucceed() const { return this->succeed_ != nullptr;};
      void deleteSucceed() { this->succeed_ = nullptr;};
      inline string getSucceed() const { DARABONBA_PTR_GET_DEFAULT(succeed_, "") };
      inline Items& setSucceed(string succeed) { DARABONBA_PTR_SET_VALUE(succeed_, succeed) };


      // totalTime Field Functions 
      bool hasTotalTime() const { return this->totalTime_ != nullptr;};
      void deleteTotalTime() { this->totalTime_ = nullptr;};
      inline string getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, "") };
      inline Items& setTotalTime(string totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Items& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The connection ID.
      shared_ptr<string> connId_ {};
      // The name of the database on which the SQL statement was executed.
      shared_ptr<string> DBName_ {};
      // The start time of the execution of the SQL statement. The time is displayed in the ISO 8601 standard in the yyyy-MM-dd HH:mm:ss format. The time must be in UTC.
      shared_ptr<string> executeTime_ {};
      shared_ptr<int64_t> executeTimestamp_ {};
      shared_ptr<bool> hasDiagnosticInfo_ {};
      // The IP address and port number of the client that is used to execute the SQL statement.
      shared_ptr<string> hostAddress_ {};
      // The task ID.
      shared_ptr<string> processID_ {};
      // The SQL statement.
      shared_ptr<string> SQLText_ {};
      // The type of the SQL statement.
      shared_ptr<string> SQLType_ {};
      // Indicates whether the SQL statement was successfully executed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> succeed_ {};
      // The amount of time that is consumed to execute the SQL statement. Unit: milliseconds.
      shared_ptr<string> totalTime_ {};
      // The username that is used to execute the SQL statement.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAuditLogRecordsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAuditLogRecordsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAuditLogRecordsResponseBody::Items>) };
    inline vector<DescribeAuditLogRecordsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAuditLogRecordsResponseBody::Items>) };
    inline DescribeAuditLogRecordsResponseBody& setItems(const vector<DescribeAuditLogRecordsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAuditLogRecordsResponseBody& setItems(vector<DescribeAuditLogRecordsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeAuditLogRecordsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAuditLogRecordsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuditLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeAuditLogRecordsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    shared_ptr<string> DBClusterId_ {};
    // The queried SQL audit logs.
    shared_ptr<vector<DescribeAuditLogRecordsResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
