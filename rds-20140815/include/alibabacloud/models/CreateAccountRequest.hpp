// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(CheckPolicy, checkPolicy_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(CheckPolicy, checkPolicy_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
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
        && this->accountName_ == nullptr && this->accountPassword_ == nullptr && this->accountType_ == nullptr && this->checkPolicy_ == nullptr && this->DBInstanceId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
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


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline CreateAccountRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // checkPolicy Field Functions 
    bool hasCheckPolicy() const { return this->checkPolicy_ != nullptr;};
    void deleteCheckPolicy() { this->checkPolicy_ = nullptr;};
    inline bool getCheckPolicy() const { DARABONBA_PTR_GET_DEFAULT(checkPolicy_, false) };
    inline CreateAccountRequest& setCheckPolicy(bool checkPolicy) { DARABONBA_PTR_SET_VALUE(checkPolicy_, checkPolicy) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateAccountRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


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


  protected:
    // The description of the account. The description must be 2 to 256 characters in length. It must start with a letter or a Chinese character and can contain digits, Chinese characters, letters, underscores (_), and hyphens (-).
    // >The description cannot start with `http://` or `https://`.
    shared_ptr<string> accountDescription_ {};
    // The name of the database account.
    // 
    // > The name must be unique and can contain uppercase letters (supported only by MySQL), lowercase letters, digits, or underscores. For specific naming conventions, refer to the tutorials for each engine: [Create a MySQL account](https://help.aliyun.com/document_detail/96089.html), [Create a PostgreSQL account](https://help.aliyun.com/document_detail/96753.html), [Create a SQL Server account](https://help.aliyun.com/document_detail/95810.html), [Create a MariaDB account](https://help.aliyun.com/document_detail/97132.html).
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The password of the database account.
    // > * The password must be 8 to 32 characters in length.
    // > * The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters (`!@#$%^&*()_+-=`).
    // 
    // This parameter is required.
    shared_ptr<string> accountPassword_ {};
    // The type of the account. Valid values:
    // 
    // - **Normal** (default): standard account.
    // - **Super**: privileged account. You can create at most one privileged account per instance.
    // - **Sysadmin** (SQL Server instances only): database account with SA permissions. Before you create this account, check whether the instance meets the [prerequisites](https://help.aliyun.com/document_detail/170736.html).
    // - **GlobalRO** (SQL Server instances only): global read-only account. You can create at most two global read-only accounts per instance. The database engine version of the instance must be SQL Server 2016 or later, and the instance type must be dedicated or general-purpose.
    shared_ptr<string> accountType_ {};
    // The [account password policy](https://help.aliyun.com/document_detail/2845728.html) for the SQL Server instance. Valid values:
    // - **true**: The policy is applied.
    // - **false**: The policy is not applied.
    // > - If you set this parameter to true, you must first [configure the SQL Server account password policy](https://help.aliyun.com/document_detail/2848317.html).
    // > - This parameter does not support SQL Server instances of the [shared instance type](https://help.aliyun.com/document_detail/57184.html), [2008 R2 edition](https://help.aliyun.com/document_detail/145468.html), or [serverless type](https://help.aliyun.com/document_detail/603466.html).
    shared_ptr<bool> checkPolicy_ {};
    // The instance ID. You can call [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
