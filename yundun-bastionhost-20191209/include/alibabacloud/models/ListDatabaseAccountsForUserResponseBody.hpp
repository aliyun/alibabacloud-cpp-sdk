// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEACCOUNTSFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatabaseAccountsForUserResponseBodyDatabaseAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListDatabaseAccountsForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseAccountsForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseAccountsForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatabaseAccountsForUserResponseBody() = default ;
    ListDatabaseAccountsForUserResponseBody(const ListDatabaseAccountsForUserResponseBody &) = default ;
    ListDatabaseAccountsForUserResponseBody(ListDatabaseAccountsForUserResponseBody &&) = default ;
    ListDatabaseAccountsForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseAccountsForUserResponseBody() = default ;
    ListDatabaseAccountsForUserResponseBody& operator=(const ListDatabaseAccountsForUserResponseBody &) = default ;
    ListDatabaseAccountsForUserResponseBody& operator=(ListDatabaseAccountsForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseAccounts_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // databaseAccounts Field Functions 
    bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
    void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
    inline const vector<ListDatabaseAccountsForUserResponseBodyDatabaseAccounts> & databaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<ListDatabaseAccountsForUserResponseBodyDatabaseAccounts>) };
    inline vector<ListDatabaseAccountsForUserResponseBodyDatabaseAccounts> databaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<ListDatabaseAccountsForUserResponseBodyDatabaseAccounts>) };
    inline ListDatabaseAccountsForUserResponseBody& setDatabaseAccounts(const vector<ListDatabaseAccountsForUserResponseBodyDatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
    inline ListDatabaseAccountsForUserResponseBody& setDatabaseAccounts(vector<ListDatabaseAccountsForUserResponseBodyDatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatabaseAccountsForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatabaseAccountsForUserResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The database accounts returned.
    std::shared_ptr<vector<ListDatabaseAccountsForUserResponseBodyDatabaseAccounts>> databaseAccounts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of database accounts that are returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
