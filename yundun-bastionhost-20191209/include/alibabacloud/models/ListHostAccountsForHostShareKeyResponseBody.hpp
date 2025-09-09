// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORHOSTSHAREKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSFORHOSTSHAREKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHostAccountsForHostShareKeyResponseBodyHostAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostAccountsForHostShareKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsForHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsForHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostAccountsForHostShareKeyResponseBody() = default ;
    ListHostAccountsForHostShareKeyResponseBody(const ListHostAccountsForHostShareKeyResponseBody &) = default ;
    ListHostAccountsForHostShareKeyResponseBody(ListHostAccountsForHostShareKeyResponseBody &&) = default ;
    ListHostAccountsForHostShareKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsForHostShareKeyResponseBody() = default ;
    ListHostAccountsForHostShareKeyResponseBody& operator=(const ListHostAccountsForHostShareKeyResponseBody &) = default ;
    ListHostAccountsForHostShareKeyResponseBody& operator=(ListHostAccountsForHostShareKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostAccounts_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // hostAccounts Field Functions 
    bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
    void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
    inline const vector<ListHostAccountsForHostShareKeyResponseBodyHostAccounts> & hostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<ListHostAccountsForHostShareKeyResponseBodyHostAccounts>) };
    inline vector<ListHostAccountsForHostShareKeyResponseBodyHostAccounts> hostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<ListHostAccountsForHostShareKeyResponseBodyHostAccounts>) };
    inline ListHostAccountsForHostShareKeyResponseBody& setHostAccounts(const vector<ListHostAccountsForHostShareKeyResponseBodyHostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
    inline ListHostAccountsForHostShareKeyResponseBody& setHostAccounts(vector<ListHostAccountsForHostShareKeyResponseBodyHostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostAccountsForHostShareKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListHostAccountsForHostShareKeyResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the host accounts that are associated with the shared key.
    std::shared_ptr<vector<ListHostAccountsForHostShareKeyResponseBodyHostAccounts>> hostAccounts_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the host accounts that are associated with the shared key.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
