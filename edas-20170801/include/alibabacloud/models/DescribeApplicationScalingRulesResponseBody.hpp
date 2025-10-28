// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyAppScalingRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppScalingRules, appScalingRules_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppScalingRules, appScalingRules_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApplicationScalingRulesResponseBody() = default ;
    DescribeApplicationScalingRulesResponseBody(const DescribeApplicationScalingRulesResponseBody &) = default ;
    DescribeApplicationScalingRulesResponseBody(DescribeApplicationScalingRulesResponseBody &&) = default ;
    DescribeApplicationScalingRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBody() = default ;
    DescribeApplicationScalingRulesResponseBody& operator=(const DescribeApplicationScalingRulesResponseBody &) = default ;
    DescribeApplicationScalingRulesResponseBody& operator=(DescribeApplicationScalingRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appScalingRules_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // appScalingRules Field Functions 
    bool hasAppScalingRules() const { return this->appScalingRules_ != nullptr;};
    void deleteAppScalingRules() { this->appScalingRules_ = nullptr;};
    inline const DescribeApplicationScalingRulesResponseBodyAppScalingRules & appScalingRules() const { DARABONBA_PTR_GET_CONST(appScalingRules_, DescribeApplicationScalingRulesResponseBodyAppScalingRules) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRules appScalingRules() { DARABONBA_PTR_GET(appScalingRules_, DescribeApplicationScalingRulesResponseBodyAppScalingRules) };
    inline DescribeApplicationScalingRulesResponseBody& setAppScalingRules(const DescribeApplicationScalingRulesResponseBodyAppScalingRules & appScalingRules) { DARABONBA_PTR_SET_VALUE(appScalingRules_, appScalingRules) };
    inline DescribeApplicationScalingRulesResponseBody& setAppScalingRules(DescribeApplicationScalingRulesResponseBodyAppScalingRules && appScalingRules) { DARABONBA_PTR_SET_RVALUE(appScalingRules_, appScalingRules) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeApplicationScalingRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationScalingRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationScalingRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The auto scaling policies of the application.
    std::shared_ptr<DescribeApplicationScalingRulesResponseBodyAppScalingRules> appScalingRules_ = nullptr;
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
