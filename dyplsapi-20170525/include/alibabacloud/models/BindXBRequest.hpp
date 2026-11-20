// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDXBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDXBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindXBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindXBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_TO_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TelB, telB_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, BindXBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_FROM_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TelB, telB_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    BindXBRequest() = default ;
    BindXBRequest(const BindXBRequest &) = default ;
    BindXBRequest(BindXBRequest &&) = default ;
    BindXBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindXBRequest() = default ;
    BindXBRequest& operator=(const BindXBRequest &) = default ;
    BindXBRequest& operator=(BindXBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callerParentId_ == nullptr
        && this->customerPoolKey_ == nullptr && this->ownerId_ == nullptr && this->reqId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->telB_ == nullptr && this->telX_ == nullptr && this->userData_ == nullptr; };
    // callerParentId Field Functions 
    bool hasCallerParentId() const { return this->callerParentId_ != nullptr;};
    void deleteCallerParentId() { this->callerParentId_ = nullptr;};
    inline int64_t getCallerParentId() const { DARABONBA_PTR_GET_DEFAULT(callerParentId_, 0L) };
    inline BindXBRequest& setCallerParentId(int64_t callerParentId) { DARABONBA_PTR_SET_VALUE(callerParentId_, callerParentId) };


    // customerPoolKey Field Functions 
    bool hasCustomerPoolKey() const { return this->customerPoolKey_ != nullptr;};
    void deleteCustomerPoolKey() { this->customerPoolKey_ = nullptr;};
    inline string getCustomerPoolKey() const { DARABONBA_PTR_GET_DEFAULT(customerPoolKey_, "") };
    inline BindXBRequest& setCustomerPoolKey(string customerPoolKey) { DARABONBA_PTR_SET_VALUE(customerPoolKey_, customerPoolKey) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindXBRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline BindXBRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindXBRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindXBRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // telB Field Functions 
    bool hasTelB() const { return this->telB_ != nullptr;};
    void deleteTelB() { this->telB_ = nullptr;};
    inline string getTelB() const { DARABONBA_PTR_GET_DEFAULT(telB_, "") };
    inline BindXBRequest& setTelB(string telB) { DARABONBA_PTR_SET_VALUE(telB_, telB) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindXBRequest& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline BindXBRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The customer UID. This parameter is automatically obtained by the system and is not required.
    shared_ptr<int64_t> callerParentId_ {};
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
    // The actual phone number of the employee.
    // 
    // This parameter is required.
    shared_ptr<string> telB_ {};
    // The work number X.
    // 
    // This parameter is required.
    shared_ptr<string> telX_ {};
    // The custom data to be returned in the callback.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
