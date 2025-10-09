// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    ListWorkflowsShrinkRequest() = default ;
    ListWorkflowsShrinkRequest(const ListWorkflowsShrinkRequest &) = default ;
    ListWorkflowsShrinkRequest(ListWorkflowsShrinkRequest &&) = default ;
    ListWorkflowsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowsShrinkRequest() = default ;
    ListWorkflowsShrinkRequest& operator=(const ListWorkflowsShrinkRequest &) = default ;
    ListWorkflowsShrinkRequest& operator=(ListWorkflowsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->envType_ != nullptr
        && this->idsShrink_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->projectId_ != nullptr && this->sortBy_ != nullptr && this->triggerType_ != nullptr; };
    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListWorkflowsShrinkRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string idsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline ListWorkflowsShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkflowsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListWorkflowsShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWorkflowsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWorkflowsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListWorkflowsShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListWorkflowsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ListWorkflowsShrinkRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> envType_ = nullptr;
    // The IDs of the workflows. You can query multiple workflows at a time by workflow ID.
    std::shared_ptr<string> idsShrink_ = nullptr;
    // The name of the workflow. Fuzzy match is supported.
    std::shared_ptr<string> name_ = nullptr;
    // The account ID of the workflow owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The field used for sorting. Fields such as TriggerTime and StartedTime are supported. The value of this parameter is in the Sort field + Sort by (Desc/Asc) format. By default, results are sorted in ascending order. Valid values:
    // 
    // *   ModifyTime (Desc/Asc)
    // *   CreateTime (Desc/Asc)
    // *   Id (Desc/Asc)
    // 
    // Default value: Id Desc.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The trigger type. Valid values:
    // 
    // *   Scheduler
    // *   Manual
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
