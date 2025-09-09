// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationDatabaseAccountsResponseBodyDatabaseAccounts.hpp>
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
    virtual bool empty() const override { this->databaseAccounts_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // databaseAccounts Field Functions 
    bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
    void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
    inline const vector<ListOperationDatabaseAccountsResponseBodyDatabaseAccounts> & databaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<ListOperationDatabaseAccountsResponseBodyDatabaseAccounts>) };
    inline vector<ListOperationDatabaseAccountsResponseBodyDatabaseAccounts> databaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<ListOperationDatabaseAccountsResponseBodyDatabaseAccounts>) };
    inline ListOperationDatabaseAccountsResponseBody& setDatabaseAccounts(const vector<ListOperationDatabaseAccountsResponseBodyDatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
    inline ListOperationDatabaseAccountsResponseBody& setDatabaseAccounts(vector<ListOperationDatabaseAccountsResponseBodyDatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationDatabaseAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOperationDatabaseAccountsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The database accounts returned.
    std::shared_ptr<vector<ListOperationDatabaseAccountsResponseBodyDatabaseAccounts>> databaseAccounts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
