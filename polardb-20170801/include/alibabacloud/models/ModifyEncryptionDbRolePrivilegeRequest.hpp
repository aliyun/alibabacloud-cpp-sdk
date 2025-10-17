// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYENCRYPTIONDBROLEPRIVILEGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYENCRYPTIONDBROLEPRIVILEGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyEncryptionDBRolePrivilegeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEncryptionDBRolePrivilegeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RolePrivilegeConfig, rolePrivilegeConfig_);
      DARABONBA_PTR_TO_JSON(RolePrivilegeName, rolePrivilegeName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEncryptionDBRolePrivilegeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RolePrivilegeConfig, rolePrivilegeConfig_);
      DARABONBA_PTR_FROM_JSON(RolePrivilegeName, rolePrivilegeName_);
    };
    ModifyEncryptionDBRolePrivilegeRequest() = default ;
    ModifyEncryptionDBRolePrivilegeRequest(const ModifyEncryptionDBRolePrivilegeRequest &) = default ;
    ModifyEncryptionDBRolePrivilegeRequest(ModifyEncryptionDBRolePrivilegeRequest &&) = default ;
    ModifyEncryptionDBRolePrivilegeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEncryptionDBRolePrivilegeRequest() = default ;
    ModifyEncryptionDBRolePrivilegeRequest& operator=(const ModifyEncryptionDBRolePrivilegeRequest &) = default ;
    ModifyEncryptionDBRolePrivilegeRequest& operator=(ModifyEncryptionDBRolePrivilegeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->rolePrivilegeConfig_ == nullptr
        && return this->rolePrivilegeName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyEncryptionDBRolePrivilegeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyEncryptionDBRolePrivilegeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyEncryptionDBRolePrivilegeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyEncryptionDBRolePrivilegeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyEncryptionDBRolePrivilegeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rolePrivilegeConfig Field Functions 
    bool hasRolePrivilegeConfig() const { return this->rolePrivilegeConfig_ != nullptr;};
    void deleteRolePrivilegeConfig() { this->rolePrivilegeConfig_ = nullptr;};
    inline string rolePrivilegeConfig() const { DARABONBA_PTR_GET_DEFAULT(rolePrivilegeConfig_, "") };
    inline ModifyEncryptionDBRolePrivilegeRequest& setRolePrivilegeConfig(string rolePrivilegeConfig) { DARABONBA_PTR_SET_VALUE(rolePrivilegeConfig_, rolePrivilegeConfig) };


    // rolePrivilegeName Field Functions 
    bool hasRolePrivilegeName() const { return this->rolePrivilegeName_ != nullptr;};
    void deleteRolePrivilegeName() { this->rolePrivilegeName_ = nullptr;};
    inline string rolePrivilegeName() const { DARABONBA_PTR_GET_DEFAULT(rolePrivilegeName_, "") };
    inline ModifyEncryptionDBRolePrivilegeRequest& setRolePrivilegeName(string rolePrivilegeName) { DARABONBA_PTR_SET_VALUE(rolePrivilegeName_, rolePrivilegeName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> rolePrivilegeConfig_ = nullptr;
    std::shared_ptr<string> rolePrivilegeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
