// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKAUDITLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKAUDITLOGRECORDSRESPONSEBODY_HPP_
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
  class DescribeSparkAuditLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkAuditLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkAuditLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSparkAuditLogRecordsResponseBody() = default ;
    DescribeSparkAuditLogRecordsResponseBody(const DescribeSparkAuditLogRecordsResponseBody &) = default ;
    DescribeSparkAuditLogRecordsResponseBody(DescribeSparkAuditLogRecordsResponseBody &&) = default ;
    DescribeSparkAuditLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkAuditLogRecordsResponseBody() = default ;
    DescribeSparkAuditLogRecordsResponseBody& operator=(const DescribeSparkAuditLogRecordsResponseBody &) = default ;
    DescribeSparkAuditLogRecordsResponseBody& operator=(DescribeSparkAuditLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(ErrorTrace, errorTrace_);
        DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
        DARABONBA_PTR_TO_JSON(InnerQueryId, innerQueryId_);
        DARABONBA_PTR_TO_JSON(IsDiagnosable, isDiagnosable_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
        DARABONBA_PTR_TO_JSON(StatementId, statementId_);
        DARABONBA_PTR_TO_JSON(StatementSource, statementSource_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(ErrorTrace, errorTrace_);
        DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
        DARABONBA_PTR_FROM_JSON(InnerQueryId, innerQueryId_);
        DARABONBA_PTR_FROM_JSON(IsDiagnosable, isDiagnosable_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
        DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
        DARABONBA_PTR_FROM_JSON(StatementSource, statementSource_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientIp_ == nullptr && this->errorMsg_ == nullptr && this->errorTrace_ == nullptr && this->executeTime_ == nullptr && this->innerQueryId_ == nullptr
        && this->isDiagnosable_ == nullptr && this->processId_ == nullptr && this->resourceGroupName_ == nullptr && this->SQLText_ == nullptr && this->statementId_ == nullptr
        && this->statementSource_ == nullptr && this->status_ == nullptr && this->totalTime_ == nullptr && this->user_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Items& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Items& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Items& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // errorTrace Field Functions 
      bool hasErrorTrace() const { return this->errorTrace_ != nullptr;};
      void deleteErrorTrace() { this->errorTrace_ = nullptr;};
      inline string getErrorTrace() const { DARABONBA_PTR_GET_DEFAULT(errorTrace_, "") };
      inline Items& setErrorTrace(string errorTrace) { DARABONBA_PTR_SET_VALUE(errorTrace_, errorTrace) };


      // executeTime Field Functions 
      bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
      void deleteExecuteTime() { this->executeTime_ = nullptr;};
      inline string getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
      inline Items& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


      // innerQueryId Field Functions 
      bool hasInnerQueryId() const { return this->innerQueryId_ != nullptr;};
      void deleteInnerQueryId() { this->innerQueryId_ = nullptr;};
      inline string getInnerQueryId() const { DARABONBA_PTR_GET_DEFAULT(innerQueryId_, "") };
      inline Items& setInnerQueryId(string innerQueryId) { DARABONBA_PTR_SET_VALUE(innerQueryId_, innerQueryId) };


      // isDiagnosable Field Functions 
      bool hasIsDiagnosable() const { return this->isDiagnosable_ != nullptr;};
      void deleteIsDiagnosable() { this->isDiagnosable_ = nullptr;};
      inline bool getIsDiagnosable() const { DARABONBA_PTR_GET_DEFAULT(isDiagnosable_, false) };
      inline Items& setIsDiagnosable(bool isDiagnosable) { DARABONBA_PTR_SET_VALUE(isDiagnosable_, isDiagnosable) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Items& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline Items& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // SQLText Field Functions 
      bool hasSQLText() const { return this->SQLText_ != nullptr;};
      void deleteSQLText() { this->SQLText_ = nullptr;};
      inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
      inline Items& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


      // statementId Field Functions 
      bool hasStatementId() const { return this->statementId_ != nullptr;};
      void deleteStatementId() { this->statementId_ = nullptr;};
      inline string getStatementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, "") };
      inline Items& setStatementId(string statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


      // statementSource Field Functions 
      bool hasStatementSource() const { return this->statementSource_ != nullptr;};
      void deleteStatementSource() { this->statementSource_ = nullptr;};
      inline string getStatementSource() const { DARABONBA_PTR_GET_DEFAULT(statementSource_, "") };
      inline Items& setStatementSource(string statementSource) { DARABONBA_PTR_SET_VALUE(statementSource_, statementSource) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalTime Field Functions 
      bool hasTotalTime() const { return this->totalTime_ != nullptr;};
      void deleteTotalTime() { this->totalTime_ = nullptr;};
      inline int64_t getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
      inline Items& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Items& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The Spark application ID.
      shared_ptr<string> appId_ {};
      // The source IP address.
      shared_ptr<string> clientIp_ {};
      // The SQL execution error message.
      shared_ptr<string> errorMsg_ {};
      // The SQL execution error stack trace.
      shared_ptr<string> errorTrace_ {};
      // The start time of the SQL statement. The time is in the yyyy-MM-ddTHH:mm:ssZ format. The time is in UTC.
      shared_ptr<string> executeTime_ {};
      // The ID of the query executed within the Spark application.
      shared_ptr<string> innerQueryId_ {};
      // Whether it can be diagnosed.
      shared_ptr<bool> isDiagnosable_ {};
      // The query ID.
      shared_ptr<string> processId_ {};
      // The resource group name.
      shared_ptr<string> resourceGroupName_ {};
      // The SQL statement.
      shared_ptr<string> SQLText_ {};
      // The ID of the statement.
      shared_ptr<string> statementId_ {};
      // The source from which the query was initiated.
      // 
      // Valid values:
      // 
      // *   SQL_EDITOR: SQL_EDITOR.
      // *   JDBC: JDBC.
      shared_ptr<string> statementSource_ {};
      // The execution status of the SQL statement.
      // 
      // Valid values:
      // 
      // *   cancel: The task is canceled .
      // *   finished: The execution succeeds .
      // *   error: The execution fails .
      // *   timeout: The execution of the command timed out.
      shared_ptr<string> status_ {};
      // The duration of the SQL statement. Unit: milliseconds.
      shared_ptr<int64_t> totalTime_ {};
      // The username that is used to execute SQL statements.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->DBClusterId_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeSparkAuditLogRecordsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeSparkAuditLogRecordsResponseBody::Items>) };
    inline vector<DescribeSparkAuditLogRecordsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeSparkAuditLogRecordsResponseBody::Items>) };
    inline DescribeSparkAuditLogRecordsResponseBody& setItems(const vector<DescribeSparkAuditLogRecordsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSparkAuditLogRecordsResponseBody& setItems(vector<DescribeSparkAuditLogRecordsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the access denial. This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    shared_ptr<string> accessDeniedDetail_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The list of SQL audit logs.
    shared_ptr<vector<DescribeSparkAuditLogRecordsResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries to return per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
