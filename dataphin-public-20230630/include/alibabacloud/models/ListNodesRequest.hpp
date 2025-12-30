// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
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
  class ListNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListNodesRequest() = default ;
    ListNodesRequest(const ListNodesRequest &) = default ;
    ListNodesRequest(ListNodesRequest &&) = default ;
    ListNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesRequest() = default ;
    ListNodesRequest& operator=(const ListNodesRequest &) = default ;
    ListNodesRequest& operator=(ListNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
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
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->nodeBizType_ == nullptr && this->nodeSubBizTypeList_ == nullptr && this->ownerList_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->priorityList_ == nullptr && this->projectId_ == nullptr && this->schedulePaused_ == nullptr && this->schedulePeriodList_ == nullptr && this->scheduleType_ == nullptr
        && this->searchText_ == nullptr; };
      // dryRun Field Functions 
      bool hasDryRun() const { return this->dryRun_ != nullptr;};
      void deleteDryRun() { this->dryRun_ = nullptr;};
      inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
      inline ListQuery& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


      // nodeBizType Field Functions 
      bool hasNodeBizType() const { return this->nodeBizType_ != nullptr;};
      void deleteNodeBizType() { this->nodeBizType_ = nullptr;};
      inline string getNodeBizType() const { DARABONBA_PTR_GET_DEFAULT(nodeBizType_, "") };
      inline ListQuery& setNodeBizType(string nodeBizType) { DARABONBA_PTR_SET_VALUE(nodeBizType_, nodeBizType) };


      // nodeSubBizTypeList Field Functions 
      bool hasNodeSubBizTypeList() const { return this->nodeSubBizTypeList_ != nullptr;};
      void deleteNodeSubBizTypeList() { this->nodeSubBizTypeList_ = nullptr;};
      inline const vector<string> & getNodeSubBizTypeList() const { DARABONBA_PTR_GET_CONST(nodeSubBizTypeList_, vector<string>) };
      inline vector<string> getNodeSubBizTypeList() { DARABONBA_PTR_GET(nodeSubBizTypeList_, vector<string>) };
      inline ListQuery& setNodeSubBizTypeList(const vector<string> & nodeSubBizTypeList) { DARABONBA_PTR_SET_VALUE(nodeSubBizTypeList_, nodeSubBizTypeList) };
      inline ListQuery& setNodeSubBizTypeList(vector<string> && nodeSubBizTypeList) { DARABONBA_PTR_SET_RVALUE(nodeSubBizTypeList_, nodeSubBizTypeList) };


      // ownerList Field Functions 
      bool hasOwnerList() const { return this->ownerList_ != nullptr;};
      void deleteOwnerList() { this->ownerList_ = nullptr;};
      inline const vector<string> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<string>) };
      inline vector<string> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<string>) };
      inline ListQuery& setOwnerList(const vector<string> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
      inline ListQuery& setOwnerList(vector<string> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline ListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // priorityList Field Functions 
      bool hasPriorityList() const { return this->priorityList_ != nullptr;};
      void deletePriorityList() { this->priorityList_ = nullptr;};
      inline const vector<string> & getPriorityList() const { DARABONBA_PTR_GET_CONST(priorityList_, vector<string>) };
      inline vector<string> getPriorityList() { DARABONBA_PTR_GET(priorityList_, vector<string>) };
      inline ListQuery& setPriorityList(const vector<string> & priorityList) { DARABONBA_PTR_SET_VALUE(priorityList_, priorityList) };
      inline ListQuery& setPriorityList(vector<string> && priorityList) { DARABONBA_PTR_SET_RVALUE(priorityList_, priorityList) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ListQuery& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // schedulePaused Field Functions 
      bool hasSchedulePaused() const { return this->schedulePaused_ != nullptr;};
      void deleteSchedulePaused() { this->schedulePaused_ = nullptr;};
      inline bool getSchedulePaused() const { DARABONBA_PTR_GET_DEFAULT(schedulePaused_, false) };
      inline ListQuery& setSchedulePaused(bool schedulePaused) { DARABONBA_PTR_SET_VALUE(schedulePaused_, schedulePaused) };


      // schedulePeriodList Field Functions 
      bool hasSchedulePeriodList() const { return this->schedulePeriodList_ != nullptr;};
      void deleteSchedulePeriodList() { this->schedulePeriodList_ = nullptr;};
      inline const vector<string> & getSchedulePeriodList() const { DARABONBA_PTR_GET_CONST(schedulePeriodList_, vector<string>) };
      inline vector<string> getSchedulePeriodList() { DARABONBA_PTR_GET(schedulePeriodList_, vector<string>) };
      inline ListQuery& setSchedulePeriodList(const vector<string> & schedulePeriodList) { DARABONBA_PTR_SET_VALUE(schedulePeriodList_, schedulePeriodList) };
      inline ListQuery& setSchedulePeriodList(vector<string> && schedulePeriodList) { DARABONBA_PTR_SET_RVALUE(schedulePeriodList_, schedulePeriodList) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline ListQuery& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // searchText Field Functions 
      bool hasSearchText() const { return this->searchText_ != nullptr;};
      void deleteSearchText() { this->searchText_ = nullptr;};
      inline string getSearchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
      inline ListQuery& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    protected:
      shared_ptr<bool> dryRun_ {};
      // This parameter is required.
      shared_ptr<string> nodeBizType_ {};
      // This parameter is required.
      shared_ptr<vector<string>> nodeSubBizTypeList_ {};
      shared_ptr<vector<string>> ownerList_ {};
      shared_ptr<int32_t> page_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<string>> priorityList_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<bool> schedulePaused_ {};
      shared_ptr<vector<string>> schedulePeriodList_ {};
      shared_ptr<string> scheduleType_ {};
      shared_ptr<string> searchText_ {};
    };

    virtual bool empty() const override { return this->env_ == nullptr
        && this->listQuery_ == nullptr && this->opTenantId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListNodesRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListNodesRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListNodesRequest::ListQuery) };
    inline ListNodesRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListNodesRequest::ListQuery) };
    inline ListNodesRequest& setListQuery(const ListNodesRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListNodesRequest& setListQuery(ListNodesRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListNodesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<ListNodesRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
