// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDBINSTANCEACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDBINSTANCEACCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountsDBInstanceAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountsDBInstanceAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(BypassRLS, bypassRLS_);
      DARABONBA_PTR_TO_JSON(CheckPolicy, checkPolicy_);
      DARABONBA_PTR_TO_JSON(CreateDB, createDB_);
      DARABONBA_PTR_TO_JSON(CreateRole, createRole_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DatabasePrivileges, databasePrivileges_);
      DARABONBA_PTR_TO_JSON(PasswordExpireTime, passwordExpireTime_);
      DARABONBA_PTR_TO_JSON(PrivExceeded, privExceeded_);
      DARABONBA_PTR_TO_JSON(Replication, replication_);
      DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountsDBInstanceAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(BypassRLS, bypassRLS_);
      DARABONBA_PTR_FROM_JSON(CheckPolicy, checkPolicy_);
      DARABONBA_PTR_FROM_JSON(CreateDB, createDB_);
      DARABONBA_PTR_FROM_JSON(CreateRole, createRole_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DatabasePrivileges, databasePrivileges_);
      DARABONBA_PTR_FROM_JSON(PasswordExpireTime, passwordExpireTime_);
      DARABONBA_PTR_FROM_JSON(PrivExceeded, privExceeded_);
      DARABONBA_PTR_FROM_JSON(Replication, replication_);
      DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
    };
    DescribeAccountsResponseBodyAccountsDBInstanceAccount() = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount(const DescribeAccountsResponseBodyAccountsDBInstanceAccount &) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount(DescribeAccountsResponseBodyAccountsDBInstanceAccount &&) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountsDBInstanceAccount() = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount& operator=(const DescribeAccountsResponseBodyAccountsDBInstanceAccount &) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccount& operator=(DescribeAccountsResponseBodyAccountsDBInstanceAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && return this->accountName_ == nullptr && return this->accountStatus_ == nullptr && return this->accountType_ == nullptr && return this->bypassRLS_ == nullptr && return this->checkPolicy_ == nullptr
        && return this->createDB_ == nullptr && return this->createRole_ == nullptr && return this->DBInstanceId_ == nullptr && return this->databasePrivileges_ == nullptr && return this->passwordExpireTime_ == nullptr
        && return this->privExceeded_ == nullptr && return this->replication_ == nullptr && return this->validUntil_ == nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string accountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // bypassRLS Field Functions 
    bool hasBypassRLS() const { return this->bypassRLS_ != nullptr;};
    void deleteBypassRLS() { this->bypassRLS_ = nullptr;};
    inline string bypassRLS() const { DARABONBA_PTR_GET_DEFAULT(bypassRLS_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setBypassRLS(string bypassRLS) { DARABONBA_PTR_SET_VALUE(bypassRLS_, bypassRLS) };


    // checkPolicy Field Functions 
    bool hasCheckPolicy() const { return this->checkPolicy_ != nullptr;};
    void deleteCheckPolicy() { this->checkPolicy_ = nullptr;};
    inline bool checkPolicy() const { DARABONBA_PTR_GET_DEFAULT(checkPolicy_, false) };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setCheckPolicy(bool checkPolicy) { DARABONBA_PTR_SET_VALUE(checkPolicy_, checkPolicy) };


    // createDB Field Functions 
    bool hasCreateDB() const { return this->createDB_ != nullptr;};
    void deleteCreateDB() { this->createDB_ = nullptr;};
    inline string createDB() const { DARABONBA_PTR_GET_DEFAULT(createDB_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setCreateDB(string createDB) { DARABONBA_PTR_SET_VALUE(createDB_, createDB) };


    // createRole Field Functions 
    bool hasCreateRole() const { return this->createRole_ != nullptr;};
    void deleteCreateRole() { this->createRole_ = nullptr;};
    inline string createRole() const { DARABONBA_PTR_GET_DEFAULT(createRole_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setCreateRole(string createRole) { DARABONBA_PTR_SET_VALUE(createRole_, createRole) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // databasePrivileges Field Functions 
    bool hasDatabasePrivileges() const { return this->databasePrivileges_ != nullptr;};
    void deleteDatabasePrivileges() { this->databasePrivileges_ = nullptr;};
    inline const Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges & databasePrivileges() const { DARABONBA_PTR_GET_CONST(databasePrivileges_, Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges) };
    inline Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges databasePrivileges() { DARABONBA_PTR_GET(databasePrivileges_, Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges) };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setDatabasePrivileges(const Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges & databasePrivileges) { DARABONBA_PTR_SET_VALUE(databasePrivileges_, databasePrivileges) };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setDatabasePrivileges(Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges && databasePrivileges) { DARABONBA_PTR_SET_RVALUE(databasePrivileges_, databasePrivileges) };


    // passwordExpireTime Field Functions 
    bool hasPasswordExpireTime() const { return this->passwordExpireTime_ != nullptr;};
    void deletePasswordExpireTime() { this->passwordExpireTime_ = nullptr;};
    inline string passwordExpireTime() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireTime_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setPasswordExpireTime(string passwordExpireTime) { DARABONBA_PTR_SET_VALUE(passwordExpireTime_, passwordExpireTime) };


    // privExceeded Field Functions 
    bool hasPrivExceeded() const { return this->privExceeded_ != nullptr;};
    void deletePrivExceeded() { this->privExceeded_ = nullptr;};
    inline string privExceeded() const { DARABONBA_PTR_GET_DEFAULT(privExceeded_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setPrivExceeded(string privExceeded) { DARABONBA_PTR_SET_VALUE(privExceeded_, privExceeded) };


    // replication Field Functions 
    bool hasReplication() const { return this->replication_ != nullptr;};
    void deleteReplication() { this->replication_ = nullptr;};
    inline string replication() const { DARABONBA_PTR_GET_DEFAULT(replication_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setReplication(string replication) { DARABONBA_PTR_SET_VALUE(replication_, replication) };


    // validUntil Field Functions 
    bool hasValidUntil() const { return this->validUntil_ != nullptr;};
    void deleteValidUntil() { this->validUntil_ = nullptr;};
    inline string validUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccount& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


  protected:
    // The description of the account.
    std::shared_ptr<string> accountDescription_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The status of the account. Valid values:
    // 
    // *   **Unavailable**
    // *   **Available**
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The type of the account. Valid values:
    // 
    // *   **Normal**: standard account
    // *   **Super**: privileged account
    // *   **Sysadmin**: system admin account, which is supported only for instances running SQL Server
    std::shared_ptr<string> accountType_ = nullptr;
    // Indicates whether the account has the row-level security (RLS) permissions. Valid values:
    // 
    // *   **t**: The account has the RLS permissions.
    // *   **f**: The account does not have the RLS permissions.
    // 
    // >  This parameter is returned only for instances that run PostgreSQL.
    std::shared_ptr<string> bypassRLS_ = nullptr;
    // Indicates whether the password policy is applied.
    // 
    // >  This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<bool> checkPolicy_ = nullptr;
    // Indicates whether the account has the permissions to create databases. Valid values:
    // 
    // *   **t**: The account has the permissions to create databases.
    // *   **f**: The account does not have the permissions to create databases.
    // 
    // >  This parameter is returned only for instances that run PostgreSQL.
    std::shared_ptr<string> createDB_ = nullptr;
    // Indicates whether the account has the permissions to create roles. Valid values:
    // 
    // *   **t**: The account has the permissions to create roles.
    // *   **f**: The account does not have the permissions to create roles.
    // 
    // >  This parameter is returned only for instances that run PostgreSQL.
    std::shared_ptr<string> createRole_ = nullptr;
    // The ID of the instance to which the account belongs.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The details about the permissions that are granted to the account.
    std::shared_ptr<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges> databasePrivileges_ = nullptr;
    // The expiration time of the password.
    // 
    // >  This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<string> passwordExpireTime_ = nullptr;
    // Indicates whether the number of databases that are managed by the account exceeds the upper limit. Valid values:
    // 
    // *   **1**: The number of databases that are managed by the account exceeds the upper limit.
    // *   **0**: The number of databases that are managed by the account does not exceed the upper limit.
    std::shared_ptr<string> privExceeded_ = nullptr;
    // Indicates whether the account has the replication permissions. Valid values:
    // 
    // *   **t**: The account has the replication permissions.
    // *   **f**: The account does not have the replication permissions.
    // 
    // >  This parameter is returned only for instances that run PostgreSQL.
    std::shared_ptr<string> replication_ = nullptr;
    // The expiration time of the password. Valid values:
    // 
    // *   **infinity**: The password never expires.
    // *   **Empty**: The expiration time is not specified.
    // *   **Actual expiration time**: in the format of *yyyy-MM-dd*T*HH:mm:ss*Z in UTC. Example: 2022-10-01T00:00:00Z.
    // 
    // >  This parameter is returned only for instances that run PostgreSQL.
    std::shared_ptr<string> validUntil_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
