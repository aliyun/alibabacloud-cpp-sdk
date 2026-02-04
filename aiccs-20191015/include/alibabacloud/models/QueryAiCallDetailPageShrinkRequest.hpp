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
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
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
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
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
        && this->callResult_ == nullptr && this->calledNumber_ == nullptr && this->detailIdsShrink_ == nullptr && this->encryptionType_ == nullptr && this->endCallingTime_ == nullptr
        && this->endImportedTime_ == nullptr && this->majorIntent_ == nullptr && this->maxConversationDuration_ == nullptr && this->minConversationDuration_ == nullptr && this->outId_ == nullptr
        && this->ownerId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->startCallingTime_ == nullptr && this->startImportedTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // callResult Field Functions 
    bool hasCallResult() const { return this->callResult_ != nullptr;};
    void deleteCallResult() { this->callResult_ = nullptr;};
    inline string getCallResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // detailIdsShrink Field Functions 
    bool hasDetailIdsShrink() const { return this->detailIdsShrink_ != nullptr;};
    void deleteDetailIdsShrink() { this->detailIdsShrink_ = nullptr;};
    inline string getDetailIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(detailIdsShrink_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setDetailIdsShrink(string detailIdsShrink) { DARABONBA_PTR_SET_VALUE(detailIdsShrink_, detailIdsShrink) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline int64_t getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setEncryptionType(int64_t encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // endCallingTime Field Functions 
    bool hasEndCallingTime() const { return this->endCallingTime_ != nullptr;};
    void deleteEndCallingTime() { this->endCallingTime_ = nullptr;};
    inline int64_t getEndCallingTime() const { DARABONBA_PTR_GET_DEFAULT(endCallingTime_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setEndCallingTime(int64_t endCallingTime) { DARABONBA_PTR_SET_VALUE(endCallingTime_, endCallingTime) };


    // endImportedTime Field Functions 
    bool hasEndImportedTime() const { return this->endImportedTime_ != nullptr;};
    void deleteEndImportedTime() { this->endImportedTime_ = nullptr;};
    inline int64_t getEndImportedTime() const { DARABONBA_PTR_GET_DEFAULT(endImportedTime_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setEndImportedTime(int64_t endImportedTime) { DARABONBA_PTR_SET_VALUE(endImportedTime_, endImportedTime) };


    // majorIntent Field Functions 
    bool hasMajorIntent() const { return this->majorIntent_ != nullptr;};
    void deleteMajorIntent() { this->majorIntent_ = nullptr;};
    inline string getMajorIntent() const { DARABONBA_PTR_GET_DEFAULT(majorIntent_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setMajorIntent(string majorIntent) { DARABONBA_PTR_SET_VALUE(majorIntent_, majorIntent) };


    // maxConversationDuration Field Functions 
    bool hasMaxConversationDuration() const { return this->maxConversationDuration_ != nullptr;};
    void deleteMaxConversationDuration() { this->maxConversationDuration_ = nullptr;};
    inline int64_t getMaxConversationDuration() const { DARABONBA_PTR_GET_DEFAULT(maxConversationDuration_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setMaxConversationDuration(int64_t maxConversationDuration) { DARABONBA_PTR_SET_VALUE(maxConversationDuration_, maxConversationDuration) };


    // minConversationDuration Field Functions 
    bool hasMinConversationDuration() const { return this->minConversationDuration_ != nullptr;};
    void deleteMinConversationDuration() { this->minConversationDuration_ = nullptr;};
    inline int64_t getMinConversationDuration() const { DARABONBA_PTR_GET_DEFAULT(minConversationDuration_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setMinConversationDuration(int64_t minConversationDuration) { DARABONBA_PTR_SET_VALUE(minConversationDuration_, minConversationDuration) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startCallingTime Field Functions 
    bool hasStartCallingTime() const { return this->startCallingTime_ != nullptr;};
    void deleteStartCallingTime() { this->startCallingTime_ = nullptr;};
    inline int64_t getStartCallingTime() const { DARABONBA_PTR_GET_DEFAULT(startCallingTime_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setStartCallingTime(int64_t startCallingTime) { DARABONBA_PTR_SET_VALUE(startCallingTime_, startCallingTime) };


    // startImportedTime Field Functions 
    bool hasStartImportedTime() const { return this->startImportedTime_ != nullptr;};
    void deleteStartImportedTime() { this->startImportedTime_ = nullptr;};
    inline int64_t getStartImportedTime() const { DARABONBA_PTR_GET_DEFAULT(startImportedTime_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setStartImportedTime(int64_t startImportedTime) { DARABONBA_PTR_SET_VALUE(startImportedTime_, startImportedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryAiCallDetailPageShrinkRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryAiCallDetailPageShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> batchId_ {};
    shared_ptr<string> callResult_ {};
    shared_ptr<string> calledNumber_ {};
    shared_ptr<string> detailIdsShrink_ {};
    shared_ptr<int64_t> encryptionType_ {};
    shared_ptr<int64_t> endCallingTime_ {};
    shared_ptr<int64_t> endImportedTime_ {};
    shared_ptr<string> majorIntent_ {};
    shared_ptr<int64_t> maxConversationDuration_ {};
    shared_ptr<int64_t> minConversationDuration_ {};
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int64_t> pageNo_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<int64_t> startCallingTime_ {};
    shared_ptr<int64_t> startImportedTime_ {};
    // This parameter is required.
    shared_ptr<int64_t> status_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
