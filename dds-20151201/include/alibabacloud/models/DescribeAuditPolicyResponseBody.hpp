// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeAuditPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogAuditStatus, logAuditStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogAuditStatus, logAuditStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAuditPolicyResponseBody() = default ;
    DescribeAuditPolicyResponseBody(const DescribeAuditPolicyResponseBody &) = default ;
    DescribeAuditPolicyResponseBody(DescribeAuditPolicyResponseBody &&) = default ;
    DescribeAuditPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditPolicyResponseBody() = default ;
    DescribeAuditPolicyResponseBody& operator=(const DescribeAuditPolicyResponseBody &) = default ;
    DescribeAuditPolicyResponseBody& operator=(DescribeAuditPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logAuditStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // logAuditStatus Field Functions 
    bool hasLogAuditStatus() const { return this->logAuditStatus_ != nullptr;};
    void deleteLogAuditStatus() { this->logAuditStatus_ = nullptr;};
    inline string getLogAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(logAuditStatus_, "") };
    inline DescribeAuditPolicyResponseBody& setLogAuditStatus(string logAuditStatus) { DARABONBA_PTR_SET_VALUE(logAuditStatus_, logAuditStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuditPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the log audit feature is enabled. Valid values:
    // 
    // *   Enable
    // *   Disabled
    // 
    // Default value: Disabled.
    shared_ptr<string> logAuditStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
