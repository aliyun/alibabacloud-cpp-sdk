// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSRESPONSEBODY_HPP_
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
  class ListOperationDatabaseAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationDatabaseAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationDatabaseAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOperationDatabaseAccountsResponseBody() = default ;
    ListOperationDatabaseAccountsResponseBody(const ListOperationDatabaseAccountsResponseBody &) = default ;
    ListOperationDatabaseAccountsResponseBody(ListOperationDatabaseAccountsResponseBody &&) = default ;
    ListOperationDatabaseAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationDatabaseAccountsResponseBody() = default ;
    ListOperationDatabaseAccountsResponseBody& operator=(const ListOperationDatabaseAccountsResponseBody &) = default ;
    ListOperationDatabaseAccountsResponseBody& operator=(ListOperationDatabaseAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatabaseAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatabaseAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
        DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
        DARABONBA_PTR_TO_JSON(LoginAttribute, loginAttribute_);
        DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      };
      friend void from_json(const Darabonba::Json& j, DatabaseAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
        DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
        DARABONBA_PTR_FROM_JSON(LoginAttribute, loginAttribute_);
        DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
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
      virtual bool empty() const override { return this->DBName_ == nullptr
        && this->databaseAccountId_ == nullptr && this->databaseAccountName_ == nullptr && this->databaseId_ == nullptr && this->hasPassword_ == nullptr && this->loginAttribute_ == nullptr
        && this->protocolName_ == nullptr; };
      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline DatabaseAccounts& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


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


      // hasPassword Field Functions 
      bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
      void deleteHasPassword() { this->hasPassword_ = nullptr;};
      inline string getHasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, "") };
      inline DatabaseAccounts& setHasPassword(string hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


      // loginAttribute Field Functions 
      bool hasLoginAttribute() const { return this->loginAttribute_ != nullptr;};
      void deleteLoginAttribute() { this->loginAttribute_ = nullptr;};
      inline string getLoginAttribute() const { DARABONBA_PTR_GET_DEFAULT(loginAttribute_, "") };
      inline DatabaseAccounts& setLoginAttribute(string loginAttribute) { DARABONBA_PTR_SET_VALUE(loginAttribute_, loginAttribute) };


      // protocolName Field Functions 
      bool hasProtocolName() const { return this->protocolName_ != nullptr;};
      void deleteProtocolName() { this->protocolName_ = nullptr;};
      inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
      inline DatabaseAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    protected:
      // The name of the PostgreSQL or Oracle database.
      shared_ptr<string> DBName_ {};
      // The database account ID.
      shared_ptr<string> databaseAccountId_ {};
      // The name of the database account.
      shared_ptr<string> databaseAccountName_ {};
      // The database ID.
      shared_ptr<string> databaseId_ {};
      // Indicates whether a password is configured for the database host account.
      shared_ptr<string> hasPassword_ {};
      // The logon attribute. One of the following values is returned if the database engine is Oracle:
      // 
      // *   **SERVICENAME**
      // *   **SID**
      shared_ptr<string> loginAttribute_ {};
      // The protocol that is used by the database account.
      shared_ptr<string> protocolName_ {};
    };

    virtual bool empty() const override { return this->databaseAccounts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // databaseAccounts Field Functions 
    bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
    void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
    inline const vector<ListOperationDatabaseAccountsResponseBody::DatabaseAccounts> & getDatabaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<ListOperationDatabaseAccountsResponseBody::DatabaseAccounts>) };
    inline vector<ListOperationDatabaseAccountsResponseBody::DatabaseAccounts> getDatabaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<ListOperationDatabaseAccountsResponseBody::DatabaseAccounts>) };
    inline ListOperationDatabaseAccountsResponseBody& setDatabaseAccounts(const vector<ListOperationDatabaseAccountsResponseBody::DatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
    inline ListOperationDatabaseAccountsResponseBody& setDatabaseAccounts(vector<ListOperationDatabaseAccountsResponseBody::DatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationDatabaseAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOperationDatabaseAccountsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The database accounts returned.
    shared_ptr<vector<ListOperationDatabaseAccountsResponseBody::DatabaseAccounts>> databaseAccounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
