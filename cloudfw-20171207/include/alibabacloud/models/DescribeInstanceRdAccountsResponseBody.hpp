// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERDACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERDACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceRdAccountsResponseBodyAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRdAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRdAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRdAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceRdAccountsResponseBody() = default ;
    DescribeInstanceRdAccountsResponseBody(const DescribeInstanceRdAccountsResponseBody &) = default ;
    DescribeInstanceRdAccountsResponseBody(DescribeInstanceRdAccountsResponseBody &&) = default ;
    DescribeInstanceRdAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRdAccountsResponseBody() = default ;
    DescribeInstanceRdAccountsResponseBody& operator=(const DescribeInstanceRdAccountsResponseBody &) = default ;
    DescribeInstanceRdAccountsResponseBody& operator=(DescribeInstanceRdAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accounts_ == nullptr
        && return this->requestId_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<DescribeInstanceRdAccountsResponseBodyAccounts> & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<DescribeInstanceRdAccountsResponseBodyAccounts>) };
    inline vector<DescribeInstanceRdAccountsResponseBodyAccounts> accounts() { DARABONBA_PTR_GET(accounts_, vector<DescribeInstanceRdAccountsResponseBodyAccounts>) };
    inline DescribeInstanceRdAccountsResponseBody& setAccounts(const vector<DescribeInstanceRdAccountsResponseBodyAccounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeInstanceRdAccountsResponseBody& setAccounts(vector<DescribeInstanceRdAccountsResponseBodyAccounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceRdAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeInstanceRdAccountsResponseBodyAccounts>> accounts_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
