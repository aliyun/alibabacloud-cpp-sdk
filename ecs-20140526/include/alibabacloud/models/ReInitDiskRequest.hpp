// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REINITDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REINITDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ReInitDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReInitDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStartInstance, autoStartInstance_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, ReInitDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStartInstance, autoStartInstance_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
    };
    ReInitDiskRequest() = default ;
    ReInitDiskRequest(const ReInitDiskRequest &) = default ;
    ReInitDiskRequest(ReInitDiskRequest &&) = default ;
    ReInitDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReInitDiskRequest() = default ;
    ReInitDiskRequest& operator=(const ReInitDiskRequest &) = default ;
    ReInitDiskRequest& operator=(ReInitDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoStartInstance_ == nullptr
        && this->diskId_ == nullptr && this->keyPairName_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityEnhancementStrategy_ == nullptr; };
    // autoStartInstance Field Functions 
    bool hasAutoStartInstance() const { return this->autoStartInstance_ != nullptr;};
    void deleteAutoStartInstance() { this->autoStartInstance_ = nullptr;};
    inline bool getAutoStartInstance() const { DARABONBA_PTR_GET_DEFAULT(autoStartInstance_, false) };
    inline ReInitDiskRequest& setAutoStartInstance(bool autoStartInstance) { DARABONBA_PTR_SET_VALUE(autoStartInstance_, autoStartInstance) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ReInitDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ReInitDiskRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ReInitDiskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ReInitDiskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ReInitDiskRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ReInitDiskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ReInitDiskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline ReInitDiskRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


  protected:
    // Specifies whether to automatically start the instance after the disk is reinitialized. Valid values:
    // 
    // - true: automatically starts the instance.
    // - false: does not automatically start the instance.
    // 
    // Default value: false.
    shared_ptr<bool> autoStartInstance_ {};
    // The ID of the disk to be reinitialized.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // The name of the key pair.
    // 
    // > This parameter is applicable only to Linux instances. When the system disk is reinitialized, you can attach an SSH key pair to the ECS instance as the logon credential. After you use an SSH key pair, the username and password logon method is disabled.
    shared_ptr<string> keyPairName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to reset the username and password of the ECS instance when the system disk is reinitialized. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported:
    // 
    // ```
    // ()`~!@#$%^&*-_+=|{}[]:;\\"<>,.?/
    // ```
    // 
    // For Windows instances, the password cannot start with a forward slash (/).
    // 
    // > If you specify the `Password` parameter, use HTTPS to send the request to avoid password leaks.
    shared_ptr<string> password_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to use the free Security Center service after the system disk is reinitialized. Valid values: 
    //          
    // - Active: uses the Security Center service. This value is applicable only to public images.  
    // 
    // - Deactive: does not use the Security Center service. This value is applicable to all images.  
    // 
    // Default value: Deactive.
    shared_ptr<string> securityEnhancementStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
