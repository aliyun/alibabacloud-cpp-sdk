// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListInstancesRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(MaxBizDate, maxBizDate_);
      DARABONBA_PTR_TO_JSON(MaxRunDate, maxRunDate_);
      DARABONBA_PTR_TO_JSON(MinBizDate, minBizDate_);
      DARABONBA_PTR_TO_JSON(MinRunDate, minRunDate_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PriorityList, priorityList_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RunStatusList, runStatusList_);
      DARABONBA_PTR_TO_JSON(SchedulePaused, schedulePaused_);
      DARABONBA_PTR_TO_JSON(SchedulePeriodList, schedulePeriodList_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
      DARABONBA_PTR_TO_JSON(SubBizTypeList, subBizTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(MaxBizDate, maxBizDate_);
      DARABONBA_PTR_FROM_JSON(MaxRunDate, maxRunDate_);
      DARABONBA_PTR_FROM_JSON(MinBizDate, minBizDate_);
      DARABONBA_PTR_FROM_JSON(MinRunDate, minRunDate_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PriorityList, priorityList_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RunStatusList, runStatusList_);
      DARABONBA_PTR_FROM_JSON(SchedulePaused, schedulePaused_);
      DARABONBA_PTR_FROM_JSON(SchedulePeriodList, schedulePeriodList_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
      DARABONBA_PTR_FROM_JSON(SubBizTypeList, subBizTypeList_);
    };
    ListInstancesRequestListQuery() = default ;
    ListInstancesRequestListQuery(const ListInstancesRequestListQuery &) = default ;
    ListInstancesRequestListQuery(ListInstancesRequestListQuery &&) = default ;
    ListInstancesRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesRequestListQuery() = default ;
    ListInstancesRequestListQuery& operator=(const ListInstancesRequestListQuery &) = default ;
    ListInstancesRequestListQuery& operator=(ListInstancesRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->bizUnitId_ != nullptr && this->flowId_ != nullptr && this->maxBizDate_ != nullptr && this->maxRunDate_ != nullptr && this->minBizDate_ != nullptr
        && this->minRunDate_ != nullptr && this->nodeId_ != nullptr && this->ownerList_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr
        && this->priorityList_ != nullptr && this->projectId_ != nullptr && this->runStatusList_ != nullptr && this->schedulePaused_ != nullptr && this->schedulePeriodList_ != nullptr
        && this->scheduleType_ != nullptr && this->searchText_ != nullptr && this->subBizTypeList_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListInstancesRequestListQuery& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline ListInstancesRequestListQuery& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline ListInstancesRequestListQuery& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // maxBizDate Field Functions 
    bool hasMaxBizDate() const { return this->maxBizDate_ != nullptr;};
    void deleteMaxBizDate() { this->maxBizDate_ = nullptr;};
    inline string maxBizDate() const { DARABONBA_PTR_GET_DEFAULT(maxBizDate_, "") };
    inline ListInstancesRequestListQuery& setMaxBizDate(string maxBizDate) { DARABONBA_PTR_SET_VALUE(maxBizDate_, maxBizDate) };


    // maxRunDate Field Functions 
    bool hasMaxRunDate() const { return this->maxRunDate_ != nullptr;};
    void deleteMaxRunDate() { this->maxRunDate_ = nullptr;};
    inline string maxRunDate() const { DARABONBA_PTR_GET_DEFAULT(maxRunDate_, "") };
    inline ListInstancesRequestListQuery& setMaxRunDate(string maxRunDate) { DARABONBA_PTR_SET_VALUE(maxRunDate_, maxRunDate) };


    // minBizDate Field Functions 
    bool hasMinBizDate() const { return this->minBizDate_ != nullptr;};
    void deleteMinBizDate() { this->minBizDate_ = nullptr;};
    inline string minBizDate() const { DARABONBA_PTR_GET_DEFAULT(minBizDate_, "") };
    inline ListInstancesRequestListQuery& setMinBizDate(string minBizDate) { DARABONBA_PTR_SET_VALUE(minBizDate_, minBizDate) };


    // minRunDate Field Functions 
    bool hasMinRunDate() const { return this->minRunDate_ != nullptr;};
    void deleteMinRunDate() { this->minRunDate_ = nullptr;};
    inline string minRunDate() const { DARABONBA_PTR_GET_DEFAULT(minRunDate_, "") };
    inline ListInstancesRequestListQuery& setMinRunDate(string minRunDate) { DARABONBA_PTR_SET_VALUE(minRunDate_, minRunDate) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListInstancesRequestListQuery& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // ownerList Field Functions 
    bool hasOwnerList() const { return this->ownerList_ != nullptr;};
    void deleteOwnerList() { this->ownerList_ = nullptr;};
    inline const vector<string> & ownerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<string>) };
    inline vector<string> ownerList() { DARABONBA_PTR_GET(ownerList_, vector<string>) };
    inline ListInstancesRequestListQuery& setOwnerList(const vector<string> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
    inline ListInstancesRequestListQuery& setOwnerList(vector<string> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListInstancesRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priorityList Field Functions 
    bool hasPriorityList() const { return this->priorityList_ != nullptr;};
    void deletePriorityList() { this->priorityList_ = nullptr;};
    inline const vector<string> & priorityList() const { DARABONBA_PTR_GET_CONST(priorityList_, vector<string>) };
    inline vector<string> priorityList() { DARABONBA_PTR_GET(priorityList_, vector<string>) };
    inline ListInstancesRequestListQuery& setPriorityList(const vector<string> & priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };
    inline ListInstancesRequestListQuery& setPriorityList(vector<string> && priorityList) { DARABONBA_PTR_SET_RVALUE(priorityList_, priorityList) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListInstancesRequestListQuery& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runStatusList Field Functions 
    bool hasRunStatusList() const { return this->runStatusList_ != nullptr;};
    void deleteRunStatusList() { this->runStatusList_ = nullptr;};
    inline const vector<string> & runStatusList() const { DARABONBA_PTR_GET_CONST(runStatusList_, vector<string>) };
    inline vector<string> runStatusList() { DARABONBA_PTR_GET(runStatusList_, vector<string>) };
    inline ListInstancesRequestListQuery& setRunStatusList(const vector<string> & runStatusList) { DARABONBA_PTR_SET_VALUE(runStatusList_, runStatusList) };
    inline ListInstancesRequestListQuery& setRunStatusList(vector<string> && runStatusList) { DARABONBA_PTR_SET_RVALUE(runStatusList_, runStatusList) };


    // schedulePaused Field Functions 
    bool hasSchedulePaused() const { return this->schedulePaused_ != nullptr;};
    void deleteSchedulePaused() { this->schedulePaused_ = nullptr;};
    inline bool schedulePaused() const { DARABONBA_PTR_GET_DEFAULT(schedulePaused_, false) };
    inline ListInstancesRequestListQuery& setSchedulePaused(bool schedulePaused) { DARABONBA_PTR_SET_VALUE(schedulePaused_, schedulePaused) };


    // schedulePeriodList Field Functions 
    bool hasSchedulePeriodList() const { return this->schedulePeriodList_ != nullptr;};
    void deleteSchedulePeriodList() { this->schedulePeriodList_ = nullptr;};
    inline const vector<string> & schedulePeriodList() const { DARABONBA_PTR_GET_CONST(schedulePeriodList_, vector<string>) };
    inline vector<string> schedulePeriodList() { DARABONBA_PTR_GET(schedulePeriodList_, vector<string>) };
    inline ListInstancesRequestListQuery& setSchedulePeriodList(const vector<string> & schedulePeriodList) { DARABONBA_PTR_SET_VALUE(schedulePeriodList_, schedulePeriodList) };
    inline ListInstancesRequestListQuery& setSchedulePeriodList(vector<string> && schedulePeriodList) { DARABONBA_PTR_SET_RVALUE(schedulePeriodList_, schedulePeriodList) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline ListInstancesRequestListQuery& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListInstancesRequestListQuery& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // subBizTypeList Field Functions 
    bool hasSubBizTypeList() const { return this->subBizTypeList_ != nullptr;};
    void deleteSubBizTypeList() { this->subBizTypeList_ = nullptr;};
    inline const vector<string> & subBizTypeList() const { DARABONBA_PTR_GET_CONST(subBizTypeList_, vector<string>) };
    inline vector<string> subBizTypeList() { DARABONBA_PTR_GET(subBizTypeList_, vector<string>) };
    inline ListInstancesRequestListQuery& setSubBizTypeList(const vector<string> & subBizTypeList) { DARABONBA_PTR_SET_VALUE(subBizTypeList_, subBizTypeList) };
    inline ListInstancesRequestListQuery& setSubBizTypeList(vector<string> && subBizTypeList) { DARABONBA_PTR_SET_RVALUE(subBizTypeList_, subBizTypeList) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
    std::shared_ptr<string> flowId_ = nullptr;
    std::shared_ptr<string> maxBizDate_ = nullptr;
    std::shared_ptr<string> maxRunDate_ = nullptr;
    std::shared_ptr<string> minBizDate_ = nullptr;
    std::shared_ptr<string> minRunDate_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<vector<string>> ownerList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> priorityList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<vector<string>> runStatusList_ = nullptr;
    std::shared_ptr<bool> schedulePaused_ = nullptr;
    std::shared_ptr<vector<string>> schedulePeriodList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scheduleType_ = nullptr;
    std::shared_ptr<string> searchText_ = nullptr;
    std::shared_ptr<vector<string>> subBizTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
