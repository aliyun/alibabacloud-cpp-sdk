// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSSIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSSIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreateSmsSignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsSignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNo, calledNo_);
      DARABONBA_PTR_TO_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_TO_JSON(CallingNo, callingNo_);
      DARABONBA_PTR_TO_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsSignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNo, calledNo_);
      DARABONBA_PTR_FROM_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_FROM_JSON(CallingNo, callingNo_);
      DARABONBA_PTR_FROM_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateSmsSignRequest() = default ;
    CreateSmsSignRequest(const CreateSmsSignRequest &) = default ;
    CreateSmsSignRequest(CreateSmsSignRequest &&) = default ;
    CreateSmsSignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsSignRequest() = default ;
    CreateSmsSignRequest& operator=(const CreateSmsSignRequest &) = default ;
    CreateSmsSignRequest& operator=(CreateSmsSignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNo_ == nullptr
        && this->callerParentId_ == nullptr && this->callingNo_ == nullptr && this->customerPoolKey_ == nullptr && this->ownerId_ == nullptr && this->reqId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // calledNo Field Functions 
    bool hasCalledNo() const { return this->calledNo_ != nullptr;};
    void deleteCalledNo() { this->calledNo_ = nullptr;};
    inline string getCalledNo() const { DARABONBA_PTR_GET_DEFAULT(calledNo_, "") };
    inline CreateSmsSignRequest& setCalledNo(string calledNo) { DARABONBA_PTR_SET_VALUE(calledNo_, calledNo) };


    // callerParentId Field Functions 
    bool hasCallerParentId() const { return this->callerParentId_ != nullptr;};
    void deleteCallerParentId() { this->callerParentId_ = nullptr;};
    inline int64_t getCallerParentId() const { DARABONBA_PTR_GET_DEFAULT(callerParentId_, 0L) };
    inline CreateSmsSignRequest& setCallerParentId(int64_t callerParentId) { DARABONBA_PTR_SET_VALUE(callerParentId_, callerParentId) };


    // callingNo Field Functions 
    bool hasCallingNo() const { return this->callingNo_ != nullptr;};
    void deleteCallingNo() { this->callingNo_ = nullptr;};
    inline string getCallingNo() const { DARABONBA_PTR_GET_DEFAULT(callingNo_, "") };
    inline CreateSmsSignRequest& setCallingNo(string callingNo) { DARABONBA_PTR_SET_VALUE(callingNo_, callingNo) };


    // customerPoolKey Field Functions 
    bool hasCustomerPoolKey() const { return this->customerPoolKey_ != nullptr;};
    void deleteCustomerPoolKey() { this->customerPoolKey_ = nullptr;};
    inline string getCustomerPoolKey() const { DARABONBA_PTR_GET_DEFAULT(customerPoolKey_, "") };
    inline CreateSmsSignRequest& setCustomerPoolKey(string customerPoolKey) { DARABONBA_PTR_SET_VALUE(customerPoolKey_, customerPoolKey) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsSignRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline CreateSmsSignRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsSignRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsSignRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The recipient number.
    // 
    // This parameter is required.
    shared_ptr<string> calledNo_ {};
    // The customer UID. This parameter is automatically obtained by the system and does not need to be specified.
    shared_ptr<int64_t> callerParentId_ {};
    // The sender number.
    // 
    // This parameter is required.
    shared_ptr<string> callingNo_ {};
    // The number pool key.
    // 
    // This parameter is required.
    shared_ptr<string> customerPoolKey_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The request deduplication ID. The maximum length is 20 characters. Ensure the atomicity of the request ID.
    // 
    // This parameter is required.
    shared_ptr<string> reqId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
