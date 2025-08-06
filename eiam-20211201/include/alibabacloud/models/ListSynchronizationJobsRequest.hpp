// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSynchronizationJobsRequestFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListSynchronizationJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetIds, targetIds_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetIds, targetIds_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListSynchronizationJobsRequest() = default ;
    ListSynchronizationJobsRequest(const ListSynchronizationJobsRequest &) = default ;
    ListSynchronizationJobsRequest(ListSynchronizationJobsRequest &&) = default ;
    ListSynchronizationJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsRequest() = default ;
    ListSynchronizationJobsRequest& operator=(const ListSynchronizationJobsRequest &) = default ;
    ListSynchronizationJobsRequest& operator=(ListSynchronizationJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->direction_ != nullptr
        && this->endTime_ != nullptr && this->filters_ != nullptr && this->instanceId_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->targetIds_ != nullptr
        && this->targetType_ != nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListSynchronizationJobsRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListSynchronizationJobsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListSynchronizationJobsRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListSynchronizationJobsRequestFilters>) };
    inline vector<ListSynchronizationJobsRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<ListSynchronizationJobsRequestFilters>) };
    inline ListSynchronizationJobsRequest& setFilters(const vector<ListSynchronizationJobsRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListSynchronizationJobsRequest& setFilters(vector<ListSynchronizationJobsRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSynchronizationJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListSynchronizationJobsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSynchronizationJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListSynchronizationJobsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSynchronizationJobsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListSynchronizationJobsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSynchronizationJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetIds Field Functions 
    bool hasTargetIds() const { return this->targetIds_ != nullptr;};
    void deleteTargetIds() { this->targetIds_ = nullptr;};
    inline const vector<string> & targetIds() const { DARABONBA_PTR_GET_CONST(targetIds_, vector<string>) };
    inline vector<string> targetIds() { DARABONBA_PTR_GET(targetIds_, vector<string>) };
    inline ListSynchronizationJobsRequest& setTargetIds(const vector<string> & targetIds) { DARABONBA_PTR_SET_VALUE(targetIds_, targetIds) };
    inline ListSynchronizationJobsRequest& setTargetIds(vector<string> && targetIds) { DARABONBA_PTR_SET_RVALUE(targetIds_, targetIds) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListSynchronizationJobsRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // 同步方向[ingress,egress]
    std::shared_ptr<string> direction_ = nullptr;
    // 同步结束时间
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<ListSynchronizationJobsRequestFilters>> filters_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 分页查询时每页行数。默认值为20，最大值为100。
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    std::shared_ptr<string> nextToken_ = nullptr;
    // 当前查询的列表页码，默认为1。
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // 当前查询的列表页码，默认为20。
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // 同步开始时间
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // 同步状态[pending,running,suspending,failed,partial_success,success]
    std::shared_ptr<string> status_ = nullptr;
    // 同步目标ID
    std::shared_ptr<vector<string>> targetIds_ = nullptr;
    // 同步目标类型[identity_provider,organizational_unit,application,user]
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
