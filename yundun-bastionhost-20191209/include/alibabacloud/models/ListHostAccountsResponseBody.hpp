// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHostAccountsResponseBodyHostAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostAccountsResponseBody() = default ;
    ListHostAccountsResponseBody(const ListHostAccountsResponseBody &) = default ;
    ListHostAccountsResponseBody(ListHostAccountsResponseBody &&) = default ;
    ListHostAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsResponseBody() = default ;
    ListHostAccountsResponseBody& operator=(const ListHostAccountsResponseBody &) = default ;
    ListHostAccountsResponseBody& operator=(ListHostAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccounts_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // hostAccounts Field Functions 
    bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
    void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
    inline const vector<ListHostAccountsResponseBodyHostAccounts> & hostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<ListHostAccountsResponseBodyHostAccounts>) };
    inline vector<ListHostAccountsResponseBodyHostAccounts> hostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<ListHostAccountsResponseBodyHostAccounts>) };
    inline ListHostAccountsResponseBody& setHostAccounts(const vector<ListHostAccountsResponseBodyHostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
    inline ListHostAccountsResponseBody& setHostAccounts(vector<ListHostAccountsResponseBodyHostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHostAccountsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the queried host accounts.
    std::shared_ptr<vector<ListHostAccountsResponseBodyHostAccounts>> hostAccounts_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of host accounts that are queried.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
