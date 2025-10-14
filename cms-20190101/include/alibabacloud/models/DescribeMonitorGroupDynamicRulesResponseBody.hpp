// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitorGroupDynamicRulesResponseBodyResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupDynamicRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupDynamicRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupDynamicRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitorGroupDynamicRulesResponseBody() = default ;
    DescribeMonitorGroupDynamicRulesResponseBody(const DescribeMonitorGroupDynamicRulesResponseBody &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBody(DescribeMonitorGroupDynamicRulesResponseBody &&) = default ;
    DescribeMonitorGroupDynamicRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupDynamicRulesResponseBody() = default ;
    DescribeMonitorGroupDynamicRulesResponseBody& operator=(const DescribeMonitorGroupDynamicRulesResponseBody &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBody& operator=(DescribeMonitorGroupDynamicRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->resource_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const DescribeMonitorGroupDynamicRulesResponseBodyResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, DescribeMonitorGroupDynamicRulesResponseBodyResource) };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResource resource() { DARABONBA_PTR_GET(resource_, DescribeMonitorGroupDynamicRulesResponseBodyResource) };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setResource(const DescribeMonitorGroupDynamicRulesResponseBodyResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setResource(DescribeMonitorGroupDynamicRulesResponseBodyResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitorGroupDynamicRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resources that are associated with the application group.
    std::shared_ptr<DescribeMonitorGroupDynamicRulesResponseBodyResource> resource_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
