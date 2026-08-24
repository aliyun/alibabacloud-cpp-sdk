// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPFSSQLSUMMARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPFSSQLSUMMARIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetPfsSqlSummariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPfsSqlSummariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Asc, asc_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetPfsSqlSummariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Asc, asc_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetPfsSqlSummariesRequest() = default ;
    GetPfsSqlSummariesRequest(const GetPfsSqlSummariesRequest &) = default ;
    GetPfsSqlSummariesRequest(GetPfsSqlSummariesRequest &&) = default ;
    GetPfsSqlSummariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPfsSqlSummariesRequest() = default ;
    GetPfsSqlSummariesRequest& operator=(const GetPfsSqlSummariesRequest &) = default ;
    GetPfsSqlSummariesRequest& operator=(GetPfsSqlSummariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asc_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->keywords_ == nullptr && this->nodeId_ == nullptr && this->orderBy_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->sqlId_ == nullptr && this->startTime_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool getAsc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline GetPfsSqlSummariesRequest& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetPfsSqlSummariesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetPfsSqlSummariesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline GetPfsSqlSummariesRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetPfsSqlSummariesRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetPfsSqlSummariesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetPfsSqlSummariesRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetPfsSqlSummariesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetPfsSqlSummariesRequest& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetPfsSqlSummariesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Sort in ascending order. Default is **false**.
    // 
    // - **true**: Yes.
    // 
    // - **false**: No.
    shared_ptr<bool> asc_ {};
    // End time of the query, in Unix timestamp format, in milliseconds.
    // 
    // > The end time must be later than the start time. You can query data for any seven-day period within the last 30 days.
    shared_ptr<int64_t> endTime_ {};
    // Database instance ID.
    shared_ptr<string> instanceId_ {};
    // Keywords in the SQL text. Separate multiple keywords with spaces.
    shared_ptr<string> keywords_ {};
    // Node ID.
    // 
    // > Provide a node ID for RDS MySQL Cluster Edition or PolarDB for MySQL database instances.
    shared_ptr<string> nodeId_ {};
    // Field to sort by. Default is **count**.
    // 
    // - **count**: Number of executions.
    // 
    // - **avgLatency**: Average execution time.
    // 
    // - **rowsExamined**: Total number of scanned rows.
    // 
    // - **rowsExaminedAvg**: Average number of scanned rows.
    // 
    // - **rowsSentAvg**: Average number of returned rows.
    shared_ptr<string> orderBy_ {};
    // Page number for paged queries. Start from 1. Default is 1.
    shared_ptr<int32_t> pageNo_ {};
    // Maximum number of records per page for paged queries. Default is 10. Maximum is 100.
    shared_ptr<int32_t> pageSize_ {};
    // SQL ID.
    // 
    // > If you specify an SQL ID, the system returns statistics for that SQL ID only. If you leave this parameter empty, the system returns statistics for the entire database instance.
    shared_ptr<string> sqlId_ {};
    // Start time of the query, in Unix timestamp format, in milliseconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
