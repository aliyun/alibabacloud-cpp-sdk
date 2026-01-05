// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDENCRYPTIONDBROLEPRIVILEGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDENCRYPTIONDBROLEPRIVILEGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AddEncryptionDBRolePrivilegeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEncryptionDBRolePrivilegeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RolePrivilegeConfig, rolePrivilegeConfig_);
      DARABONBA_PTR_TO_JSON(RolePrivilegeName, rolePrivilegeName_);
    };
    friend void from_json(const Darabonba::Json& j, AddEncryptionDBRolePrivilegeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RolePrivilegeConfig, rolePrivilegeConfig_);
      DARABONBA_PTR_FROM_JSON(RolePrivilegeName, rolePrivilegeName_);
    };
    AddEncryptionDBRolePrivilegeRequest() = default ;
    AddEncryptionDBRolePrivilegeRequest(const AddEncryptionDBRolePrivilegeRequest &) = default ;
    AddEncryptionDBRolePrivilegeRequest(AddEncryptionDBRolePrivilegeRequest &&) = default ;
    AddEncryptionDBRolePrivilegeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEncryptionDBRolePrivilegeRequest() = default ;
    AddEncryptionDBRolePrivilegeRequest& operator=(const AddEncryptionDBRolePrivilegeRequest &) = default ;
    AddEncryptionDBRolePrivilegeRequest& operator=(AddEncryptionDBRolePrivilegeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->rolePrivilegeConfig_ == nullptr
        && this->rolePrivilegeName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline AddEncryptionDBRolePrivilegeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddEncryptionDBRolePrivilegeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddEncryptionDBRolePrivilegeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddEncryptionDBRolePrivilegeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddEncryptionDBRolePrivilegeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rolePrivilegeConfig Field Functions 
    bool hasRolePrivilegeConfig() const { return this->rolePrivilegeConfig_ != nullptr;};
    void deleteRolePrivilegeConfig() { this->rolePrivilegeConfig_ = nullptr;};
    inline string getRolePrivilegeConfig() const { DARABONBA_PTR_GET_DEFAULT(rolePrivilegeConfig_, "") };
    inline AddEncryptionDBRolePrivilegeRequest& setRolePrivilegeConfig(string rolePrivilegeConfig) { DARABONBA_PTR_SET_VALUE(rolePrivilegeConfig_, rolePrivilegeConfig) };


    // rolePrivilegeName Field Functions 
    bool hasRolePrivilegeName() const { return this->rolePrivilegeName_ != nullptr;};
    void deleteRolePrivilegeName() { this->rolePrivilegeName_ = nullptr;};
    inline string getRolePrivilegeName() const { DARABONBA_PTR_GET_DEFAULT(rolePrivilegeName_, "") };
    inline AddEncryptionDBRolePrivilegeRequest& setRolePrivilegeName(string rolePrivilegeName) { DARABONBA_PTR_SET_VALUE(rolePrivilegeName_, rolePrivilegeName) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> rolePrivilegeConfig_ {};
    shared_ptr<string> rolePrivilegeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
