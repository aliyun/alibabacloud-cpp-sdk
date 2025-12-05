// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSRESPONSEBODYDATABASEACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSRESPONSEBODYDATABASEACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListDatabaseAccountsResponseBodyDatabaseAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseAccountsResponseBodyDatabaseAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseAccountsResponseBodyDatabaseAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
    };
    ListDatabaseAccountsResponseBodyDatabaseAccounts() = default ;
    ListDatabaseAccountsResponseBodyDatabaseAccounts(const ListDatabaseAccountsResponseBodyDatabaseAccounts &) = default ;
    ListDatabaseAccountsResponseBodyDatabaseAccounts(ListDatabaseAccountsResponseBodyDatabaseAccounts &&) = default ;
    ListDatabaseAccountsResponseBodyDatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseAccountsResponseBodyDatabaseAccounts() = default ;
    ListDatabaseAccountsResponseBodyDatabaseAccounts& operator=(const ListDatabaseAccountsResponseBodyDatabaseAccounts &) = default ;
    ListDatabaseAccountsResponseBodyDatabaseAccounts& operator=(ListDatabaseAccountsResponseBodyDatabaseAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAccountId_ == nullptr
        && return this->databaseAccountName_ == nullptr && return this->databaseId_ == nullptr && return this->databaseSchema_ == nullptr && return this->hasPassword_ == nullptr; };
    // databaseAccountId Field Functions 
    bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
    void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
    inline string databaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
    inline ListDatabaseAccountsResponseBodyDatabaseAccounts& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


    // databaseAccountName Field Functions 
    bool hasDatabaseAccountName() const { return this->databaseAccountName_ != nullptr;};
    void deleteDatabaseAccountName() { this->databaseAccountName_ = nullptr;};
    inline string databaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountName_, "") };
    inline ListDatabaseAccountsResponseBodyDatabaseAccounts& setDatabaseAccountName(string databaseAccountName) { DARABONBA_PTR_SET_VALUE(databaseAccountName_, databaseAccountName) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListDatabaseAccountsResponseBodyDatabaseAccounts& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // databaseSchema Field Functions 
    bool hasDatabaseSchema() const { return this->databaseSchema_ != nullptr;};
    void deleteDatabaseSchema() { this->databaseSchema_ = nullptr;};
    inline string databaseSchema() const { DARABONBA_PTR_GET_DEFAULT(databaseSchema_, "") };
    inline ListDatabaseAccountsResponseBodyDatabaseAccounts& setDatabaseSchema(string databaseSchema) { DARABONBA_PTR_SET_VALUE(databaseSchema_, databaseSchema) };


    // hasPassword Field Functions 
    bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
    void deleteHasPassword() { this->hasPassword_ = nullptr;};
    inline string hasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, "") };
    inline ListDatabaseAccountsResponseBodyDatabaseAccounts& setHasPassword(string hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


  protected:
    // The database account ID.
    std::shared_ptr<string> databaseAccountId_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> databaseAccountName_ = nullptr;
    // The database ID.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The name of the database. A value is returned for this parameter if the engine of the database with the specified database ID is PostgreSQL or Oracle.
    std::shared_ptr<string> databaseSchema_ = nullptr;
    // Indicates whether the database account has a password. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> hasPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
