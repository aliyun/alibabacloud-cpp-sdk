// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSFORUSERRESPONSEBODYDATABASEACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSFORUSERRESPONSEBODYDATABASEACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListDatabaseAccountsForUserResponseBodyDatabaseAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseAccountsForUserResponseBodyDatabaseAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(IsAuthorized, isAuthorized_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseAccountsForUserResponseBodyDatabaseAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(IsAuthorized, isAuthorized_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
    };
    ListDatabaseAccountsForUserResponseBodyDatabaseAccounts() = default ;
    ListDatabaseAccountsForUserResponseBodyDatabaseAccounts(const ListDatabaseAccountsForUserResponseBodyDatabaseAccounts &) = default ;
    ListDatabaseAccountsForUserResponseBodyDatabaseAccounts(ListDatabaseAccountsForUserResponseBodyDatabaseAccounts &&) = default ;
    ListDatabaseAccountsForUserResponseBodyDatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseAccountsForUserResponseBodyDatabaseAccounts() = default ;
    ListDatabaseAccountsForUserResponseBodyDatabaseAccounts& operator=(const ListDatabaseAccountsForUserResponseBodyDatabaseAccounts &) = default ;
    ListDatabaseAccountsForUserResponseBodyDatabaseAccounts& operator=(ListDatabaseAccountsForUserResponseBodyDatabaseAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseAccountId_ != nullptr
        && this->databaseAccountName_ != nullptr && this->databaseId_ != nullptr && this->isAuthorized_ != nullptr && this->protocolName_ != nullptr; };
    // databaseAccountId Field Functions 
    bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
    void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
    inline string databaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
    inline ListDatabaseAccountsForUserResponseBodyDatabaseAccounts& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


    // databaseAccountName Field Functions 
    bool hasDatabaseAccountName() const { return this->databaseAccountName_ != nullptr;};
    void deleteDatabaseAccountName() { this->databaseAccountName_ = nullptr;};
    inline string databaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountName_, "") };
    inline ListDatabaseAccountsForUserResponseBodyDatabaseAccounts& setDatabaseAccountName(string databaseAccountName) { DARABONBA_PTR_SET_VALUE(databaseAccountName_, databaseAccountName) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListDatabaseAccountsForUserResponseBodyDatabaseAccounts& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // isAuthorized Field Functions 
    bool hasIsAuthorized() const { return this->isAuthorized_ != nullptr;};
    void deleteIsAuthorized() { this->isAuthorized_ = nullptr;};
    inline bool isAuthorized() const { DARABONBA_PTR_GET_DEFAULT(isAuthorized_, false) };
    inline ListDatabaseAccountsForUserResponseBodyDatabaseAccounts& setIsAuthorized(bool isAuthorized) { DARABONBA_PTR_SET_VALUE(isAuthorized_, isAuthorized) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListDatabaseAccountsForUserResponseBodyDatabaseAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


  protected:
    // The database account ID.
    std::shared_ptr<string> databaseAccountId_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> databaseAccountName_ = nullptr;
    // The ID of the database to which the database account belongs.
    std::shared_ptr<string> databaseId_ = nullptr;
    // Indicates whether the user is authorized to manage the database account. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isAuthorized_ = nullptr;
    // The protocol used by the database account. Valid values:
    // 
    // *   **MySQL**
    // *   **Oracle**
    // *   **PostgreSQL**
    // *   **SQLServer**
    std::shared_ptr<string> protocolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
