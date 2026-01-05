// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    ListWorkflowInstancesShrinkRequest() = default ;
    ListWorkflowInstancesShrinkRequest(const ListWorkflowInstancesShrinkRequest &) = default ;
    ListWorkflowInstancesShrinkRequest(ListWorkflowInstancesShrinkRequest &&) = default ;
    ListWorkflowInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowInstancesShrinkRequest() = default ;
    ListWorkflowInstancesShrinkRequest& operator=(const ListWorkflowInstancesShrinkRequest &) = default ;
    ListWorkflowInstancesShrinkRequest& operator=(ListWorkflowInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->filter_ == nullptr && this->idsShrink_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->sortBy_ == nullptr && this->tagsShrink_ == nullptr && this->type_ == nullptr
        && this->unifiedWorkflowInstanceId_ == nullptr && this->workflowId_ == nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline int64_t getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
    inline ListWorkflowInstancesShrinkRequest& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListWorkflowInstancesShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string getIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline ListWorkflowInstancesShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkflowInstancesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListWorkflowInstancesShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWorkflowInstancesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWorkflowInstancesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListWorkflowInstancesShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListWorkflowInstancesShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListWorkflowInstancesShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListWorkflowInstancesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unifiedWorkflowInstanceId Field Functions 
    bool hasUnifiedWorkflowInstanceId() const { return this->unifiedWorkflowInstanceId_ != nullptr;};
    void deleteUnifiedWorkflowInstanceId() { this->unifiedWorkflowInstanceId_ = nullptr;};
    inline int64_t getUnifiedWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unifiedWorkflowInstanceId_, 0L) };
    inline ListWorkflowInstancesShrinkRequest& setUnifiedWorkflowInstanceId(int64_t unifiedWorkflowInstanceId) { DARABONBA_PTR_SET_VALUE(unifiedWorkflowInstanceId_, unifiedWorkflowInstanceId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ListWorkflowInstancesShrinkRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The data timestamp. The value of this parameter is 00:00:00 of the day before the scheduling time of the instance. The value is a UNIX timestamp. Unit: milliseconds. Example: 1743350400000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> bizDate_ {};
    shared_ptr<string> filter_ {};
    // The IDs of the workflow instances. You can query multiple instances at a time by instance ID.
    shared_ptr<string> idsShrink_ {};
    // The instance name. Fuzzy match is supported.
    shared_ptr<string> name_ {};
    // The account ID of the workflow instance owner.
    shared_ptr<string> owner_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The fields used for sorting. Fields such as TriggerTime and StartedTime are supported. The value of this parameter is in the Sort field + Sort by (Desc/Asc) format. By default, results are sorted in ascending order. Valid values:
    // 
    // *   TriggerTime (Desc/Asc)
    // *   StartedTime (Desc/Asc)
    // *   FinishedTime (Desc/Asc)
    // *   CreateTime (Desc/Asc)
    // *   Id (Desc/Asc)
    // 
    // Default value: Id Desc.
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> tagsShrink_ {};
    // The type of the workflow instance. Valid values:
    // 
    // *   Normal: Scheduled execution
    // *   Manual: Manually triggered node
    // *   SmokeTest: Smoke test
    // *   SupplementData: Data backfill
    // *   ManualWorkflow: Manually triggered workflow
    // *   TriggerWorkflow: Triggered Workflow
    shared_ptr<string> type_ {};
    shared_ptr<int64_t> unifiedWorkflowInstanceId_ {};
    // The ID of the workflow to which the instance belongs.
    shared_ptr<int64_t> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
