// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSACTIONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSACTIONLOGSRESPONSEBODY_HPP_
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
  class DescribeApsActionLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsActionLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(ActionLogs, actionLogs_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WorkloadId, workloadId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsActionLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(ActionLogs, actionLogs_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WorkloadId, workloadId_);
    };
    DescribeApsActionLogsResponseBody() = default ;
    DescribeApsActionLogsResponseBody(const DescribeApsActionLogsResponseBody &) = default ;
    DescribeApsActionLogsResponseBody(DescribeApsActionLogsResponseBody &&) = default ;
    DescribeApsActionLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsActionLogsResponseBody() = default ;
    DescribeApsActionLogsResponseBody& operator=(const DescribeApsActionLogsResponseBody &) = default ;
    DescribeApsActionLogsResponseBody& operator=(DescribeApsActionLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ActionLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ActionLogs& obj) { 
        DARABONBA_PTR_TO_JSON(Context, context_);
        DARABONBA_PTR_TO_JSON(Stage, stage_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, ActionLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(Context, context_);
        DARABONBA_PTR_FROM_JSON(Stage, stage_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      ActionLogs() = default ;
      ActionLogs(const ActionLogs &) = default ;
      ActionLogs(ActionLogs &&) = default ;
      ActionLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ActionLogs() = default ;
      ActionLogs& operator=(const ActionLogs &) = default ;
      ActionLogs& operator=(ActionLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->context_ == nullptr
        && this->stage_ == nullptr && this->state_ == nullptr && this->time_ == nullptr; };
      // context Field Functions 
      bool hasContext() const { return this->context_ != nullptr;};
      void deleteContext() { this->context_ = nullptr;};
      inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
      inline ActionLogs& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
      inline ActionLogs& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ActionLogs& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline ActionLogs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The content of the log.
      shared_ptr<string> context_ {};
      // The phase during which the log was generated. Valid values:
      // 
      // *   **StructureMigrate**: schema migration.
      // *   **FullDataSync**: full data synchronization.
      // *   **IncrementalSync**: incremental data synchronization.
      shared_ptr<string> stage_ {};
      // The type of the log. Multiple log types are separated by commas (,). Valid values:
      // 
      // *   **INFO**
      // *   **WARN**
      // *   **ERROR**
      shared_ptr<string> state_ {};
      // The time when the log was generated. The time follows the ISO 8601 standard in the **yyyy-MM-ddTHH:mm:ssZ** format. The time is displayed in UTC.
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->actionLogs_ == nullptr && this->DBClusterId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->workloadId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeApsActionLogsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // actionLogs Field Functions 
    bool hasActionLogs() const { return this->actionLogs_ != nullptr;};
    void deleteActionLogs() { this->actionLogs_ = nullptr;};
    inline const vector<DescribeApsActionLogsResponseBody::ActionLogs> & getActionLogs() const { DARABONBA_PTR_GET_CONST(actionLogs_, vector<DescribeApsActionLogsResponseBody::ActionLogs>) };
    inline vector<DescribeApsActionLogsResponseBody::ActionLogs> getActionLogs() { DARABONBA_PTR_GET(actionLogs_, vector<DescribeApsActionLogsResponseBody::ActionLogs>) };
    inline DescribeApsActionLogsResponseBody& setActionLogs(const vector<DescribeApsActionLogsResponseBody::ActionLogs> & actionLogs) { DARABONBA_PTR_SET_VALUE(actionLogs_, actionLogs) };
    inline DescribeApsActionLogsResponseBody& setActionLogs(vector<DescribeApsActionLogsResponseBody::ActionLogs> && actionLogs) { DARABONBA_PTR_SET_RVALUE(actionLogs_, actionLogs) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeApsActionLogsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeApsActionLogsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeApsActionLogsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsActionLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeApsActionLogsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workloadId Field Functions 
    bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
    void deleteWorkloadId() { this->workloadId_ = nullptr;};
    inline string getWorkloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
    inline DescribeApsActionLogsResponseBody& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


  protected:
    // The information about the request denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The queried logs.
    shared_ptr<vector<DescribeApsActionLogsResponseBody::ActionLogs>> actionLogs_ {};
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    shared_ptr<string> DBClusterId_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
    // The ID of the real-time data ingestion job.
    shared_ptr<string> workloadId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
