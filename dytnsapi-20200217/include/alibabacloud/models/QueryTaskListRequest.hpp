// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryTaskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    QueryTaskListRequest() = default ;
    QueryTaskListRequest(const QueryTaskListRequest &) = default ;
    QueryTaskListRequest(QueryTaskListRequest &&) = default ;
    QueryTaskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskListRequest() = default ;
    QueryTaskListRequest& operator=(const QueryTaskListRequest &) = default ;
    QueryTaskListRequest& operator=(QueryTaskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->ownerId_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->result_ == nullptr
        && this->tagId_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryTaskListRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryTaskListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryTaskListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryTaskListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryTaskListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<int64_t> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<int64_t>) };
    inline vector<int64_t> getResult() { DARABONBA_PTR_GET(result_, vector<int64_t>) };
    inline QueryTaskListRequest& setResult(const vector<int64_t> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryTaskListRequest& setResult(vector<int64_t> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline int64_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
    inline QueryTaskListRequest& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline QueryTaskListRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline QueryTaskListRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline const vector<int64_t> & getTaskType() const { DARABONBA_PTR_GET_CONST(taskType_, vector<int64_t>) };
    inline vector<int64_t> getTaskType() { DARABONBA_PTR_GET(taskType_, vector<int64_t>) };
    inline QueryTaskListRequest& setTaskType(const vector<int64_t> & taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };
    inline QueryTaskListRequest& setTaskType(vector<int64_t> && taskType) { DARABONBA_PTR_SET_RVALUE(taskType_, taskType) };


  protected:
    shared_ptr<int64_t> currentPage_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<vector<int64_t>> result_ {};
    shared_ptr<int64_t> tagId_ {};
    shared_ptr<int64_t> taskId_ {};
    shared_ptr<string> taskName_ {};
    shared_ptr<vector<int64_t>> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
