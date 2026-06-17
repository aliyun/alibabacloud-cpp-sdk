// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrivForAllDB, privForAllDB_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrivForAllDB, privForAllDB_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
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
    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountPassword_ == nullptr && this->accountPrivilege_ == nullptr && this->accountType_ == nullptr && this->clientToken_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBName_ == nullptr && this->nodeType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->privForAllDB_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
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


    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline CreateAccountRequest& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline CreateAccountRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAccountRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAccountRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateAccountRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline CreateAccountRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


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


    // privForAllDB Field Functions 
    bool hasPrivForAllDB() const { return this->privForAllDB_ != nullptr;};
    void deletePrivForAllDB() { this->privForAllDB_ = nullptr;};
    inline string getPrivForAllDB() const { DARABONBA_PTR_GET_DEFAULT(privForAllDB_, "") };
    inline CreateAccountRequest& setPrivForAllDB(string privForAllDB) { DARABONBA_PTR_SET_VALUE(privForAllDB_, privForAllDB) };


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


  protected:
    // The description of the account. The description must meet the following requirements:
    // 
    // - It cannot start with `http://` or `https://`.
    // 
    // - It must be 2 to 256 characters in length.
    shared_ptr<string> accountDescription_ {};
    // The name of the database account. The name must meet the following requirements:
    // 
    // - It must start with a lowercase letter and end with a letter or a digit.
    // 
    // - It can contain lowercase letters, digits, and underscores (_).
    // 
    // - It must be 2 to 16 characters in length.
    // 
    // - It cannot be a reserved keyword, such as root or admin.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The password of the database account. The password must meet the following requirements:
    // 
    // - It must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // 
    // - It must be 8 to 32 characters in length.
    // 
    // - The special characters are `!@#$%^&*()_+-=`.
    // 
    // This parameter is required.
    shared_ptr<string> accountPassword_ {};
    // The privilege level to grant on the specified databases. Valid values:
    // 
    // - **ReadWrite**: read and write permissions
    // 
    // - **ReadOnly**: read-only permissions
    // 
    // - **DMLOnly**: DML permissions only
    // 
    // - **DDLOnly**: DDL permissions only
    // 
    // - **ReadIndex**: read-only and index permissions
    // 
    // > * This parameter takes effect only when you specify the `DBName` parameter.
    // >
    // > * If you specify multiple databases in `DBName`, you must specify a corresponding permission for each in `AccountPrivilege`, separated by commas. The `AccountPrivilege` string cannot exceed 900 characters. For example, to grant read and write permissions to database DB1 and read-only permissions to database DB2, set `DBName` to `DB1,DB2` and set `AccountPrivilege` to `ReadWrite,ReadOnly`.
    // >
    // > * This parameter applies only to standard accounts on PolarDB for MySQL clusters.
    shared_ptr<string> accountPrivilege_ {};
    // The type of the account. Valid values:
    // 
    // - **Normal**: a standard account.
    // 
    // - **Super**: a privileged account.
    // 
    // > * If you do not specify this parameter, the system creates a **Super** account by default.
    // >
    // > * You can create multiple privileged accounts on PolarDB for PostgreSQL (Oracle-Compatible) and PolarDB for PostgreSQL clusters. A privileged account has more permissions than a standard account. For more information, see [Create database accounts](https://help.aliyun.com/document_detail/68508.html).
    // >
    // > * For a PolarDB for MySQL cluster, you can create only one privileged account. For more information, see [Create database accounts](https://help.aliyun.com/document_detail/68508.html).
    shared_ptr<string> accountType_ {};
    // A client-generated token to ensure request idempotency. The token must be unique across requests. It is case-sensitive and can be up to 64 ASCII characters long.
    shared_ptr<string> clientToken_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the database that the account can access. To specify multiple databases, separate the database names with a comma (,).
    // 
    // > This parameter applies only to standard accounts on PolarDB for MySQL clusters.
    shared_ptr<string> DBName_ {};
    // The type of the node. Valid values:
    // 
    // - **Search**: For creating an account on a PolarDB Search node.
    shared_ptr<string> nodeType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to grant the account permissions on all current and future databases in the cluster. Valid values:
    // 
    // - **0 or do not specify**: The specified permissions are not granted to all databases.
    // 
    // - **1**: Grants the specified permissions to all current and future databases.
    // 
    // > * This parameter takes effect only when you specify the `AccountPrivilege` parameter.
    // >
    // > * If you set this parameter to `1`, the permissions specified in `AccountPrivilege` are granted to all databases.
    shared_ptr<string> privForAllDB_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
