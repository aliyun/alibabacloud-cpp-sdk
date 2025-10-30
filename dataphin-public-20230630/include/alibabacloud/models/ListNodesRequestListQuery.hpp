// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESREQUESTLISTQUERY_HPP_
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
  class ListNodesRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NodeBizType, nodeBizType_);
      DARABONBA_PTR_TO_JSON(NodeSubBizTypeList, nodeSubBizTypeList_);
      DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PriorityList, priorityList_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SchedulePaused, schedulePaused_);
      DARABONBA_PTR_TO_JSON(SchedulePeriodList, schedulePeriodList_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NodeBizType, nodeBizType_);
      DARABONBA_PTR_FROM_JSON(NodeSubBizTypeList, nodeSubBizTypeList_);
      DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PriorityList, priorityList_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SchedulePaused, schedulePaused_);
      DARABONBA_PTR_FROM_JSON(SchedulePeriodList, schedulePeriodList_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
    };
    ListNodesRequestListQuery() = default ;
    ListNodesRequestListQuery(const ListNodesRequestListQuery &) = default ;
    ListNodesRequestListQuery(ListNodesRequestListQuery &&) = default ;
    ListNodesRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesRequestListQuery() = default ;
    ListNodesRequestListQuery& operator=(const ListNodesRequestListQuery &) = default ;
    ListNodesRequestListQuery& operator=(ListNodesRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && return this->nodeBizType_ == nullptr && return this->nodeSubBizTypeList_ == nullptr && return this->ownerList_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr
        && return this->priorityList_ == nullptr && return this->projectId_ == nullptr && return this->schedulePaused_ == nullptr && return this->schedulePeriodList_ == nullptr && return this->scheduleType_ == nullptr
        && return this->searchText_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ListNodesRequestListQuery& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // nodeBizType Field Functions 
    bool hasNodeBizType() const { return this->nodeBizType_ != nullptr;};
    void deleteNodeBizType() { this->nodeBizType_ = nullptr;};
    inline string nodeBizType() const { DARABONBA_PTR_GET_DEFAULT(nodeBizType_, "") };
    inline ListNodesRequestListQuery& setNodeBizType(string nodeBizType) { DARABONBA_PTR_SET_VALUE(nodeBizType_, nodeBizType) };


    // nodeSubBizTypeList Field Functions 
    bool hasNodeSubBizTypeList() const { return this->nodeSubBizTypeList_ != nullptr;};
    void deleteNodeSubBizTypeList() { this->nodeSubBizTypeList_ = nullptr;};
    inline const vector<string> & nodeSubBizTypeList() const { DARABONBA_PTR_GET_CONST(nodeSubBizTypeList_, vector<string>) };
    inline vector<string> nodeSubBizTypeList() { DARABONBA_PTR_GET(nodeSubBizTypeList_, vector<string>) };
    inline ListNodesRequestListQuery& setNodeSubBizTypeList(const vector<string> & nodeSubBizTypeList) { DARABONBA_PTR_SET_VALUE(nodeSubBizTypeList_, nodeSubBizTypeList) };
    inline ListNodesRequestListQuery& setNodeSubBizTypeList(vector<string> && nodeSubBizTypeList) { DARABONBA_PTR_SET_RVALUE(nodeSubBizTypeList_, nodeSubBizTypeList) };


    // ownerList Field Functions 
    bool hasOwnerList() const { return this->ownerList_ != nullptr;};
    void deleteOwnerList() { this->ownerList_ = nullptr;};
    inline const vector<string> & ownerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<string>) };
    inline vector<string> ownerList() { DARABONBA_PTR_GET(ownerList_, vector<string>) };
    inline ListNodesRequestListQuery& setOwnerList(const vector<string> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
    inline ListNodesRequestListQuery& setOwnerList(vector<string> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListNodesRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNodesRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priorityList Field Functions 
    bool hasPriorityList() const { return this->priorityList_ != nullptr;};
    void deletePriorityList() { this->priorityList_ = nullptr;};
    inline const vector<string> & priorityList() const { DARABONBA_PTR_GET_CONST(priorityList_, vector<string>) };
    inline vector<string> priorityList() { DARABONBA_PTR_GET(priorityList_, vector<string>) };
    inline ListNodesRequestListQuery& setPriorityList(const vector<string> & priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };
    inline ListNodesRequestListQuery& setPriorityList(vector<string> && priorityList) { DARABONBA_PTR_SET_RVALUE(priorityList_, priorityList) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListNodesRequestListQuery& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // schedulePaused Field Functions 
    bool hasSchedulePaused() const { return this->schedulePaused_ != nullptr;};
    void deleteSchedulePaused() { this->schedulePaused_ = nullptr;};
    inline bool schedulePaused() const { DARABONBA_PTR_GET_DEFAULT(schedulePaused_, false) };
    inline ListNodesRequestListQuery& setSchedulePaused(bool schedulePaused) { DARABONBA_PTR_SET_VALUE(schedulePaused_, schedulePaused) };


    // schedulePeriodList Field Functions 
    bool hasSchedulePeriodList() const { return this->schedulePeriodList_ != nullptr;};
    void deleteSchedulePeriodList() { this->schedulePeriodList_ = nullptr;};
    inline const vector<string> & schedulePeriodList() const { DARABONBA_PTR_GET_CONST(schedulePeriodList_, vector<string>) };
    inline vector<string> schedulePeriodList() { DARABONBA_PTR_GET(schedulePeriodList_, vector<string>) };
    inline ListNodesRequestListQuery& setSchedulePeriodList(const vector<string> & schedulePeriodList) { DARABONBA_PTR_SET_VALUE(schedulePeriodList_, schedulePeriodList) };
    inline ListNodesRequestListQuery& setSchedulePeriodList(vector<string> && schedulePeriodList) { DARABONBA_PTR_SET_RVALUE(schedulePeriodList_, schedulePeriodList) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline ListNodesRequestListQuery& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListNodesRequestListQuery& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


  protected:
    std::shared_ptr<bool> dryRun_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeBizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> nodeSubBizTypeList_ = nullptr;
    std::shared_ptr<vector<string>> ownerList_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> priorityList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<bool> schedulePaused_ = nullptr;
    std::shared_ptr<vector<string>> schedulePeriodList_ = nullptr;
    std::shared_ptr<string> scheduleType_ = nullptr;
    std::shared_ptr<string> searchText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
