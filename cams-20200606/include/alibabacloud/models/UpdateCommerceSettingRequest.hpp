// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMMERCESETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMMERCESETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdateCommerceSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCommerceSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CartEnable, cartEnable_);
      DARABONBA_PTR_TO_JSON(CatalogVisible, catalogVisible_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCommerceSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CartEnable, cartEnable_);
      DARABONBA_PTR_FROM_JSON(CatalogVisible, catalogVisible_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateCommerceSettingRequest() = default ;
    UpdateCommerceSettingRequest(const UpdateCommerceSettingRequest &) = default ;
    UpdateCommerceSettingRequest(UpdateCommerceSettingRequest &&) = default ;
    UpdateCommerceSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCommerceSettingRequest() = default ;
    UpdateCommerceSettingRequest& operator=(const UpdateCommerceSettingRequest &) = default ;
    UpdateCommerceSettingRequest& operator=(UpdateCommerceSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cartEnable_ == nullptr
        && this->catalogVisible_ == nullptr && this->custSpaceId_ == nullptr && this->ownerId_ == nullptr && this->phoneNumber_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // cartEnable Field Functions 
    bool hasCartEnable() const { return this->cartEnable_ != nullptr;};
    void deleteCartEnable() { this->cartEnable_ = nullptr;};
    inline bool getCartEnable() const { DARABONBA_PTR_GET_DEFAULT(cartEnable_, false) };
    inline UpdateCommerceSettingRequest& setCartEnable(bool cartEnable) { DARABONBA_PTR_SET_VALUE(cartEnable_, cartEnable) };


    // catalogVisible Field Functions 
    bool hasCatalogVisible() const { return this->catalogVisible_ != nullptr;};
    void deleteCatalogVisible() { this->catalogVisible_ = nullptr;};
    inline bool getCatalogVisible() const { DARABONBA_PTR_GET_DEFAULT(catalogVisible_, false) };
    inline UpdateCommerceSettingRequest& setCatalogVisible(bool catalogVisible) { DARABONBA_PTR_SET_VALUE(catalogVisible_, catalogVisible) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline UpdateCommerceSettingRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateCommerceSettingRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline UpdateCommerceSettingRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateCommerceSettingRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateCommerceSettingRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to display the shopping cart button. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    shared_ptr<bool> cartEnable_ {};
    // Specifies whether to display the catalog button. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    shared_ptr<bool> catalogVisible_ {};
    // The space ID of the user within the independent software vendor (ISV) account.
    // 
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The phone number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
