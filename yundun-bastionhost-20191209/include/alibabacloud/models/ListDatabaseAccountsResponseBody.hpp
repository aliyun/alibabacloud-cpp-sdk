// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListDatabaseAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatabaseAccountsResponseBody() = default ;
    ListDatabaseAccountsResponseBody(const ListDatabaseAccountsResponseBody &) = default ;
    ListDatabaseAccountsResponseBody(ListDatabaseAccountsResponseBody &&) = default ;
    ListDatabaseAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseAccountsResponseBody() = default ;
    ListDatabaseAccountsResponseBody& operator=(const ListDatabaseAccountsResponseBody &) = default ;
    ListDatabaseAccountsResponseBody& operator=(ListDatabaseAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatabaseAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatabaseAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
        DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_TO_JSON(DatabaseSchema, databaseSchema_);
        DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
      };
      friend void from_json(const Darabonba::Json& j, DatabaseAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
        DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(DatabaseSchema, databaseSchema_);
        DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
      };
      DatabaseAccounts() = default ;
      DatabaseAccounts(const DatabaseAccounts &) = default ;
      DatabaseAccounts(DatabaseAccounts &&) = default ;
      DatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatabaseAccounts() = default ;
      DatabaseAccounts& operator=(const DatabaseAccounts &) = default ;
      DatabaseAccounts& operator=(DatabaseAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseAccountId_ == nullptr
        && this->databaseAccountName_ == nullptr && this->databaseId_ == nullptr && this->databaseSchema_ == nullptr && this->hasPassword_ == nullptr; };
      // databaseAccountId Field Functions 
      bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
      void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
      inline string getDatabaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
      inline DatabaseAccounts& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


      // databaseAccountName Field Functions 
      bool hasDatabaseAccountName() const { return this->databaseAccountName_ != nullptr;};
      void deleteDatabaseAccountName() { this->databaseAccountName_ = nullptr;};
      inline string getDatabaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountName_, "") };
      inline DatabaseAccounts& setDatabaseAccountName(string databaseAccountName) { DARABONBA_PTR_SET_VALUE(databaseAccountName_, databaseAccountName) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline DatabaseAccounts& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


      // databaseSchema Field Functions 
      bool hasDatabaseSchema() const { return this->databaseSchema_ != nullptr;};
      void deleteDatabaseSchema() { this->databaseSchema_ = nullptr;};
      inline string getDatabaseSchema() const { DARABONBA_PTR_GET_DEFAULT(databaseSchema_, "") };
      inline DatabaseAccounts& setDatabaseSchema(string databaseSchema) { DARABONBA_PTR_SET_VALUE(databaseSchema_, databaseSchema) };


      // hasPassword Field Functions 
      bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
      void deleteHasPassword() { this->hasPassword_ = nullptr;};
      inline string getHasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, "") };
      inline DatabaseAccounts& setHasPassword(string hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


    protected:
      // The database account ID.
      shared_ptr<string> databaseAccountId_ {};
      // The name of the database account.
      shared_ptr<string> databaseAccountName_ {};
      // The database ID.
      shared_ptr<string> databaseId_ {};
      // The name of the database. A value is returned for this parameter if the engine of the database with the specified database ID is PostgreSQL or Oracle.
      shared_ptr<string> databaseSchema_ {};
      // Indicates whether the database account has a password. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> hasPassword_ {};
    };

    virtual bool empty() const override { return this->databaseAccounts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // databaseAccounts Field Functions 
    bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
    void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
    inline const vector<ListDatabaseAccountsResponseBody::DatabaseAccounts> & getDatabaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<ListDatabaseAccountsResponseBody::DatabaseAccounts>) };
    inline vector<ListDatabaseAccountsResponseBody::DatabaseAccounts> getDatabaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<ListDatabaseAccountsResponseBody::DatabaseAccounts>) };
    inline ListDatabaseAccountsResponseBody& setDatabaseAccounts(const vector<ListDatabaseAccountsResponseBody::DatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
    inline ListDatabaseAccountsResponseBody& setDatabaseAccounts(vector<ListDatabaseAccountsResponseBody::DatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatabaseAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatabaseAccountsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned database accounts.
    shared_ptr<vector<ListDatabaseAccountsResponseBody::DatabaseAccounts>> databaseAccounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of database accounts returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
