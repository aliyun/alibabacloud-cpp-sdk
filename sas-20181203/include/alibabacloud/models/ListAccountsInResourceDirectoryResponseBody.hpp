// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSINRESOURCEDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSINRESOURCEDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccountsInResourceDirectoryResponseBodyAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAccountsInResourceDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsInResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsInResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccountsInResourceDirectoryResponseBody() = default ;
    ListAccountsInResourceDirectoryResponseBody(const ListAccountsInResourceDirectoryResponseBody &) = default ;
    ListAccountsInResourceDirectoryResponseBody(ListAccountsInResourceDirectoryResponseBody &&) = default ;
    ListAccountsInResourceDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsInResourceDirectoryResponseBody() = default ;
    ListAccountsInResourceDirectoryResponseBody& operator=(const ListAccountsInResourceDirectoryResponseBody &) = default ;
    ListAccountsInResourceDirectoryResponseBody& operator=(ListAccountsInResourceDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accounts_ != nullptr
        && this->requestId_ != nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<ListAccountsInResourceDirectoryResponseBodyAccounts> & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<ListAccountsInResourceDirectoryResponseBodyAccounts>) };
    inline vector<ListAccountsInResourceDirectoryResponseBodyAccounts> accounts() { DARABONBA_PTR_GET(accounts_, vector<ListAccountsInResourceDirectoryResponseBodyAccounts>) };
    inline ListAccountsInResourceDirectoryResponseBody& setAccounts(const vector<ListAccountsInResourceDirectoryResponseBodyAccounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline ListAccountsInResourceDirectoryResponseBody& setAccounts(vector<ListAccountsInResourceDirectoryResponseBodyAccounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccountsInResourceDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The members in the resource directory.
    std::shared_ptr<vector<ListAccountsInResourceDirectoryResponseBodyAccounts>> accounts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
