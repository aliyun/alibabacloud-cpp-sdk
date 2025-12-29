// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryTaskListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Result, resultShrink_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskTypeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Result, resultShrink_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskTypeShrink_);
    };
    QueryTaskListShrinkRequest() = default ;
    QueryTaskListShrinkRequest(const QueryTaskListShrinkRequest &) = default ;
    QueryTaskListShrinkRequest(QueryTaskListShrinkRequest &&) = default ;
    QueryTaskListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskListShrinkRequest() = default ;
    QueryTaskListShrinkRequest& operator=(const QueryTaskListShrinkRequest &) = default ;
    QueryTaskListShrinkRequest& operator=(QueryTaskListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->ownerId_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->resultShrink_ == nullptr
        && this->tagId_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskTypeShrink_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryTaskListShrinkRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryTaskListShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryTaskListShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryTaskListShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryTaskListShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resultShrink Field Functions 
    bool hasResultShrink() const { return this->resultShrink_ != nullptr;};
    void deleteResultShrink() { this->resultShrink_ = nullptr;};
    inline string getResultShrink() const { DARABONBA_PTR_GET_DEFAULT(resultShrink_, "") };
    inline QueryTaskListShrinkRequest& setResultShrink(string resultShrink) { DARABONBA_PTR_SET_VALUE(resultShrink_, resultShrink) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline int64_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
    inline QueryTaskListShrinkRequest& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline QueryTaskListShrinkRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline QueryTaskListShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskTypeShrink Field Functions 
    bool hasTaskTypeShrink() const { return this->taskTypeShrink_ != nullptr;};
    void deleteTaskTypeShrink() { this->taskTypeShrink_ = nullptr;};
    inline string getTaskTypeShrink() const { DARABONBA_PTR_GET_DEFAULT(taskTypeShrink_, "") };
    inline QueryTaskListShrinkRequest& setTaskTypeShrink(string taskTypeShrink) { DARABONBA_PTR_SET_VALUE(taskTypeShrink_, taskTypeShrink) };


  protected:
    shared_ptr<int64_t> currentPage_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> resultShrink_ {};
    shared_ptr<int64_t> tagId_ {};
    shared_ptr<int64_t> taskId_ {};
    shared_ptr<string> taskName_ {};
    shared_ptr<string> taskTypeShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
