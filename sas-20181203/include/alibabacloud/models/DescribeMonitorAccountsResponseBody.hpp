// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorAccountsResponseBodyAccountIdInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMonitorAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIdInfos, accountIdInfos_);
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIdInfos, accountIdInfos_);
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMonitorAccountsResponseBody() = default ;
    DescribeMonitorAccountsResponseBody(const DescribeMonitorAccountsResponseBody &) = default ;
    DescribeMonitorAccountsResponseBody(DescribeMonitorAccountsResponseBody &&) = default ;
    DescribeMonitorAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorAccountsResponseBody() = default ;
    DescribeMonitorAccountsResponseBody& operator=(const DescribeMonitorAccountsResponseBody &) = default ;
    DescribeMonitorAccountsResponseBody& operator=(DescribeMonitorAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIdInfos_ != nullptr
        && this->accountIds_ != nullptr && this->requestId_ != nullptr; };
    // accountIdInfos Field Functions 
    bool hasAccountIdInfos() const { return this->accountIdInfos_ != nullptr;};
    void deleteAccountIdInfos() { this->accountIdInfos_ = nullptr;};
    inline const vector<DescribeMonitorAccountsResponseBodyAccountIdInfos> & accountIdInfos() const { DARABONBA_PTR_GET_CONST(accountIdInfos_, vector<DescribeMonitorAccountsResponseBodyAccountIdInfos>) };
    inline vector<DescribeMonitorAccountsResponseBodyAccountIdInfos> accountIdInfos() { DARABONBA_PTR_GET(accountIdInfos_, vector<DescribeMonitorAccountsResponseBodyAccountIdInfos>) };
    inline DescribeMonitorAccountsResponseBody& setAccountIdInfos(const vector<DescribeMonitorAccountsResponseBodyAccountIdInfos> & accountIdInfos) { DARABONBA_PTR_SET_VALUE(accountIdInfos_, accountIdInfos) };
    inline DescribeMonitorAccountsResponseBody& setAccountIdInfos(vector<DescribeMonitorAccountsResponseBodyAccountIdInfos> && accountIdInfos) { DARABONBA_PTR_SET_RVALUE(accountIdInfos_, accountIdInfos) };


    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & accountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> accountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline DescribeMonitorAccountsResponseBody& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline DescribeMonitorAccountsResponseBody& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeMonitorAccountsResponseBodyAccountIdInfos>> accountIdInfos_ = nullptr;
    // The IDs of the members.
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
