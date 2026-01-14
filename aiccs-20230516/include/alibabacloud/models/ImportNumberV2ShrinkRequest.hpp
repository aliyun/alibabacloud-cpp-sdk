// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTNUMBERV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTNUMBERV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class ImportNumberV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportNumberV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Customers, customersShrink_);
      DARABONBA_PTR_TO_JSON(FailReturn, failReturn_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportNumberV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Customers, customersShrink_);
      DARABONBA_PTR_FROM_JSON(FailReturn, failReturn_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ImportNumberV2ShrinkRequest() = default ;
    ImportNumberV2ShrinkRequest(const ImportNumberV2ShrinkRequest &) = default ;
    ImportNumberV2ShrinkRequest(ImportNumberV2ShrinkRequest &&) = default ;
    ImportNumberV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportNumberV2ShrinkRequest() = default ;
    ImportNumberV2ShrinkRequest& operator=(const ImportNumberV2ShrinkRequest &) = default ;
    ImportNumberV2ShrinkRequest& operator=(ImportNumberV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customersShrink_ == nullptr
        && this->failReturn_ == nullptr && this->outId_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->taskId_ == nullptr; };
    // customersShrink Field Functions 
    bool hasCustomersShrink() const { return this->customersShrink_ != nullptr;};
    void deleteCustomersShrink() { this->customersShrink_ = nullptr;};
    inline string getCustomersShrink() const { DARABONBA_PTR_GET_DEFAULT(customersShrink_, "") };
    inline ImportNumberV2ShrinkRequest& setCustomersShrink(string customersShrink) { DARABONBA_PTR_SET_VALUE(customersShrink_, customersShrink) };


    // failReturn Field Functions 
    bool hasFailReturn() const { return this->failReturn_ != nullptr;};
    void deleteFailReturn() { this->failReturn_ = nullptr;};
    inline int64_t getFailReturn() const { DARABONBA_PTR_GET_DEFAULT(failReturn_, 0L) };
    inline ImportNumberV2ShrinkRequest& setFailReturn(int64_t failReturn) { DARABONBA_PTR_SET_VALUE(failReturn_, failReturn) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline ImportNumberV2ShrinkRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ImportNumberV2ShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ImportNumberV2ShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ImportNumberV2ShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ImportNumberV2ShrinkRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> customersShrink_ {};
    shared_ptr<int64_t> failReturn_ {};
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
