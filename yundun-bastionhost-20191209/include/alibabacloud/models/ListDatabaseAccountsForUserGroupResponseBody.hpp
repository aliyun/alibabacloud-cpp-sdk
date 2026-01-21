// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSFORUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSFORUSERGROUPRESPONSEBODY_HPP_
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
  class ListDatabaseAccountsForUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseAccountsForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseAccountsForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatabaseAccountsForUserGroupResponseBody() = default ;
    ListDatabaseAccountsForUserGroupResponseBody(const ListDatabaseAccountsForUserGroupResponseBody &) = default ;
    ListDatabaseAccountsForUserGroupResponseBody(ListDatabaseAccountsForUserGroupResponseBody &&) = default ;
    ListDatabaseAccountsForUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseAccountsForUserGroupResponseBody() = default ;
    ListDatabaseAccountsForUserGroupResponseBody& operator=(const ListDatabaseAccountsForUserGroupResponseBody &) = default ;
    ListDatabaseAccountsForUserGroupResponseBody& operator=(ListDatabaseAccountsForUserGroupResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(IsAuthorized, isAuthorized_);
        DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      };
      friend void from_json(const Darabonba::Json& j, DatabaseAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
        DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(IsAuthorized, isAuthorized_);
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
      virtual bool empty() const override { return this->databaseAccountId_ == nullptr
        && this->databaseAccountName_ == nullptr && this->databaseId_ == nullptr && this->isAuthorized_ == nullptr && this->protocolName_ == nullptr; };
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


      // isAuthorized Field Functions 
      bool hasIsAuthorized() const { return this->isAuthorized_ != nullptr;};
      void deleteIsAuthorized() { this->isAuthorized_ = nullptr;};
      inline bool getIsAuthorized() const { DARABONBA_PTR_GET_DEFAULT(isAuthorized_, false) };
      inline DatabaseAccounts& setIsAuthorized(bool isAuthorized) { DARABONBA_PTR_SET_VALUE(isAuthorized_, isAuthorized) };


      // protocolName Field Functions 
      bool hasProtocolName() const { return this->protocolName_ != nullptr;};
      void deleteProtocolName() { this->protocolName_ = nullptr;};
      inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
      inline DatabaseAccounts& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    protected:
      // The ID of the database account.
      shared_ptr<string> databaseAccountId_ {};
      // The name of the database account.
      shared_ptr<string> databaseAccountName_ {};
      // The ID of the database to which the database account belongs.
      shared_ptr<string> databaseId_ {};
      // Indicates whether the user group is authorized to manage the database account. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isAuthorized_ {};
      // The protocol used by the database account. Valid values:
      // 
      // *   **MySQL**
      // *   **Oracle**
      // *   **PostgreSQL**
      // *   **SQLServer**
      shared_ptr<string> protocolName_ {};
    };

    virtual bool empty() const override { return this->databaseAccounts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // databaseAccounts Field Functions 
    bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
    void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
    inline const vector<ListDatabaseAccountsForUserGroupResponseBody::DatabaseAccounts> & getDatabaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<ListDatabaseAccountsForUserGroupResponseBody::DatabaseAccounts>) };
    inline vector<ListDatabaseAccountsForUserGroupResponseBody::DatabaseAccounts> getDatabaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<ListDatabaseAccountsForUserGroupResponseBody::DatabaseAccounts>) };
    inline ListDatabaseAccountsForUserGroupResponseBody& setDatabaseAccounts(const vector<ListDatabaseAccountsForUserGroupResponseBody::DatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
    inline ListDatabaseAccountsForUserGroupResponseBody& setDatabaseAccounts(vector<ListDatabaseAccountsForUserGroupResponseBody::DatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatabaseAccountsForUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatabaseAccountsForUserGroupResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The database accounts returned.
    shared_ptr<vector<ListDatabaseAccountsForUserGroupResponseBody::DatabaseAccounts>> databaseAccounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of database accounts returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
