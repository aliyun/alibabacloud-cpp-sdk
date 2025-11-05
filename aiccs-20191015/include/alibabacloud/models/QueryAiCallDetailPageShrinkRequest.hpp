// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAICALLDETAILPAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAICALLDETAILPAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiCallDetailPageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiCallDetailPageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(CallResult, callResult_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(DetailIds, detailIdsShrink_);
      DARABONBA_PTR_TO_JSON(EndCallingTime, endCallingTime_);
      DARABONBA_PTR_TO_JSON(EndImportedTime, endImportedTime_);
      DARABONBA_PTR_TO_JSON(MajorIntent, majorIntent_);
      DARABONBA_PTR_TO_JSON(MaxConversationDuration, maxConversationDuration_);
      DARABONBA_PTR_TO_JSON(MinConversationDuration, minConversationDuration_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartCallingTime, startCallingTime_);
      DARABONBA_PTR_TO_JSON(StartImportedTime, startImportedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiCallDetailPageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(CallResult, callResult_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(DetailIds, detailIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EndCallingTime, endCallingTime_);
      DARABONBA_PTR_FROM_JSON(EndImportedTime, endImportedTime_);
      DARABONBA_PTR_FROM_JSON(MajorIntent, majorIntent_);
      DARABONBA_PTR_FROM_JSON(MaxConversationDuration, maxConversationDuration_);
      DARABONBA_PTR_FROM_JSON(MinConversationDuration, minConversationDuration_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartCallingTime, startCallingTime_);
      DARABONBA_PTR_FROM_JSON(StartImportedTime, startImportedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryAiCallDetailPageShrinkRequest() = default ;
    QueryAiCallDetailPageShrinkRequest(const QueryAiCallDetailPageShrinkRequest &) = default ;
    QueryAiCallDetailPageShrinkRequest(QueryAiCallDetailPageShrinkRequest &&) = default ;
    QueryAiCallDetailPageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiCallDetailPageShrinkRequest() = default ;
    QueryAiCallDetailPageShrinkRequest& operator=(const QueryAiCallDetailPageShrinkRequest &) = default ;
    QueryAiCallDetailPageShrinkRequest& operator=(QueryAiCallDetailPageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && return this->callResult_ == nullptr && return this->calledNumber_ == nullptr && return this->detailIdsShrink_ == nullptr && return this->endCallingTime_ == nullptr && return this->endImportedTime_ == nullptr
        && return this->majorIntent_ == nullptr && return this->maxConversationDuration_ == nullptr && return this->minConversationDuration_ == nullptr && return this->outId_ == nullptr && return this->ownerId_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->startCallingTime_ == nullptr
        && return this->startImportedTime_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // callResult Field Functions 
    bool hasCallResult() const { return this->callResult_ != nullptr;};
    void deleteCallResult() { this->callResult_ = nullptr;};
    inline string callResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // detailIdsShrink Field Functions 
    bool hasDetailIdsShrink() const { return this->detailIdsShrink_ != nullptr;};
    void deleteDetailIdsShrink() { this->detailIdsShrink_ = nullptr;};
    inline string detailIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(detailIdsShrink_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setDetailIdsShrink(string detailIdsShrink) { DARABONBA_PTR_SET_VALUE(detailIdsShrink_, detailIdsShrink) };


    // endCallingTime Field Functions 
    bool hasEndCallingTime() const { return this->endCallingTime_ != nullptr;};
    void deleteEndCallingTime() { this->endCallingTime_ = nullptr;};
    inline int64_t endCallingTime() const { DARABONBA_PTR_GET_DEFAULT(endCallingTime_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setEndCallingTime(int64_t endCallingTime) { DARABONBA_PTR_SET_VALUE(endCallingTime_, endCallingTime) };


    // endImportedTime Field Functions 
    bool hasEndImportedTime() const { return this->endImportedTime_ != nullptr;};
    void deleteEndImportedTime() { this->endImportedTime_ = nullptr;};
    inline int64_t endImportedTime() const { DARABONBA_PTR_GET_DEFAULT(endImportedTime_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setEndImportedTime(int64_t endImportedTime) { DARABONBA_PTR_SET_VALUE(endImportedTime_, endImportedTime) };


    // majorIntent Field Functions 
    bool hasMajorIntent() const { return this->majorIntent_ != nullptr;};
    void deleteMajorIntent() { this->majorIntent_ = nullptr;};
    inline string majorIntent() const { DARABONBA_PTR_GET_DEFAULT(majorIntent_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setMajorIntent(string majorIntent) { DARABONBA_PTR_SET_VALUE(majorIntent_, majorIntent) };


    // maxConversationDuration Field Functions 
    bool hasMaxConversationDuration() const { return this->maxConversationDuration_ != nullptr;};
    void deleteMaxConversationDuration() { this->maxConversationDuration_ = nullptr;};
    inline int64_t maxConversationDuration() const { DARABONBA_PTR_GET_DEFAULT(maxConversationDuration_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setMaxConversationDuration(int64_t maxConversationDuration) { DARABONBA_PTR_SET_VALUE(maxConversationDuration_, maxConversationDuration) };


    // minConversationDuration Field Functions 
    bool hasMinConversationDuration() const { return this->minConversationDuration_ != nullptr;};
    void deleteMinConversationDuration() { this->minConversationDuration_ = nullptr;};
    inline int64_t minConversationDuration() const { DARABONBA_PTR_GET_DEFAULT(minConversationDuration_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setMinConversationDuration(int64_t minConversationDuration) { DARABONBA_PTR_SET_VALUE(minConversationDuration_, minConversationDuration) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startCallingTime Field Functions 
    bool hasStartCallingTime() const { return this->startCallingTime_ != nullptr;};
    void deleteStartCallingTime() { this->startCallingTime_ = nullptr;};
    inline int64_t startCallingTime() const { DARABONBA_PTR_GET_DEFAULT(startCallingTime_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setStartCallingTime(int64_t startCallingTime) { DARABONBA_PTR_SET_VALUE(startCallingTime_, startCallingTime) };


    // startImportedTime Field Functions 
    bool hasStartImportedTime() const { return this->startImportedTime_ != nullptr;};
    void deleteStartImportedTime() { this->startImportedTime_ = nullptr;};
    inline int64_t startImportedTime() const { DARABONBA_PTR_GET_DEFAULT(startImportedTime_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setStartImportedTime(int64_t startImportedTime) { DARABONBA_PTR_SET_VALUE(startImportedTime_, startImportedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> batchId_ = nullptr;
    std::shared_ptr<string> callResult_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> detailIdsShrink_ = nullptr;
    std::shared_ptr<int64_t> endCallingTime_ = nullptr;
    std::shared_ptr<int64_t> endImportedTime_ = nullptr;
    std::shared_ptr<string> majorIntent_ = nullptr;
    std::shared_ptr<int64_t> maxConversationDuration_ = nullptr;
    std::shared_ptr<int64_t> minConversationDuration_ = nullptr;
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<int64_t> startCallingTime_ = nullptr;
    std::shared_ptr<int64_t> startImportedTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
