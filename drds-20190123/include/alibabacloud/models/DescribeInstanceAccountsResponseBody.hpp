// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceAccountsResponseBodyInstanceAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceAccounts, instanceAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceAccounts, instanceAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeInstanceAccountsResponseBody() = default ;
    DescribeInstanceAccountsResponseBody(const DescribeInstanceAccountsResponseBody &) = default ;
    DescribeInstanceAccountsResponseBody(DescribeInstanceAccountsResponseBody &&) = default ;
    DescribeInstanceAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAccountsResponseBody() = default ;
    DescribeInstanceAccountsResponseBody& operator=(const DescribeInstanceAccountsResponseBody &) = default ;
    DescribeInstanceAccountsResponseBody& operator=(DescribeInstanceAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceAccounts_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // instanceAccounts Field Functions 
    bool hasInstanceAccounts() const { return this->instanceAccounts_ != nullptr;};
    void deleteInstanceAccounts() { this->instanceAccounts_ = nullptr;};
    inline const DescribeInstanceAccountsResponseBodyInstanceAccounts & instanceAccounts() const { DARABONBA_PTR_GET_CONST(instanceAccounts_, DescribeInstanceAccountsResponseBodyInstanceAccounts) };
    inline DescribeInstanceAccountsResponseBodyInstanceAccounts instanceAccounts() { DARABONBA_PTR_GET(instanceAccounts_, DescribeInstanceAccountsResponseBodyInstanceAccounts) };
    inline DescribeInstanceAccountsResponseBody& setInstanceAccounts(const DescribeInstanceAccountsResponseBodyInstanceAccounts & instanceAccounts) { DARABONBA_PTR_SET_VALUE(instanceAccounts_, instanceAccounts) };
    inline DescribeInstanceAccountsResponseBody& setInstanceAccounts(DescribeInstanceAccountsResponseBodyInstanceAccounts && instanceAccounts) { DARABONBA_PTR_SET_RVALUE(instanceAccounts_, instanceAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInstanceAccountsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates the information about the instance accounts.
    std::shared_ptr<DescribeInstanceAccountsResponseBodyInstanceAccounts> instanceAccounts_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
