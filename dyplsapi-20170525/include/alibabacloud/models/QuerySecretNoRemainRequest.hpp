// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoRemainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoRemainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoRemainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
    };
    QuerySecretNoRemainRequest() = default ;
    QuerySecretNoRemainRequest(const QuerySecretNoRemainRequest &) = default ;
    QuerySecretNoRemainRequest(QuerySecretNoRemainRequest &&) = default ;
    QuerySecretNoRemainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoRemainRequest() = default ;
    QuerySecretNoRemainRequest& operator=(const QuerySecretNoRemainRequest &) = default ;
    QuerySecretNoRemainRequest& operator=(QuerySecretNoRemainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->city_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->secretNo_ == nullptr && return this->specId_ == nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline QuerySecretNoRemainRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySecretNoRemainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySecretNoRemainRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySecretNoRemainRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secretNo Field Functions 
    bool hasSecretNo() const { return this->secretNo_ != nullptr;};
    void deleteSecretNo() { this->secretNo_ = nullptr;};
    inline string secretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
    inline QuerySecretNoRemainRequest& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline int64_t specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, 0L) };
    inline QuerySecretNoRemainRequest& setSpecId(int64_t specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


  protected:
    // The home location of the phone number.
    // 
    // *   If **SpecId** is set to 1 or 2, you can specify the **City** parameter to query the quantity of available phone numbers.
    // 
    // 1.  You can enter a single city name to perform a query.
    // 2.  You can enter National to query the quantity of remaining phone numbers available in the Chinese mainland for online purchase.
    // 3.  You can enter National List to query the cities with available phone numbers and the quantities of remaining phone numbers in the Chinese mainland. Cities without available phone numbers will not be returned.
    // 
    // *   If **SpecId** is set to 3, home locations are not distinguished for phone numbers that start with 95 and only the quantity of all the remaining phone numbers that start with 95 and are available for online purchase can be queried. If SpecId is set to 3, **City** must be set to **Nationwide**.
    // 
    // >  Home locations can be set to only locations in the Chinese mainland.
    // 
    // This parameter is required.
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The prefix of the phone number. When you call the QuerySecretNoRemain operation with **SecretNo** specified, the quantity of remaining phone numbers with the specified prefix that are available for online purchase is queried.
    // 
    // Up to 18 digits of a phone number prefix can be specified.
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
