// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENCRYPTIONDBROLEPRIVILEGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENCRYPTIONDBROLEPRIVILEGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteEncryptionDBRolePrivilegeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEncryptionDBRolePrivilegeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RolePrivilegeNameList, rolePrivilegeNameList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEncryptionDBRolePrivilegeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RolePrivilegeNameList, rolePrivilegeNameList_);
    };
    DeleteEncryptionDBRolePrivilegeRequest() = default ;
    DeleteEncryptionDBRolePrivilegeRequest(const DeleteEncryptionDBRolePrivilegeRequest &) = default ;
    DeleteEncryptionDBRolePrivilegeRequest(DeleteEncryptionDBRolePrivilegeRequest &&) = default ;
    DeleteEncryptionDBRolePrivilegeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEncryptionDBRolePrivilegeRequest() = default ;
    DeleteEncryptionDBRolePrivilegeRequest& operator=(const DeleteEncryptionDBRolePrivilegeRequest &) = default ;
    DeleteEncryptionDBRolePrivilegeRequest& operator=(DeleteEncryptionDBRolePrivilegeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->rolePrivilegeNameList_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteEncryptionDBRolePrivilegeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteEncryptionDBRolePrivilegeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteEncryptionDBRolePrivilegeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteEncryptionDBRolePrivilegeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteEncryptionDBRolePrivilegeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rolePrivilegeNameList Field Functions 
    bool hasRolePrivilegeNameList() const { return this->rolePrivilegeNameList_ != nullptr;};
    void deleteRolePrivilegeNameList() { this->rolePrivilegeNameList_ = nullptr;};
    inline string rolePrivilegeNameList() const { DARABONBA_PTR_GET_DEFAULT(rolePrivilegeNameList_, "") };
    inline DeleteEncryptionDBRolePrivilegeRequest& setRolePrivilegeNameList(string rolePrivilegeNameList) { DARABONBA_PTR_SET_VALUE(rolePrivilegeNameList_, rolePrivilegeNameList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> rolePrivilegeNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
