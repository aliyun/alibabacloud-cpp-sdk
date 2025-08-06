// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAWORKLOADSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAWORKLOADSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListQuotaWorkloadsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaWorkloadsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeforeWorkloadId, beforeWorkloadId_);
      DARABONBA_PTR_TO_JSON(GmtDequeuedTimeRange, gmtDequeuedTimeRange_);
      DARABONBA_PTR_TO_JSON(GmtEnqueuedTimeRange, gmtEnqueuedTimeRange_);
      DARABONBA_PTR_TO_JSON(GmtPositionModifiedTimeRange, gmtPositionModifiedTimeRange_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubQuotaIds, subQuotaIds_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      DARABONBA_PTR_TO_JSON(WithHistoricalData, withHistoricalData_);
      DARABONBA_PTR_TO_JSON(WorkloadCreatedTimeRange, workloadCreatedTimeRange_);
      DARABONBA_PTR_TO_JSON(WorkloadIds, workloadIds_);
      DARABONBA_PTR_TO_JSON(WorkloadStatuses, workloadStatuses_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
      DARABONBA_PTR_TO_JSON(WorkspaceIds, workspaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaWorkloadsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeforeWorkloadId, beforeWorkloadId_);
      DARABONBA_PTR_FROM_JSON(GmtDequeuedTimeRange, gmtDequeuedTimeRange_);
      DARABONBA_PTR_FROM_JSON(GmtEnqueuedTimeRange, gmtEnqueuedTimeRange_);
      DARABONBA_PTR_FROM_JSON(GmtPositionModifiedTimeRange, gmtPositionModifiedTimeRange_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubQuotaIds, subQuotaIds_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      DARABONBA_PTR_FROM_JSON(WithHistoricalData, withHistoricalData_);
      DARABONBA_PTR_FROM_JSON(WorkloadCreatedTimeRange, workloadCreatedTimeRange_);
      DARABONBA_PTR_FROM_JSON(WorkloadIds, workloadIds_);
      DARABONBA_PTR_FROM_JSON(WorkloadStatuses, workloadStatuses_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceIds, workspaceIds_);
    };
    ListQuotaWorkloadsRequest() = default ;
    ListQuotaWorkloadsRequest(const ListQuotaWorkloadsRequest &) = default ;
    ListQuotaWorkloadsRequest(ListQuotaWorkloadsRequest &&) = default ;
    ListQuotaWorkloadsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaWorkloadsRequest() = default ;
    ListQuotaWorkloadsRequest& operator=(const ListQuotaWorkloadsRequest &) = default ;
    ListQuotaWorkloadsRequest& operator=(ListQuotaWorkloadsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beforeWorkloadId_ != nullptr
        && this->gmtDequeuedTimeRange_ != nullptr && this->gmtEnqueuedTimeRange_ != nullptr && this->gmtPositionModifiedTimeRange_ != nullptr && this->nodeName_ != nullptr && this->order_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->showOwn_ != nullptr && this->sortBy_ != nullptr && this->status_ != nullptr
        && this->subQuotaIds_ != nullptr && this->userIds_ != nullptr && this->withHistoricalData_ != nullptr && this->workloadCreatedTimeRange_ != nullptr && this->workloadIds_ != nullptr
        && this->workloadStatuses_ != nullptr && this->workloadType_ != nullptr && this->workspaceIds_ != nullptr; };
    // beforeWorkloadId Field Functions 
    bool hasBeforeWorkloadId() const { return this->beforeWorkloadId_ != nullptr;};
    void deleteBeforeWorkloadId() { this->beforeWorkloadId_ = nullptr;};
    inline string beforeWorkloadId() const { DARABONBA_PTR_GET_DEFAULT(beforeWorkloadId_, "") };
    inline ListQuotaWorkloadsRequest& setBeforeWorkloadId(string beforeWorkloadId) { DARABONBA_PTR_SET_VALUE(beforeWorkloadId_, beforeWorkloadId) };


    // gmtDequeuedTimeRange Field Functions 
    bool hasGmtDequeuedTimeRange() const { return this->gmtDequeuedTimeRange_ != nullptr;};
    void deleteGmtDequeuedTimeRange() { this->gmtDequeuedTimeRange_ = nullptr;};
    inline const TimeRangeFilter & gmtDequeuedTimeRange() const { DARABONBA_PTR_GET_CONST(gmtDequeuedTimeRange_, TimeRangeFilter) };
    inline TimeRangeFilter gmtDequeuedTimeRange() { DARABONBA_PTR_GET(gmtDequeuedTimeRange_, TimeRangeFilter) };
    inline ListQuotaWorkloadsRequest& setGmtDequeuedTimeRange(const TimeRangeFilter & gmtDequeuedTimeRange) { DARABONBA_PTR_SET_VALUE(gmtDequeuedTimeRange_, gmtDequeuedTimeRange) };
    inline ListQuotaWorkloadsRequest& setGmtDequeuedTimeRange(TimeRangeFilter && gmtDequeuedTimeRange) { DARABONBA_PTR_SET_RVALUE(gmtDequeuedTimeRange_, gmtDequeuedTimeRange) };


    // gmtEnqueuedTimeRange Field Functions 
    bool hasGmtEnqueuedTimeRange() const { return this->gmtEnqueuedTimeRange_ != nullptr;};
    void deleteGmtEnqueuedTimeRange() { this->gmtEnqueuedTimeRange_ = nullptr;};
    inline const TimeRangeFilter & gmtEnqueuedTimeRange() const { DARABONBA_PTR_GET_CONST(gmtEnqueuedTimeRange_, TimeRangeFilter) };
    inline TimeRangeFilter gmtEnqueuedTimeRange() { DARABONBA_PTR_GET(gmtEnqueuedTimeRange_, TimeRangeFilter) };
    inline ListQuotaWorkloadsRequest& setGmtEnqueuedTimeRange(const TimeRangeFilter & gmtEnqueuedTimeRange) { DARABONBA_PTR_SET_VALUE(gmtEnqueuedTimeRange_, gmtEnqueuedTimeRange) };
    inline ListQuotaWorkloadsRequest& setGmtEnqueuedTimeRange(TimeRangeFilter && gmtEnqueuedTimeRange) { DARABONBA_PTR_SET_RVALUE(gmtEnqueuedTimeRange_, gmtEnqueuedTimeRange) };


    // gmtPositionModifiedTimeRange Field Functions 
    bool hasGmtPositionModifiedTimeRange() const { return this->gmtPositionModifiedTimeRange_ != nullptr;};
    void deleteGmtPositionModifiedTimeRange() { this->gmtPositionModifiedTimeRange_ = nullptr;};
    inline const TimeRangeFilter & gmtPositionModifiedTimeRange() const { DARABONBA_PTR_GET_CONST(gmtPositionModifiedTimeRange_, TimeRangeFilter) };
    inline TimeRangeFilter gmtPositionModifiedTimeRange() { DARABONBA_PTR_GET(gmtPositionModifiedTimeRange_, TimeRangeFilter) };
    inline ListQuotaWorkloadsRequest& setGmtPositionModifiedTimeRange(const TimeRangeFilter & gmtPositionModifiedTimeRange) { DARABONBA_PTR_SET_VALUE(gmtPositionModifiedTimeRange_, gmtPositionModifiedTimeRange) };
    inline ListQuotaWorkloadsRequest& setGmtPositionModifiedTimeRange(TimeRangeFilter && gmtPositionModifiedTimeRange) { DARABONBA_PTR_SET_RVALUE(gmtPositionModifiedTimeRange_, gmtPositionModifiedTimeRange) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListQuotaWorkloadsRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListQuotaWorkloadsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListQuotaWorkloadsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListQuotaWorkloadsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // showOwn Field Functions 
    bool hasShowOwn() const { return this->showOwn_ != nullptr;};
    void deleteShowOwn() { this->showOwn_ = nullptr;};
    inline bool showOwn() const { DARABONBA_PTR_GET_DEFAULT(showOwn_, false) };
    inline ListQuotaWorkloadsRequest& setShowOwn(bool showOwn) { DARABONBA_PTR_SET_VALUE(showOwn_, showOwn) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListQuotaWorkloadsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListQuotaWorkloadsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subQuotaIds Field Functions 
    bool hasSubQuotaIds() const { return this->subQuotaIds_ != nullptr;};
    void deleteSubQuotaIds() { this->subQuotaIds_ = nullptr;};
    inline string subQuotaIds() const { DARABONBA_PTR_GET_DEFAULT(subQuotaIds_, "") };
    inline ListQuotaWorkloadsRequest& setSubQuotaIds(string subQuotaIds) { DARABONBA_PTR_SET_VALUE(subQuotaIds_, subQuotaIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string userIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline ListQuotaWorkloadsRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


    // withHistoricalData Field Functions 
    bool hasWithHistoricalData() const { return this->withHistoricalData_ != nullptr;};
    void deleteWithHistoricalData() { this->withHistoricalData_ = nullptr;};
    inline bool withHistoricalData() const { DARABONBA_PTR_GET_DEFAULT(withHistoricalData_, false) };
    inline ListQuotaWorkloadsRequest& setWithHistoricalData(bool withHistoricalData) { DARABONBA_PTR_SET_VALUE(withHistoricalData_, withHistoricalData) };


    // workloadCreatedTimeRange Field Functions 
    bool hasWorkloadCreatedTimeRange() const { return this->workloadCreatedTimeRange_ != nullptr;};
    void deleteWorkloadCreatedTimeRange() { this->workloadCreatedTimeRange_ = nullptr;};
    inline const TimeRangeFilter & workloadCreatedTimeRange() const { DARABONBA_PTR_GET_CONST(workloadCreatedTimeRange_, TimeRangeFilter) };
    inline TimeRangeFilter workloadCreatedTimeRange() { DARABONBA_PTR_GET(workloadCreatedTimeRange_, TimeRangeFilter) };
    inline ListQuotaWorkloadsRequest& setWorkloadCreatedTimeRange(const TimeRangeFilter & workloadCreatedTimeRange) { DARABONBA_PTR_SET_VALUE(workloadCreatedTimeRange_, workloadCreatedTimeRange) };
    inline ListQuotaWorkloadsRequest& setWorkloadCreatedTimeRange(TimeRangeFilter && workloadCreatedTimeRange) { DARABONBA_PTR_SET_RVALUE(workloadCreatedTimeRange_, workloadCreatedTimeRange) };


    // workloadIds Field Functions 
    bool hasWorkloadIds() const { return this->workloadIds_ != nullptr;};
    void deleteWorkloadIds() { this->workloadIds_ = nullptr;};
    inline string workloadIds() const { DARABONBA_PTR_GET_DEFAULT(workloadIds_, "") };
    inline ListQuotaWorkloadsRequest& setWorkloadIds(string workloadIds) { DARABONBA_PTR_SET_VALUE(workloadIds_, workloadIds) };


    // workloadStatuses Field Functions 
    bool hasWorkloadStatuses() const { return this->workloadStatuses_ != nullptr;};
    void deleteWorkloadStatuses() { this->workloadStatuses_ = nullptr;};
    inline string workloadStatuses() const { DARABONBA_PTR_GET_DEFAULT(workloadStatuses_, "") };
    inline ListQuotaWorkloadsRequest& setWorkloadStatuses(string workloadStatuses) { DARABONBA_PTR_SET_VALUE(workloadStatuses_, workloadStatuses) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string workloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline ListQuotaWorkloadsRequest& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline string workspaceIds() const { DARABONBA_PTR_GET_DEFAULT(workspaceIds_, "") };
    inline ListQuotaWorkloadsRequest& setWorkspaceIds(string workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };


  protected:
    std::shared_ptr<string> beforeWorkloadId_ = nullptr;
    std::shared_ptr<TimeRangeFilter> gmtDequeuedTimeRange_ = nullptr;
    std::shared_ptr<TimeRangeFilter> gmtEnqueuedTimeRange_ = nullptr;
    std::shared_ptr<TimeRangeFilter> gmtPositionModifiedTimeRange_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<bool> showOwn_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subQuotaIds_ = nullptr;
    std::shared_ptr<string> userIds_ = nullptr;
    std::shared_ptr<bool> withHistoricalData_ = nullptr;
    std::shared_ptr<TimeRangeFilter> workloadCreatedTimeRange_ = nullptr;
    std::shared_ptr<string> workloadIds_ = nullptr;
    std::shared_ptr<string> workloadStatuses_ = nullptr;
    std::shared_ptr<string> workloadType_ = nullptr;
    std::shared_ptr<string> workspaceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
