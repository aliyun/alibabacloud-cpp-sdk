// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllAccountsResponseBodyAccountList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAllAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountList, accountList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountList, accountList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAllAccountsResponseBody() = default ;
    DescribeAllAccountsResponseBody(const DescribeAllAccountsResponseBody &) = default ;
    DescribeAllAccountsResponseBody(DescribeAllAccountsResponseBody &&) = default ;
    DescribeAllAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllAccountsResponseBody() = default ;
    DescribeAllAccountsResponseBody& operator=(const DescribeAllAccountsResponseBody &) = default ;
    DescribeAllAccountsResponseBody& operator=(DescribeAllAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountList_ != nullptr
        && this->requestId_ != nullptr; };
    // accountList Field Functions 
    bool hasAccountList() const { return this->accountList_ != nullptr;};
    void deleteAccountList() { this->accountList_ = nullptr;};
    inline const vector<DescribeAllAccountsResponseBodyAccountList> & accountList() const { DARABONBA_PTR_GET_CONST(accountList_, vector<DescribeAllAccountsResponseBodyAccountList>) };
    inline vector<DescribeAllAccountsResponseBodyAccountList> accountList() { DARABONBA_PTR_GET(accountList_, vector<DescribeAllAccountsResponseBodyAccountList>) };
    inline DescribeAllAccountsResponseBody& setAccountList(const vector<DescribeAllAccountsResponseBodyAccountList> & accountList) { DARABONBA_PTR_SET_VALUE(accountList_, accountList) };
    inline DescribeAllAccountsResponseBody& setAccountList(vector<DescribeAllAccountsResponseBodyAccountList> && accountList) { DARABONBA_PTR_SET_RVALUE(accountList_, accountList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried database accounts.
    std::shared_ptr<vector<DescribeAllAccountsResponseBodyAccountList>> accountList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
