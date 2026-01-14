// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKCALLLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TASKCALLLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class TaskCallListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskCallListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(CallDate, callDate_);
      DARABONBA_PTR_TO_JSON(EndCallDate, endCallDate_);
      DARABONBA_PTR_TO_JSON(IntentTags, intentTagsShrink_);
      DARABONBA_PTR_TO_JSON(Numbers, numbersShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, TaskCallListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(CallDate, callDate_);
      DARABONBA_PTR_FROM_JSON(EndCallDate, endCallDate_);
      DARABONBA_PTR_FROM_JSON(IntentTags, intentTagsShrink_);
      DARABONBA_PTR_FROM_JSON(Numbers, numbersShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    TaskCallListShrinkRequest() = default ;
    TaskCallListShrinkRequest(const TaskCallListShrinkRequest &) = default ;
    TaskCallListShrinkRequest(TaskCallListShrinkRequest &&) = default ;
    TaskCallListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskCallListShrinkRequest() = default ;
    TaskCallListShrinkRequest& operator=(const TaskCallListShrinkRequest &) = default ;
    TaskCallListShrinkRequest& operator=(TaskCallListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->callDate_ == nullptr && this->endCallDate_ == nullptr && this->intentTagsShrink_ == nullptr && this->numbersShrink_ == nullptr && this->ownerId_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->taskId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline TaskCallListShrinkRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // callDate Field Functions 
    bool hasCallDate() const { return this->callDate_ != nullptr;};
    void deleteCallDate() { this->callDate_ = nullptr;};
    inline string getCallDate() const { DARABONBA_PTR_GET_DEFAULT(callDate_, "") };
    inline TaskCallListShrinkRequest& setCallDate(string callDate) { DARABONBA_PTR_SET_VALUE(callDate_, callDate) };


    // endCallDate Field Functions 
    bool hasEndCallDate() const { return this->endCallDate_ != nullptr;};
    void deleteEndCallDate() { this->endCallDate_ = nullptr;};
    inline string getEndCallDate() const { DARABONBA_PTR_GET_DEFAULT(endCallDate_, "") };
    inline TaskCallListShrinkRequest& setEndCallDate(string endCallDate) { DARABONBA_PTR_SET_VALUE(endCallDate_, endCallDate) };


    // intentTagsShrink Field Functions 
    bool hasIntentTagsShrink() const { return this->intentTagsShrink_ != nullptr;};
    void deleteIntentTagsShrink() { this->intentTagsShrink_ = nullptr;};
    inline string getIntentTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(intentTagsShrink_, "") };
    inline TaskCallListShrinkRequest& setIntentTagsShrink(string intentTagsShrink) { DARABONBA_PTR_SET_VALUE(intentTagsShrink_, intentTagsShrink) };


    // numbersShrink Field Functions 
    bool hasNumbersShrink() const { return this->numbersShrink_ != nullptr;};
    void deleteNumbersShrink() { this->numbersShrink_ = nullptr;};
    inline string getNumbersShrink() const { DARABONBA_PTR_GET_DEFAULT(numbersShrink_, "") };
    inline TaskCallListShrinkRequest& setNumbersShrink(string numbersShrink) { DARABONBA_PTR_SET_VALUE(numbersShrink_, numbersShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TaskCallListShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline TaskCallListShrinkRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline TaskCallListShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TaskCallListShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline TaskCallListShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline TaskCallListShrinkRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // 导入号码时返回的批次号
    shared_ptr<string> batchId_ {};
    // 开始外呼时间
    // 
    // This parameter is required.
    shared_ptr<string> callDate_ {};
    // 结束外呼时间
    // 
    // This parameter is required.
    shared_ptr<string> endCallDate_ {};
    // 意向标签
    shared_ptr<string> intentTagsShrink_ {};
    // 号码列表
    shared_ptr<string> numbersShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 页数
    // 
    // This parameter is required.
    shared_ptr<int64_t> page_ {};
    // 每页外呼记录数,正整数，默认10000
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 任务ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
