// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSRESPONSEBODYDATABASEACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSRESPONSEBODYDATABASEACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationDatabaseAccountsResponseBodyDatabaseAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_TO_JSON(LoginAttribute, loginAttribute_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_FROM_JSON(LoginAttribute, loginAttribute_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
    };
    ListOperationDatabaseAccountsResponseBodyDatabaseAccounts() = default ;
    ListOperationDatabaseAccountsResponseBodyDatabaseAccounts(const ListOperationDatabaseAccountsResponseBodyDatabaseAccounts &) = default ;
    ListOperationDatabaseAccountsResponseBodyDatabaseAccounts(ListOperationDatabaseAccountsResponseBodyDatabaseAccounts &&) = default ;
    ListOperationDatabaseAccountsResponseBodyDatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationDatabaseAccountsResponseBodyDatabaseAccounts() = default ;
    ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& operator=(const ListOperationDatabaseAccountsResponseBodyDatabaseAccounts &) = default ;
    ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& operator=(ListOperationDatabaseAccountsResponseBodyDatabaseAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBName_ == nullptr
        && return this->databaseAccountId_ == nullptr && return this->databaseAccountName_ == nullptr && return this->databaseId_ == nullptr && return this->hasPassword_ == nullptr && return this->loginAttribute_ == nullptr
        && return this->protocolName_ == nullptr; };
    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // databaseAccountId Field Functions 
    bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
    void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
    inline string databaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
    inline ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


    // databaseAccountName Field Functions 
    bool hasDatabaseAccountName() const { return this->databaseAccountName_ != nullptr;};
    void deleteDatabaseAccountName() { this->databaseAccountName_ = nullptr;};
    inline string databaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountName_, "") };
    inline ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& setDatabaseAccountName(string databaseAccountName) { DARABONBA_PTR_SET_VALUE(databaseAccountName_, databaseAccountName) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // hasPassword Field Functions 
    bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
    void deleteHasPassword() { this->hasPassword_ = nullptr;};
    inline string hasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, "") };
    inline ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& setHasPassword(string hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


    // loginAttribute Field Functions 
    bool hasLoginAttribute() const { return this->loginAttribute_ != nullptr;};
    void deleteLoginAttribute() { this->loginAttribute_ = nullptr;};
    inline string loginAttribute() const { DARABONBA_PTR_GET_DEFAULT(loginAttribute_, "") };
    inline ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& setLoginAttribute(string loginAttribute) { DARABONBA_PTR_SET_VALUE(loginAttribute_, loginAttribute) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListOperationDatabaseAccountsResponseBodyDatabaseAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


  protected:
    // The name of the PostgreSQL or Oracle database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The database account ID.
    std::shared_ptr<string> databaseAccountId_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> databaseAccountName_ = nullptr;
    // The database ID.
    std::shared_ptr<string> databaseId_ = nullptr;
    // Indicates whether a password is configured for the database host account.
    std::shared_ptr<string> hasPassword_ = nullptr;
    // The logon attribute. One of the following values is returned if the database engine is Oracle:
    // 
    // *   **SERVICENAME**
    // *   **SID**
    std::shared_ptr<string> loginAttribute_ = nullptr;
    // The protocol that is used by the database account.
    std::shared_ptr<string> protocolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
