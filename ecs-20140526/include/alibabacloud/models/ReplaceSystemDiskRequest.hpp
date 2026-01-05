// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACESYSTEMDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACESYSTEMDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ReplaceSystemDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceSystemDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_TO_JSON(UseAdditionalService, useAdditionalService_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceSystemDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_FROM_JSON(UseAdditionalService, useAdditionalService_);
    };
    ReplaceSystemDiskRequest() = default ;
    ReplaceSystemDiskRequest(const ReplaceSystemDiskRequest &) = default ;
    ReplaceSystemDiskRequest(ReplaceSystemDiskRequest &&) = default ;
    ReplaceSystemDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceSystemDiskRequest() = default ;
    ReplaceSystemDiskRequest& operator=(const ReplaceSystemDiskRequest &) = default ;
    ReplaceSystemDiskRequest& operator=(ReplaceSystemDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Arn : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Arn& obj) { 
        DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
        DARABONBA_PTR_TO_JSON(Rolearn, rolearn_);
      };
      friend void from_json(const Darabonba::Json& j, Arn& obj) { 
        DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
        DARABONBA_PTR_FROM_JSON(Rolearn, rolearn_);
      };
      Arn() = default ;
      Arn(const Arn &) = default ;
      Arn(Arn &&) = default ;
      Arn(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Arn() = default ;
      Arn& operator=(const Arn &) = default ;
      Arn& operator=(Arn &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleType_ == nullptr && this->rolearn_ == nullptr; };
      // assumeRoleFor Field Functions 
      bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
      void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
      inline int64_t getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, 0L) };
      inline Arn& setAssumeRoleFor(int64_t assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline Arn& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


      // rolearn Field Functions 
      bool hasRolearn() const { return this->rolearn_ != nullptr;};
      void deleteRolearn() { this->rolearn_ = nullptr;};
      inline string getRolearn() const { DARABONBA_PTR_GET_DEFAULT(rolearn_, "") };
      inline Arn& setRolearn(string rolearn) { DARABONBA_PTR_SET_VALUE(rolearn_, rolearn) };


    protected:
      // > This parameter is unavailable.
      shared_ptr<int64_t> assumeRoleFor_ {};
      // > This parameter is not available for public use.
      shared_ptr<string> roleType_ {};
      // > This parameter is not available for public use.
      shared_ptr<string> rolearn_ {};
    };

    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      SystemDisk() = default ;
      SystemDisk(const SystemDisk &) = default ;
      SystemDisk(SystemDisk &&) = default ;
      SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDisk() = default ;
      SystemDisk& operator=(const SystemDisk &) = default ;
      SystemDisk& operator=(SystemDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->size_ == nullptr; };
      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The capacity of the new system disk. Unit: GiB. Valid values:
      // 
      // *   Basic disk: Max{20, Size of the image specified by ImageId} to 500.
      // 
      // *   Enterprise SSD (ESSD):
      // 
      //     *   PL0 ESSD: Max{1, Size of the image specified by ImageId} to 2048.
      //     *   PL1 ESSD: Max{20, Size of the image specified by ImageId} to 2048.
      //     *   PL2 ESSD: Max{461, Size of the image specified by ImageId} to 2048.
      //     *   PL3 ESSD: Max{1261, Size of the image specified by ImageId} to 2048.
      // 
      // *   ESSD AutoPL disk: Max{1, Size of the image specified by ImageId} to 2048.
      // 
      // *   Other disk categories: Max{20, Size of the image specified by ImageId} to 2048.
      // 
      // Default value: Max{40, Size of the image specified by ImageId}.
      // 
      // >  If the capacity of the new system disk exceeds `Max{20, Capacity of the original system disk}`, you are charged for the excess capacity.
      shared_ptr<int32_t> size_ {};
    };

    virtual bool empty() const override { return this->systemDisk_ == nullptr
        && this->architecture_ == nullptr && this->arn_ == nullptr && this->clientToken_ == nullptr && this->diskId_ == nullptr && this->encryptAlgorithm_ == nullptr
        && this->encrypted_ == nullptr && this->imageId_ == nullptr && this->instanceId_ == nullptr && this->KMSKeyId_ == nullptr && this->keyPairName_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->passwordInherit_ == nullptr && this->platform_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityEnhancementStrategy_ == nullptr && this->useAdditionalService_ == nullptr; };
    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const ReplaceSystemDiskRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, ReplaceSystemDiskRequest::SystemDisk) };
    inline ReplaceSystemDiskRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, ReplaceSystemDiskRequest::SystemDisk) };
    inline ReplaceSystemDiskRequest& setSystemDisk(const ReplaceSystemDiskRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline ReplaceSystemDiskRequest& setSystemDisk(ReplaceSystemDiskRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline ReplaceSystemDiskRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline const vector<ReplaceSystemDiskRequest::Arn> & getArn() const { DARABONBA_PTR_GET_CONST(arn_, vector<ReplaceSystemDiskRequest::Arn>) };
    inline vector<ReplaceSystemDiskRequest::Arn> getArn() { DARABONBA_PTR_GET(arn_, vector<ReplaceSystemDiskRequest::Arn>) };
    inline ReplaceSystemDiskRequest& setArn(const vector<ReplaceSystemDiskRequest::Arn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
    inline ReplaceSystemDiskRequest& setArn(vector<ReplaceSystemDiskRequest::Arn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReplaceSystemDiskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ReplaceSystemDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // encryptAlgorithm Field Functions 
    bool hasEncryptAlgorithm() const { return this->encryptAlgorithm_ != nullptr;};
    void deleteEncryptAlgorithm() { this->encryptAlgorithm_ = nullptr;};
    inline string getEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptAlgorithm_, "") };
    inline ReplaceSystemDiskRequest& setEncryptAlgorithm(string encryptAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptAlgorithm_, encryptAlgorithm) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline ReplaceSystemDiskRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ReplaceSystemDiskRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReplaceSystemDiskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline ReplaceSystemDiskRequest& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ReplaceSystemDiskRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ReplaceSystemDiskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ReplaceSystemDiskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ReplaceSystemDiskRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline ReplaceSystemDiskRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ReplaceSystemDiskRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ReplaceSystemDiskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ReplaceSystemDiskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline ReplaceSystemDiskRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // useAdditionalService Field Functions 
    bool hasUseAdditionalService() const { return this->useAdditionalService_ != nullptr;};
    void deleteUseAdditionalService() { this->useAdditionalService_ = nullptr;};
    inline bool getUseAdditionalService() const { DARABONBA_PTR_GET_DEFAULT(useAdditionalService_, false) };
    inline ReplaceSystemDiskRequest& setUseAdditionalService(bool useAdditionalService) { DARABONBA_PTR_SET_VALUE(useAdditionalService_, useAdditionalService) };


  protected:
    shared_ptr<ReplaceSystemDiskRequest::SystemDisk> systemDisk_ {};
    // >  This parameter is deprecated.
    shared_ptr<string> architecture_ {};
    // This parameter is not available for public use.
    shared_ptr<vector<ReplaceSystemDiskRequest::Arn>> arn_ {};
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but make sure that the token is unique across requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // >  This parameter is deprecated. To improve compatibility, we recommend that you use `ImageId`.
    shared_ptr<string> diskId_ {};
    // > This parameter is not available for public use.
    shared_ptr<string> encryptAlgorithm_ {};
    // Specifies whether to encrypt the disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  When you use a shared encrypted image to create the disk based on an encrypted snapshot, you must set Encrypted to true to ensure that the disk uses an encryption key of your own.
    shared_ptr<bool> encrypted_ {};
    // The ID of the image used to replace the system disk. This parameter is required.
    shared_ptr<string> imageId_ {};
    // The ID of the instance whose operating system you want to replace.
    // 
    // >  Make sure that the instance is in the `Stopped` (`Stopped`) state.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the KMS key to use for the system disk.
    shared_ptr<string> KMSKeyId_ {};
    // The name of the key pair.
    // 
    // > This parameter is applicable only to Linux instances. You can bind an SSH key pair to the instance as a logon credential. After you bind the SSH key pair, the username and password logon method is disabled for the instance.
    shared_ptr<string> keyPairName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to reset the password for the instance. The password must be 8 to 30 characters in length and contain at least three of the following items: uppercase letters, lowercase letters, digits, and special characters. Special characters include:
    // 
    //     ()`~!@#$%^&*-_+=|{}[]:;\\"<>,.?/
    // 
    // The passwords of Windows instances cannot start with a forward slash (/).
    // 
    // This parameter is empty by default, which indicates that the current password remains unchanged.
    // 
    // > If you specify `Password`, we recommend that you send requests over HTTPS to prevent password leaks.
    shared_ptr<string> password_ {};
    // Specifies whether to use the preset password of the image.
    // 
    // Default value: false
    // 
    // > If the PasswordInherit parameter is specified, you must leave the Password parameter empty. Before you use this parameter, make sure that a password is preset for the image.
    shared_ptr<bool> passwordInherit_ {};
    // >  This parameter is deprecated.
    shared_ptr<string> platform_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to use Security Center Basic after the system disk is replaced. Valid values:
    // 
    // *   Active: uses Security Center Basic after the system disk is re-initialized. This value is applicable only to public images.
    // *   Deactive: does not use Security Center Basic after the system disk is re-initialized. This value is applicable to all images.
    // 
    // Default value: Deactive.
    shared_ptr<string> securityEnhancementStrategy_ {};
    // Specifies whether to use the system configurations for virtual machines provided by Alibaba Cloud. System configurations for Windows: NTP and KMS. System configurations for Linux: NTP and YUM.
    // 
    // > This parameter takes effect only when you attach a system disk whose device name is /dev/xvda.
    shared_ptr<bool> useAdditionalService_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
