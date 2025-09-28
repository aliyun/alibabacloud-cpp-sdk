// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPHONEWITHTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPHONEWITHTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class VerifyPhoneWithTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPhoneWithTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SpToken, spToken_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPhoneWithTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SpToken, spToken_);
    };
    VerifyPhoneWithTokenRequest() = default ;
    VerifyPhoneWithTokenRequest(const VerifyPhoneWithTokenRequest &) = default ;
    VerifyPhoneWithTokenRequest(VerifyPhoneWithTokenRequest &&) = default ;
    VerifyPhoneWithTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPhoneWithTokenRequest() = default ;
    VerifyPhoneWithTokenRequest& operator=(const VerifyPhoneWithTokenRequest &) = default ;
    VerifyPhoneWithTokenRequest& operator=(VerifyPhoneWithTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->phoneNumber_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->spToken_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline VerifyPhoneWithTokenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline VerifyPhoneWithTokenRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline VerifyPhoneWithTokenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline VerifyPhoneWithTokenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // spToken Field Functions 
    bool hasSpToken() const { return this->spToken_ != nullptr;};
    void deleteSpToken() { this->spToken_ = nullptr;};
    inline string spToken() const { DARABONBA_PTR_GET_DEFAULT(spToken_, "") };
    inline VerifyPhoneWithTokenRequest& setSpToken(string spToken) { DARABONBA_PTR_SET_VALUE(spToken_, spToken) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The phone number.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The token for phone number verification that is obtained by the JavaScript SDK.
    // 
    // This parameter is required.
    std::shared_ptr<string> spToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
