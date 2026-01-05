// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTDELEGATEDSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTDELEGATEDSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAccountDelegatedStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountDelegatedStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DelegatedStatus, delegatedStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountDelegatedStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DelegatedStatus, delegatedStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountDelegatedStatusResponseBody() = default ;
    DescribeAccountDelegatedStatusResponseBody(const DescribeAccountDelegatedStatusResponseBody &) = default ;
    DescribeAccountDelegatedStatusResponseBody(DescribeAccountDelegatedStatusResponseBody &&) = default ;
    DescribeAccountDelegatedStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountDelegatedStatusResponseBody() = default ;
    DescribeAccountDelegatedStatusResponseBody& operator=(const DescribeAccountDelegatedStatusResponseBody &) = default ;
    DescribeAccountDelegatedStatusResponseBody& operator=(DescribeAccountDelegatedStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->delegatedStatus_ == nullptr && this->requestId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeAccountDelegatedStatusResponseBody& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountDelegatedStatusResponseBody& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // delegatedStatus Field Functions 
    bool hasDelegatedStatus() const { return this->delegatedStatus_ != nullptr;};
    void deleteDelegatedStatus() { this->delegatedStatus_ = nullptr;};
    inline bool getDelegatedStatus() const { DARABONBA_PTR_GET_DEFAULT(delegatedStatus_, false) };
    inline DescribeAccountDelegatedStatusResponseBody& setDelegatedStatus(bool delegatedStatus) { DARABONBA_PTR_SET_VALUE(delegatedStatus_, delegatedStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountDelegatedStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the Alibaba Cloud account.
    shared_ptr<string> accountId_ {};
    // The name of the Alibaba Cloud account. This parameter is returned only if the account is the delegated administrator account.
    shared_ptr<string> accountName_ {};
    // Indicates whether the Alibaba Cloud account is the delegated administrator account of the WAF instance.
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> delegatedStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
