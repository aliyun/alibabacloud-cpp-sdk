// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCETDEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCETDEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyDBInstanceTDERequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceTDERequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptorName, encryptorName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
      DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceTDERequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptorName, encryptorName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
      DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
    };
    ModifyDBInstanceTDERequest() = default ;
    ModifyDBInstanceTDERequest(const ModifyDBInstanceTDERequest &) = default ;
    ModifyDBInstanceTDERequest(ModifyDBInstanceTDERequest &&) = default ;
    ModifyDBInstanceTDERequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceTDERequest() = default ;
    ModifyDBInstanceTDERequest& operator=(const ModifyDBInstanceTDERequest &) = default ;
    ModifyDBInstanceTDERequest& operator=(ModifyDBInstanceTDERequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->encryptionKey_ == nullptr && this->encryptorName_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->roleARN_ == nullptr && this->switchMode_ == nullptr && this->TDEStatus_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceTDERequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline ModifyDBInstanceTDERequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptorName Field Functions 
    bool hasEncryptorName() const { return this->encryptorName_ != nullptr;};
    void deleteEncryptorName() { this->encryptorName_ = nullptr;};
    inline string getEncryptorName() const { DARABONBA_PTR_GET_DEFAULT(encryptorName_, "") };
    inline ModifyDBInstanceTDERequest& setEncryptorName(string encryptorName) { DARABONBA_PTR_SET_VALUE(encryptorName_, encryptorName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceTDERequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceTDERequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceTDERequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceTDERequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string getRoleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline ModifyDBInstanceTDERequest& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline string getSwitchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, "") };
    inline ModifyDBInstanceTDERequest& setSwitchMode(string switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


    // TDEStatus Field Functions 
    bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
    void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
    inline string getTDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, "") };
    inline ModifyDBInstanceTDERequest& setTDEStatus(string TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The ID of the custom key.
    shared_ptr<string> encryptionKey_ {};
    // The encryption method. Set the value to **aes-256-cbc**.
    // 
    // > This parameter is valid only when the **TEDStatus** parameter is set to **enabled**.
    shared_ptr<string> encryptorName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The Alibaba Cloud Resource Name (ARN) of the specified Resource Access Management (RAM) role. The ARN is displayed in the `acs:ram::$accountID:role/$roleName` format.
    // 
    // > *   `$accountID`: specifies the ID of the Alibaba Cloud account. To view the account ID, log on to the Alibaba Cloud Management Console, move your pointer over your profile picture in the upper-right corner, and then click Security Settings.
    // 
    // > *   `$roleName`: specifies the name of the RAM role. To view the RAM role name, log on to the RAM console. In the left-side navigation pane, choose Identities > Roles. On the Roles page, view the name of the RAM role.
    shared_ptr<string> roleARN_ {};
    shared_ptr<string> switchMode_ {};
    // The TDE status. When the value of this parameter is set to **Enabled**, TDE is enabled.
    // 
    // > You cannot disable TDE after it is enabled. Proceed with caution.
    // 
    // This parameter is required.
    shared_ptr<string> TDEStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
