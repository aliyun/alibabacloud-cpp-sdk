// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUYSECRETNOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BUYSECRETNOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BuySecretNoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuySecretNoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(DisplayPool, displayPool_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
    };
    friend void from_json(const Darabonba::Json& j, BuySecretNoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(DisplayPool, displayPool_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
    };
    BuySecretNoRequest() = default ;
    BuySecretNoRequest(const BuySecretNoRequest &) = default ;
    BuySecretNoRequest(BuySecretNoRequest &&) = default ;
    BuySecretNoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuySecretNoRequest() = default ;
    BuySecretNoRequest& operator=(const BuySecretNoRequest &) = default ;
    BuySecretNoRequest& operator=(BuySecretNoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->city_ == nullptr
        && return this->displayPool_ == nullptr && return this->ownerId_ == nullptr && return this->poolKey_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->secretNo_ == nullptr && return this->specId_ == nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline BuySecretNoRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // displayPool Field Functions 
    bool hasDisplayPool() const { return this->displayPool_ != nullptr;};
    void deleteDisplayPool() { this->displayPool_ = nullptr;};
    inline bool displayPool() const { DARABONBA_PTR_GET_DEFAULT(displayPool_, false) };
    inline BuySecretNoRequest& setDisplayPool(bool displayPool) { DARABONBA_PTR_SET_VALUE(displayPool_, displayPool) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BuySecretNoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string poolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline BuySecretNoRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BuySecretNoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BuySecretNoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secretNo Field Functions 
    bool hasSecretNo() const { return this->secretNo_ != nullptr;};
    void deleteSecretNo() { this->secretNo_ = nullptr;};
    inline string secretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
    inline BuySecretNoRequest& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline int64_t specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, 0L) };
    inline BuySecretNoRequest& setSpecId(int64_t specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


  protected:
    // Specifies the home location of the phone number.
    // 
    // > 
    // 
    // *   The home location can be set only to a location in the Chinese mainland.
    // 
    // *   A phone number that starts with 95 does not have a home location. If you purchase a phone number that starts with 95, set this parameter to **Nationwide**.
    // 
    // This parameter is required.
    std::shared_ptr<string> city_ = nullptr;
    // Specifies whether to add the phone number to the pool of numbers that will be displayed during calls.
    // 
    // >  This parameter takes effect only for customers who have enabled the number display feature.
    std::shared_ptr<bool> displayPool_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The key of the phone number pool. Log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) and view the key of the phone number pool on the **Number Pool Management** page.
    // 
    // This parameter is required.
    std::shared_ptr<string> poolKey_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The prefix of the phone number. If you specify the value of **SecretNo** when you purchase a phone number, a phone number starting with the specified prefix is selected.
    // 
    // >  You can specify up to 18 digits of the phone number prefix.
    std::shared_ptr<string> secretNo_ = nullptr;
    // The type of the phone number. Valid values:
    // 
    // *   **1**: a phone number assigned by a virtual network operator, that is, a phone number that belongs to the 170 or 171 number segment.
    // *   **2**: a phone number provided by a carrier.
    // *   **3**: a phone number that starts with 95.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> specId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
