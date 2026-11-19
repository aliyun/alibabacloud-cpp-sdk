// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CreateAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(CharacterType, characterType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(CharacterType, characterType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
    };
    CreateAccountRequest() = default ;
    CreateAccountRequest(const CreateAccountRequest &) = default ;
    CreateAccountRequest(CreateAccountRequest &&) = default ;
    CreateAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountRequest() = default ;
    CreateAccountRequest& operator=(const CreateAccountRequest &) = default ;
    CreateAccountRequest& operator=(CreateAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Roles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Roles& obj) { 
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Roles& obj) { 
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      Roles() = default ;
      Roles(const Roles &) = default ;
      Roles(Roles &&) = default ;
      Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Roles() = default ;
      Roles& operator=(const Roles &) = default ;
      Roles& operator=(Roles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBName_ == nullptr
        && this->role_ == nullptr; };
      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline Roles& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Roles& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      // The database to which the account belongs (authentication database).<br>
      // Default value: `admin`.<br>Rules: If this parameter is left empty, the request is allowed and the downstream system processes it as `admin`. If this parameter is specified, the length must be 1 to 63 characters. The value cannot contain `/`, `\\`, `.`, spaces, `"`, or `$`, and cannot be `local`. Otherwise, `InvalidParameter` is returned.
      shared_ptr<string> DBName_ {};
      // The role name. It can be a built-in role or a custom role created on the instance. For value rules, see [Roles parameter description](https://www.alibabacloud.com/help/en/mongodb/manage-database-accounts-through-the-console).
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountPassword_ == nullptr && this->characterType_ == nullptr && this->DBInstanceId_ == nullptr && this->DBName_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->roles_ == nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline CreateAccountRequest& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateAccountRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // characterType Field Functions 
    bool hasCharacterType() const { return this->characterType_ != nullptr;};
    void deleteCharacterType() { this->characterType_ = nullptr;};
    inline string getCharacterType() const { DARABONBA_PTR_GET_DEFAULT(characterType_, "") };
    inline CreateAccountRequest& setCharacterType(string characterType) { DARABONBA_PTR_SET_VALUE(characterType_, characterType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateAccountRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateAccountRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateAccountRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAccountRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAccountRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAccountRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<CreateAccountRequest::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<CreateAccountRequest::Roles>) };
    inline vector<CreateAccountRequest::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<CreateAccountRequest::Roles>) };
    inline CreateAccountRequest& setRoles(const vector<CreateAccountRequest::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline CreateAccountRequest& setRoles(vector<CreateAccountRequest::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    // The account description.
    // 
    // - Regular expression: `^[a-zA-Z一-龥][a-zA-Z一-龥0-9_.-]{1,255}$`. The description must start with an English letter or Chinese character, followed by English letters, Chinese characters, digits, underscores (_), periods (.), or hyphens (-). The length must be 2 to 256 characters.
    // - If the description is invalid, InvalidAccountDescription.Malformed is returned.
    shared_ptr<string> accountDescription_ {};
    // The account name.
    // - Regular expression: `^[a-z]+[a-z0-9|_]*[a-z0-9]+$`. The name must start with a lowercase letter, end with a lowercase letter or digit, and can contain lowercase letters, digits, and underscores (_). The length must be 2 to 16 characters.
    // - The reserved name `root` (case-insensitive, built-in system account) cannot be used.
    // - The name cannot start with `__cloud` (reserved prefix for system accounts).
    // - If the name is invalid, `InvalidAccountName.Malformed` is returned.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The account password.
    // - The length must be 8 to 32 characters. It can contain uppercase letters, lowercase letters, digits, and the following special characters: `!@#$%^&*()_+-=`.
    // - The password must contain at least **three** of the following four character types: uppercase letters, lowercase letters, digits, and special characters.
    // - If the password is invalid, `InvalidAccountPassword.Malformed` is returned.
    // 
    // 
    // > For information about how to handle special characters, see [How do I resolve the connection failure caused by special characters in the account name or password of a connection string?](https://help.aliyun.com/document_detail/471568.html)
    // 
    // This parameter is required.
    shared_ptr<string> accountPassword_ {};
    // The account type.<br>Valid values:<br>- `normal`: replica set account. For a replica set instance, any value is processed as `normal`.<br>- `cs`: sharded cluster ConfigServer account.<br>- `db`: sharded cluster Shard direct connection account. For a sharded cluster instance, any value other than `cs` is processed as `db`.<br>Default value: `db`.
    shared_ptr<string> characterType_ {};
    // The instance ID. For a sharded cluster instance, specify the sharded cluster ID. Account operations are executed from the perspective of the ConfigServer.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The database to which the account belongs (authentication database).<br>
    // Default value: `admin`.<br>Rules: If this parameter is left empty, the request is allowed and the downstream system processes it as `admin`. If this parameter is specified, the length must be 1 to 63 characters. The value cannot contain `/`, `\\`, `.`, spaces, `"`, or `$`, and cannot be `local`. Otherwise, `InvalidParameter` is returned.
    shared_ptr<string> DBName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of authorization roles for the account. **Required for replica set and ConfigServer (cs) accounts**. **Prohibited for sharded cluster Shard direct connection (db) accounts**.
    // - **Globally prohibited** (returns `InvalidRoles.NotAllowed`): `root`, `clusterAdmin`, `hostManager`, `clusterManager`, `__system`, `__queryableBackup`, and `restore`.
    // - **Can be authorized to any database (including admin)**: `read`, `userAdmin`, and `enableSharding`.
    // - **Can only be authorized to non-admin databases** (returns `InvalidRoles.InvalidDB` if authorized to admin): `readWrite`, `dbAdmin`, and `dbOwner`.
    // - **Can only be authorized to the admin database**: `readAnyDatabase`, `readWriteAnyDatabase`, `userAdminAnyDatabase`, `dbAdminAnyDatabase`, `clusterMonitor`, `backup`, and `alibabaCloudAdmin`. (`alibabaCloudAdmin` is supported only for instances with kernel version 4.4 or later. For earlier versions, `InvalidRoles.NotAllowed` is returned.)
    // - **Custom roles**: Roles other than the preceding ones are considered custom roles and must already exist in the instance (you can query them by calling DescribeAccountRoles). Otherwise, `InvalidRoles.NotFound` is returned. `Roles.N.DBName` must be the same as the database where the role is defined. Otherwise, `InvalidRoles.DBNotMatch` is returned.
    // - If `Roles` is missing as a whole, `MissingRoles` is returned. If `Roles.N.Role` and `Roles.N.DBName` do not appear in pairs, `InvalidRoles.Malformed` is returned. If `Roles` is passed for a sharded cluster Shard direct connection account, `InvalidRoles.NotSupported` is returned.
    shared_ptr<vector<CreateAccountRequest::Roles>> roles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
