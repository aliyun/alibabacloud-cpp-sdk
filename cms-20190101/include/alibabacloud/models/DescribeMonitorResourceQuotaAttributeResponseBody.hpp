// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorResourceQuotaAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorResourceQuotaAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceQuota, resourceQuota_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorResourceQuotaAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceQuota, resourceQuota_);
    };
    DescribeMonitorResourceQuotaAttributeResponseBody() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody(const DescribeMonitorResourceQuotaAttributeResponseBody &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody(DescribeMonitorResourceQuotaAttributeResponseBody &&) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorResourceQuotaAttributeResponseBody() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody& operator=(const DescribeMonitorResourceQuotaAttributeResponseBody &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody& operator=(DescribeMonitorResourceQuotaAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->resourceQuota_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceQuota Field Functions 
    bool hasResourceQuota() const { return this->resourceQuota_ != nullptr;};
    void deleteResourceQuota() { this->resourceQuota_ = nullptr;};
    inline const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota & resourceQuota() const { DARABONBA_PTR_GET_CONST(resourceQuota_, DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota) };
    inline DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota resourceQuota() { DARABONBA_PTR_GET(resourceQuota_, DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota) };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setResourceQuota(const DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota & resourceQuota) { DARABONBA_PTR_SET_VALUE(resourceQuota_, resourceQuota) };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setResourceQuota(DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota && resourceQuota) { DARABONBA_PTR_SET_RVALUE(resourceQuota_, resourceQuota) };


  protected:
    // The status code.
    // 
    // > The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details about the resource quotas of CloudMonitor.
    std::shared_ptr<DescribeMonitorResourceQuotaAttributeResponseBodyResourceQuota> resourceQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
