// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDSUBS700REQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDSUBS700REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class UnbindSubs700Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindSubs700Request& obj) { 
      DARABONBA_PTR_TO_JSON(IndustrialId, industrialId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SubsId, subsId_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindSubs700Request& obj) { 
      DARABONBA_PTR_FROM_JSON(IndustrialId, industrialId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
    };
    UnbindSubs700Request() = default ;
    UnbindSubs700Request(const UnbindSubs700Request &) = default ;
    UnbindSubs700Request(UnbindSubs700Request &&) = default ;
    UnbindSubs700Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindSubs700Request() = default ;
    UnbindSubs700Request& operator=(const UnbindSubs700Request &) = default ;
    UnbindSubs700Request& operator=(UnbindSubs700Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->industrialId_ == nullptr
        && this->orderId_ == nullptr && this->ownerId_ == nullptr && this->poolKey_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->subsId_ == nullptr && this->telX_ == nullptr; };
    // industrialId Field Functions 
    bool hasIndustrialId() const { return this->industrialId_ != nullptr;};
    void deleteIndustrialId() { this->industrialId_ = nullptr;};
    inline string getIndustrialId() const { DARABONBA_PTR_GET_DEFAULT(industrialId_, "") };
    inline UnbindSubs700Request& setIndustrialId(string industrialId) { DARABONBA_PTR_SET_VALUE(industrialId_, industrialId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline UnbindSubs700Request& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UnbindSubs700Request& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline UnbindSubs700Request& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UnbindSubs700Request& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UnbindSubs700Request& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subsId Field Functions 
    bool hasSubsId() const { return this->subsId_ != nullptr;};
    void deleteSubsId() { this->subsId_ = nullptr;};
    inline int64_t getSubsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, 0L) };
    inline UnbindSubs700Request& setSubsId(int64_t subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline UnbindSubs700Request& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


  protected:
    // Optional. The Industrial Internet identification code, which has a one-to-one mapping with the OrderID. The code supports characters such as periods (.) and forward slashes (/) to separate code domains. The code must not contain non-printable characters, such as spaces or line feeds. This field is required when the service consumer generates the Industrial Internet identification code.
    shared_ptr<string> industrialId_ {};
    // The order ID. This parameter is required in practice. Encrypt the order ID for reporting to the regulatory platform.
    shared_ptr<string> orderId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number pool key.
    // 
    // To obtain the **number pool key**, go to the [Number pool management](https://dyplsnext.console.aliyun.com/number-pool) page in the Phone Number Privacy Protection console.
    // 
    // This parameter is required.
    shared_ptr<string> poolKey_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The number binding ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> subsId_ {};
    // The intermediate number X. If the service consumer does not specify number X, the application platform assigns a number from the number pool as number X.
    // 
    // This parameter is required.
    shared_ptr<string> telX_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
