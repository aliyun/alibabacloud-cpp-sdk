// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPHONEBUSINESSPROFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPHONEBUSINESSPROFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ModifyPhoneBusinessProfileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPhoneBusinessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(About, about_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ProfilePictureUrl, profilePictureUrl_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Vertical, vertical_);
      DARABONBA_PTR_TO_JSON(Websites, websitesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPhoneBusinessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(About, about_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ProfilePictureUrl, profilePictureUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Vertical, vertical_);
      DARABONBA_PTR_FROM_JSON(Websites, websitesShrink_);
    };
    ModifyPhoneBusinessProfileShrinkRequest() = default ;
    ModifyPhoneBusinessProfileShrinkRequest(const ModifyPhoneBusinessProfileShrinkRequest &) = default ;
    ModifyPhoneBusinessProfileShrinkRequest(ModifyPhoneBusinessProfileShrinkRequest &&) = default ;
    ModifyPhoneBusinessProfileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPhoneBusinessProfileShrinkRequest() = default ;
    ModifyPhoneBusinessProfileShrinkRequest& operator=(const ModifyPhoneBusinessProfileShrinkRequest &) = default ;
    ModifyPhoneBusinessProfileShrinkRequest& operator=(ModifyPhoneBusinessProfileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->about_ == nullptr
        && this->address_ == nullptr && this->custSpaceId_ == nullptr && this->description_ == nullptr && this->email_ == nullptr && this->ownerId_ == nullptr
        && this->phoneNumber_ == nullptr && this->profilePictureUrl_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->vertical_ == nullptr
        && this->websitesShrink_ == nullptr; };
    // about Field Functions 
    bool hasAbout() const { return this->about_ != nullptr;};
    void deleteAbout() { this->about_ = nullptr;};
    inline string getAbout() const { DARABONBA_PTR_GET_DEFAULT(about_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setAbout(string about) { DARABONBA_PTR_SET_VALUE(about_, about) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPhoneBusinessProfileShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // profilePictureUrl Field Functions 
    bool hasProfilePictureUrl() const { return this->profilePictureUrl_ != nullptr;};
    void deleteProfilePictureUrl() { this->profilePictureUrl_ = nullptr;};
    inline string getProfilePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(profilePictureUrl_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setProfilePictureUrl(string profilePictureUrl) { DARABONBA_PTR_SET_VALUE(profilePictureUrl_, profilePictureUrl) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPhoneBusinessProfileShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vertical Field Functions 
    bool hasVertical() const { return this->vertical_ != nullptr;};
    void deleteVertical() { this->vertical_ = nullptr;};
    inline string getVertical() const { DARABONBA_PTR_GET_DEFAULT(vertical_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setVertical(string vertical) { DARABONBA_PTR_SET_VALUE(vertical_, vertical) };


    // websitesShrink Field Functions 
    bool hasWebsitesShrink() const { return this->websitesShrink_ != nullptr;};
    void deleteWebsitesShrink() { this->websitesShrink_ = nullptr;};
    inline string getWebsitesShrink() const { DARABONBA_PTR_GET_DEFAULT(websitesShrink_, "") };
    inline ModifyPhoneBusinessProfileShrinkRequest& setWebsitesShrink(string websitesShrink) { DARABONBA_PTR_SET_VALUE(websitesShrink_, websitesShrink) };


  protected:
    // The business information.
    shared_ptr<string> about_ {};
    // The address.
    shared_ptr<string> address_ {};
    // The space ID of the RAM user within the independent software vendor (ISV) account.
    // 
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // The description of the phone number.
    shared_ptr<string> description_ {};
    // The email address.
    shared_ptr<string> email_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The mobile phone number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // The URL of the profile picture.
    shared_ptr<string> profilePictureUrl_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The industry.
    // 
    // >  Valid values: OTHER, AUTO, BEAUTY, APPAREL, EDU, ENTERTAIN, EVENT_PLAN, FINANCE, GROCERY, GOVT, HOTEL, HEALTH, NONPROFIT, PROF_SERVICES, RETAIL, TRAVEL, and RESTAURANT.
    shared_ptr<string> vertical_ {};
    // The URLs of the websites.
    shared_ptr<string> websitesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
