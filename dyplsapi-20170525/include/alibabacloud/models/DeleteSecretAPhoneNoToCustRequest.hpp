// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECRETAPHONENOTOCUSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECRETAPHONENOTOCUSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class DeleteSecretAPhoneNoToCustRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecretAPhoneNoToCustRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecretAPhoneNoToCustRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteSecretAPhoneNoToCustRequest() = default ;
    DeleteSecretAPhoneNoToCustRequest(const DeleteSecretAPhoneNoToCustRequest &) = default ;
    DeleteSecretAPhoneNoToCustRequest(DeleteSecretAPhoneNoToCustRequest &&) = default ;
    DeleteSecretAPhoneNoToCustRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecretAPhoneNoToCustRequest() = default ;
    DeleteSecretAPhoneNoToCustRequest& operator=(const DeleteSecretAPhoneNoToCustRequest &) = default ;
    DeleteSecretAPhoneNoToCustRequest& operator=(DeleteSecretAPhoneNoToCustRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ANoWhiteGroupId_ == nullptr
        && this->ownerId_ == nullptr && this->phoneNoA_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // ANoWhiteGroupId Field Functions 
    bool hasANoWhiteGroupId() const { return this->ANoWhiteGroupId_ != nullptr;};
    void deleteANoWhiteGroupId() { this->ANoWhiteGroupId_ = nullptr;};
    inline int64_t getANoWhiteGroupId() const { DARABONBA_PTR_GET_DEFAULT(ANoWhiteGroupId_, 0L) };
    inline DeleteSecretAPhoneNoToCustRequest& setANoWhiteGroupId(int64_t ANoWhiteGroupId) { DARABONBA_PTR_SET_VALUE(ANoWhiteGroupId_, ANoWhiteGroupId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteSecretAPhoneNoToCustRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string getPhoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline DeleteSecretAPhoneNoToCustRequest& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteSecretAPhoneNoToCustRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteSecretAPhoneNoToCustRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // A-number group ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ANoWhiteGroupId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // A-number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNoA_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
