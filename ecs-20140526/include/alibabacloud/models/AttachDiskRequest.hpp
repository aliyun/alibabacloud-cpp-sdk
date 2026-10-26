// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AttachDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bootable, bootable_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bootable, bootable_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AttachDiskRequest() = default ;
    AttachDiskRequest(const AttachDiskRequest &) = default ;
    AttachDiskRequest(AttachDiskRequest &&) = default ;
    AttachDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDiskRequest() = default ;
    AttachDiskRequest& operator=(const AttachDiskRequest &) = default ;
    AttachDiskRequest& operator=(AttachDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bootable_ == nullptr
        && this->deleteWithInstance_ == nullptr && this->device_ == nullptr && this->diskId_ == nullptr && this->force_ == nullptr && this->instanceId_ == nullptr
        && this->keyPairName_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // bootable Field Functions 
    bool hasBootable() const { return this->bootable_ != nullptr;};
    void deleteBootable() { this->bootable_ = nullptr;};
    inline bool getBootable() const { DARABONBA_PTR_GET_DEFAULT(bootable_, false) };
    inline AttachDiskRequest& setBootable(bool bootable) { DARABONBA_PTR_SET_VALUE(bootable_, bootable) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline AttachDiskRequest& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline AttachDiskRequest& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline AttachDiskRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline AttachDiskRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachDiskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline AttachDiskRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AttachDiskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachDiskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AttachDiskRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachDiskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AttachDiskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to attach the disk as a system disk. Valid values:
    // 
    // - true: Yes.
    // 
    // - false: No.
    // 
    // Default value: false.
    // 
    // > If you set this parameter to `Bootable=true`, the destination ECS instance must not have a system disk attached.
    shared_ptr<bool> bootable_ {};
    // Specifies whether to release the disk when the instance is released. Valid values:
    // 
    // - true: The disk is released.
    // - false: The disk is not released. The disk is retained and converted to a pay-as-you-go data disk.
    // 
    // Default value: false.
    // 
    // When you configure this parameter, take note of the following items:
    // 
    // - If you set `DeleteWithInstance` to `false` and the ECS instance is locked for security reasons (that is, `"LockReason" : "security"` is marked in `OperationLocks`), this property of the disk is ignored and the disk is released when the ECS instance is released.
    // 
    // - If the destination disk that you want to attach is an `elastic ephemeral disk`, you must set the `DeleteWithInstance` parameter to `true`.
    // 
    // - This parameter cannot be configured for disks with the multi-attach feature enabled.
    shared_ptr<bool> deleteWithInstance_ {};
    // The device name of the disk.
    // 
    // > This parameter is being deprecated. To improve compatibility, we recommend that you use other parameters to identify the disk.
    shared_ptr<string> device_ {};
    // The ID of the disk that you want to attach. The disk (`DiskId`) and the instance (`InstanceId`) must be in the same zone.
    // 
    // > You can attach data disks and system disks. For the related constraints, see the operation description section above.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // Specifies whether to forcibly attach the disk. Valid values:
    // 
    // - true: Yes.
    // - false: No.
    // 
    // Default value: false.
    // 
    // 
    // > Currently, only regional Enterprise SSDs (ESSDs) (`cloud_regional_disk_auto`) support setting this parameter to true.
    shared_ptr<bool> force_ {};
    // The ID of the ECS instance to which you want to attach the disk.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the SSH key pair to bind to a Linux ECS instance when you attach a system disk.
    // 
    // - Windows Server: SSH key pairs are not supported. Even if you specify this parameter, only the `Password` configuration is applied.
    // 
    // - Linux: Password-based logon is disabled by default.
    shared_ptr<string> keyPairName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The logon password of the instance, which is configured when you attach a system disk. This parameter takes effect only for the administrator and root usernames and does not take effect for other usernames. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The special characters can be:
    // 
    // ```
    // ()`~!@#$%^&*-_+=|{}[]:;\\"<>,.?/
    // ```
    // For Windows instances, the password cannot start with a forward slash (/).
    // 
    // > If you specify the `Password` parameter, send the request over HTTPS to prevent password leaks.
    shared_ptr<string> password_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
