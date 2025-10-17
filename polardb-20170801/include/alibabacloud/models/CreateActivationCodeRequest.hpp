// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACTIVATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACTIVATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateActivationCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateActivationCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SystemIdentifier, systemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateActivationCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SystemIdentifier, systemIdentifier_);
    };
    CreateActivationCodeRequest() = default ;
    CreateActivationCodeRequest(const CreateActivationCodeRequest &) = default ;
    CreateActivationCodeRequest(CreateActivationCodeRequest &&) = default ;
    CreateActivationCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateActivationCodeRequest() = default ;
    CreateActivationCodeRequest& operator=(const CreateActivationCodeRequest &) = default ;
    CreateActivationCodeRequest& operator=(CreateActivationCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunOrderId_ == nullptr
        && return this->description_ == nullptr && return this->macAddress_ == nullptr && return this->name_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->systemIdentifier_ == nullptr; };
    // aliyunOrderId Field Functions 
    bool hasAliyunOrderId() const { return this->aliyunOrderId_ != nullptr;};
    void deleteAliyunOrderId() { this->aliyunOrderId_ = nullptr;};
    inline string aliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(aliyunOrderId_, "") };
    inline CreateActivationCodeRequest& setAliyunOrderId(string aliyunOrderId) { DARABONBA_PTR_SET_VALUE(aliyunOrderId_, aliyunOrderId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateActivationCodeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // macAddress Field Functions 
    bool hasMacAddress() const { return this->macAddress_ != nullptr;};
    void deleteMacAddress() { this->macAddress_ = nullptr;};
    inline string macAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
    inline CreateActivationCodeRequest& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateActivationCodeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateActivationCodeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateActivationCodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateActivationCodeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateActivationCodeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // systemIdentifier Field Functions 
    bool hasSystemIdentifier() const { return this->systemIdentifier_ != nullptr;};
    void deleteSystemIdentifier() { this->systemIdentifier_ = nullptr;};
    inline string systemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(systemIdentifier_, "") };
    inline CreateActivationCodeRequest& setSystemIdentifier(string systemIdentifier) { DARABONBA_PTR_SET_VALUE(systemIdentifier_, systemIdentifier) };


  protected:
    // The Alibaba Cloud order ID (including the virtual order ID).
    // 
    // This parameter is required.
    std::shared_ptr<string> aliyunOrderId_ = nullptr;
    // The description of the activation code.
    std::shared_ptr<string> description_ = nullptr;
    // The MAC address.
    // 
    // This parameter is required.
    std::shared_ptr<string> macAddress_ = nullptr;
    // The name of the activation code. The name can contain only letters, digits, underscores (_), and hyphens (-). The activation code file downloaded from the console is named based on this name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The system identifier of the database. This parameter is required if you set AllowEmptySystemIdentifier to false.
    std::shared_ptr<string> systemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
