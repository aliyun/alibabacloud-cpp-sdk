// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELAICALLDETAILSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELAICALLDETAILSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CancelAiCallDetailsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelAiCallDetailsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(DetailIdList, detailIdListShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbersShrink_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelAiCallDetailsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(DetailIdList, detailIdListShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbersShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CancelAiCallDetailsShrinkRequest() = default ;
    CancelAiCallDetailsShrinkRequest(const CancelAiCallDetailsShrinkRequest &) = default ;
    CancelAiCallDetailsShrinkRequest(CancelAiCallDetailsShrinkRequest &&) = default ;
    CancelAiCallDetailsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelAiCallDetailsShrinkRequest() = default ;
    CancelAiCallDetailsShrinkRequest& operator=(const CancelAiCallDetailsShrinkRequest &) = default ;
    CancelAiCallDetailsShrinkRequest& operator=(CancelAiCallDetailsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->detailIdListShrink_ == nullptr && this->ownerId_ == nullptr && this->phoneNumbersShrink_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->taskId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline CancelAiCallDetailsShrinkRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // detailIdListShrink Field Functions 
    bool hasDetailIdListShrink() const { return this->detailIdListShrink_ != nullptr;};
    void deleteDetailIdListShrink() { this->detailIdListShrink_ = nullptr;};
    inline string getDetailIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(detailIdListShrink_, "") };
    inline CancelAiCallDetailsShrinkRequest& setDetailIdListShrink(string detailIdListShrink) { DARABONBA_PTR_SET_VALUE(detailIdListShrink_, detailIdListShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CancelAiCallDetailsShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumbersShrink Field Functions 
    bool hasPhoneNumbersShrink() const { return this->phoneNumbersShrink_ != nullptr;};
    void deletePhoneNumbersShrink() { this->phoneNumbersShrink_ = nullptr;};
    inline string getPhoneNumbersShrink() const { DARABONBA_PTR_GET_DEFAULT(phoneNumbersShrink_, "") };
    inline CancelAiCallDetailsShrinkRequest& setPhoneNumbersShrink(string phoneNumbersShrink) { DARABONBA_PTR_SET_VALUE(phoneNumbersShrink_, phoneNumbersShrink) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CancelAiCallDetailsShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CancelAiCallDetailsShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CancelAiCallDetailsShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> batchId_ {};
    shared_ptr<string> detailIdListShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> phoneNumbersShrink_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
