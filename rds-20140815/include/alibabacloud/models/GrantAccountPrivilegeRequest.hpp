// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTACCOUNTPRIVILEGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTACCOUNTPRIVILEGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GrantAccountPrivilegeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantAccountPrivilegeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantAccountPrivilegeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    GrantAccountPrivilegeRequest() = default ;
    GrantAccountPrivilegeRequest(const GrantAccountPrivilegeRequest &) = default ;
    GrantAccountPrivilegeRequest(GrantAccountPrivilegeRequest &&) = default ;
    GrantAccountPrivilegeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantAccountPrivilegeRequest() = default ;
    GrantAccountPrivilegeRequest& operator=(const GrantAccountPrivilegeRequest &) = default ;
    GrantAccountPrivilegeRequest& operator=(GrantAccountPrivilegeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPrivilege_ == nullptr && this->DBInstanceId_ == nullptr && this->DBName_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GrantAccountPrivilegeRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline GrantAccountPrivilegeRequest& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline GrantAccountPrivilegeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline GrantAccountPrivilegeRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GrantAccountPrivilegeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The account name. You can call [DescribeAccounts](https://help.aliyun.com/document_detail/610454.html) to query the account name.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The type of account permission. If you specify multiple values for DBName, you must specify the same number of permission types in the same order, separated by commas (,).
    // 
    // The supported permission types vary by database engine. Valid values:
    // > For more information about account permissions, see [MySQL/MariaDB permission list](https://help.aliyun.com/document_detail/146395.html), [SQL Server permission list](https://help.aliyun.com/document_detail/95692.html), and [PostgreSQL permission list](https://help.aliyun.com/document_detail/257684.html).
    // <details>
    // <summary>ApsaraDB RDS for MySQL/ApsaraDB RDS for MariaDB</summary>
    // 
    // - **ReadWrite**: read and write.
    // - **ReadOnly**: read-only.
    // - **DDLOnly**: DDL only.
    // - **DMLOnly**: DML only.
    // 
    // </details>
    // 
    // <details>
    // <summary>ApsaraDB RDS for SQL Server</summary>
    // 
    // - **ReadWrite**: read and write. This permission corresponds to the `db_datawriter` and `db_datareader` database roles in SQL Server.
    // - **ReadOnly**: read-only. This permission corresponds to the `db_datareader` database role in SQL Server.
    // - **DBOwner**: database owner. This permission corresponds to the `db_owner` database role in SQL Server.
    // > For more information about database-level roles, see [Microsoft official documentation](https://learn.microsoft.com/en-us/sql/relational-databases/security/authentication-access/database-level-roles?view=sql-server-ver16).
    // </details>
    // 
    // <details>
    // <summary>ApsaraDB RDS for PostgreSQL</summary>
    // 
    // **DBOwner**: database owner.
    // > For fine-grained permission management, see [Best practices for PostgreSQL permission management](https://help.aliyun.com/document_detail/352149.html).
    // </details>
    // 
    // This parameter is required.
    shared_ptr<string> accountPrivilege_ {};
    // The instance ID. You can call [DescribeDBInstances](https://help.aliyun.com/document_detail/610396.html) to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database to which you want to grant access permissions. To grant permissions on multiple databases at a time, separate the database names with commas (,), such as `db1,db2,db3`.
    // 
    // This parameter is required.
    shared_ptr<string> DBName_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
