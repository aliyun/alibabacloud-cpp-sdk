// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELAICALLDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELAICALLDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CancelAiCallDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelAiCallDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(DetailIdList, detailIdList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelAiCallDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(DetailIdList, detailIdList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CancelAiCallDetailsRequest() = default ;
    CancelAiCallDetailsRequest(const CancelAiCallDetailsRequest &) = default ;
    CancelAiCallDetailsRequest(CancelAiCallDetailsRequest &&) = default ;
    CancelAiCallDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelAiCallDetailsRequest() = default ;
    CancelAiCallDetailsRequest& operator=(const CancelAiCallDetailsRequest &) = default ;
    CancelAiCallDetailsRequest& operator=(CancelAiCallDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && return this->detailIdList_ == nullptr && return this->ownerId_ == nullptr && return this->phoneNumbers_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->taskId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline CancelAiCallDetailsRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // detailIdList Field Functions 
    bool hasDetailIdList() const { return this->detailIdList_ != nullptr;};
    void deleteDetailIdList() { this->detailIdList_ = nullptr;};
    inline const vector<string> & detailIdList() const { DARABONBA_PTR_GET_CONST(detailIdList_, vector<string>) };
    inline vector<string> detailIdList() { DARABONBA_PTR_GET(detailIdList_, vector<string>) };
    inline CancelAiCallDetailsRequest& setDetailIdList(const vector<string> & detailIdList) { DARABONBA_PTR_SET_VALUE(detailIdList_, detailIdList) };
    inline CancelAiCallDetailsRequest& setDetailIdList(vector<string> && detailIdList) { DARABONBA_PTR_SET_RVALUE(detailIdList_, detailIdList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CancelAiCallDetailsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline const vector<string> & phoneNumbers() const { DARABONBA_PTR_GET_CONST(phoneNumbers_, vector<string>) };
    inline vector<string> phoneNumbers() { DARABONBA_PTR_GET(phoneNumbers_, vector<string>) };
    inline CancelAiCallDetailsRequest& setPhoneNumbers(const vector<string> & phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };
    inline CancelAiCallDetailsRequest& setPhoneNumbers(vector<string> && phoneNumbers) { DARABONBA_PTR_SET_RVALUE(phoneNumbers_, phoneNumbers) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CancelAiCallDetailsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CancelAiCallDetailsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CancelAiCallDetailsRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> batchId_ = nullptr;
    std::shared_ptr<vector<string>> detailIdList_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<vector<string>> phoneNumbers_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
