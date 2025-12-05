// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTKMSSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTKMSSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeAccountKmsStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountKmsStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountKmsStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountKmsStatusResponseBody() = default ;
    DescribeAccountKmsStatusResponseBody(const DescribeAccountKmsStatusResponseBody &) = default ;
    DescribeAccountKmsStatusResponseBody(DescribeAccountKmsStatusResponseBody &&) = default ;
    DescribeAccountKmsStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountKmsStatusResponseBody() = default ;
    DescribeAccountKmsStatusResponseBody& operator=(const DescribeAccountKmsStatusResponseBody &) = default ;
    DescribeAccountKmsStatusResponseBody& operator=(DescribeAccountKmsStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeAccountKmsStatusResponseBody& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountKmsStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of KMS within your Alibaba cloud account. Valid values:
    // 
    // *   Enabled: KMS is enabled.
    // 
    // *   NotEnabled: KMS is disabled.
    // 
    // *   InDebt: Your account is overdue, and KMS stops providing services.
    // 
    // > If your Alibaba Cloud account is overdue, top up your account at the earliest opportunity to avoid impacts on your services.
    // 
    // *   Suspended: KMS is suspended.
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
