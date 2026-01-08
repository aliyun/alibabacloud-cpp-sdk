// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(ContactMail, contactMail_);
      DARABONBA_PTR_TO_JSON(CountryId, countryId_);
      DARABONBA_PTR_TO_JSON(FacebookBmId, facebookBmId_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsConfirmAudit, isConfirmAudit_);
      DARABONBA_PTR_TO_JSON(IsvTerms, isvTerms_);
      DARABONBA_PTR_TO_JSON(OfficeAddress, officeAddress_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(ContactMail, contactMail_);
      DARABONBA_PTR_FROM_JSON(CountryId, countryId_);
      DARABONBA_PTR_FROM_JSON(FacebookBmId, facebookBmId_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsConfirmAudit, isConfirmAudit_);
      DARABONBA_PTR_FROM_JSON(IsvTerms, isvTerms_);
      DARABONBA_PTR_FROM_JSON(OfficeAddress, officeAddress_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelType_ == nullptr
        && this->contactMail_ == nullptr && this->countryId_ == nullptr && this->facebookBmId_ == nullptr && this->instanceDescription_ == nullptr && this->instanceName_ == nullptr
        && this->isConfirmAudit_ == nullptr && this->isvTerms_ == nullptr && this->officeAddress_ == nullptr && this->ownerId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline CreateInstanceRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // contactMail Field Functions 
    bool hasContactMail() const { return this->contactMail_ != nullptr;};
    void deleteContactMail() { this->contactMail_ = nullptr;};
    inline string getContactMail() const { DARABONBA_PTR_GET_DEFAULT(contactMail_, "") };
    inline CreateInstanceRequest& setContactMail(string contactMail) { DARABONBA_PTR_SET_VALUE(contactMail_, contactMail) };


    // countryId Field Functions 
    bool hasCountryId() const { return this->countryId_ != nullptr;};
    void deleteCountryId() { this->countryId_ = nullptr;};
    inline string getCountryId() const { DARABONBA_PTR_GET_DEFAULT(countryId_, "") };
    inline CreateInstanceRequest& setCountryId(string countryId) { DARABONBA_PTR_SET_VALUE(countryId_, countryId) };


    // facebookBmId Field Functions 
    bool hasFacebookBmId() const { return this->facebookBmId_ != nullptr;};
    void deleteFacebookBmId() { this->facebookBmId_ = nullptr;};
    inline string getFacebookBmId() const { DARABONBA_PTR_GET_DEFAULT(facebookBmId_, "") };
    inline CreateInstanceRequest& setFacebookBmId(string facebookBmId) { DARABONBA_PTR_SET_VALUE(facebookBmId_, facebookBmId) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline CreateInstanceRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isConfirmAudit Field Functions 
    bool hasIsConfirmAudit() const { return this->isConfirmAudit_ != nullptr;};
    void deleteIsConfirmAudit() { this->isConfirmAudit_ = nullptr;};
    inline string getIsConfirmAudit() const { DARABONBA_PTR_GET_DEFAULT(isConfirmAudit_, "") };
    inline CreateInstanceRequest& setIsConfirmAudit(string isConfirmAudit) { DARABONBA_PTR_SET_VALUE(isConfirmAudit_, isConfirmAudit) };


    // isvTerms Field Functions 
    bool hasIsvTerms() const { return this->isvTerms_ != nullptr;};
    void deleteIsvTerms() { this->isvTerms_ = nullptr;};
    inline string getIsvTerms() const { DARABONBA_PTR_GET_DEFAULT(isvTerms_, "") };
    inline CreateInstanceRequest& setIsvTerms(string isvTerms) { DARABONBA_PTR_SET_VALUE(isvTerms_, isvTerms) };


    // officeAddress Field Functions 
    bool hasOfficeAddress() const { return this->officeAddress_ != nullptr;};
    void deleteOfficeAddress() { this->officeAddress_ = nullptr;};
    inline string getOfficeAddress() const { DARABONBA_PTR_GET_DEFAULT(officeAddress_, "") };
    inline CreateInstanceRequest& setOfficeAddress(string officeAddress) { DARABONBA_PTR_SET_VALUE(officeAddress_, officeAddress) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> channelType_ {};
    shared_ptr<string> contactMail_ {};
    shared_ptr<string> countryId_ {};
    // FacebookBmId
    shared_ptr<string> facebookBmId_ {};
    shared_ptr<string> instanceDescription_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> isConfirmAudit_ {};
    shared_ptr<string> isvTerms_ {};
    shared_ptr<string> officeAddress_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
