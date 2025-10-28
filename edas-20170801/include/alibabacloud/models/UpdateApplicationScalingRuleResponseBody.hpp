// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApplicationScalingRuleResponseBodyAppScalingRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationScalingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppScalingRule, appScalingRule_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppScalingRule, appScalingRule_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApplicationScalingRuleResponseBody() = default ;
    UpdateApplicationScalingRuleResponseBody(const UpdateApplicationScalingRuleResponseBody &) = default ;
    UpdateApplicationScalingRuleResponseBody(UpdateApplicationScalingRuleResponseBody &&) = default ;
    UpdateApplicationScalingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleResponseBody() = default ;
    UpdateApplicationScalingRuleResponseBody& operator=(const UpdateApplicationScalingRuleResponseBody &) = default ;
    UpdateApplicationScalingRuleResponseBody& operator=(UpdateApplicationScalingRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appScalingRule_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // appScalingRule Field Functions 
    bool hasAppScalingRule() const { return this->appScalingRule_ != nullptr;};
    void deleteAppScalingRule() { this->appScalingRule_ = nullptr;};
    inline const UpdateApplicationScalingRuleResponseBodyAppScalingRule & appScalingRule() const { DARABONBA_PTR_GET_CONST(appScalingRule_, UpdateApplicationScalingRuleResponseBodyAppScalingRule) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRule appScalingRule() { DARABONBA_PTR_GET(appScalingRule_, UpdateApplicationScalingRuleResponseBodyAppScalingRule) };
    inline UpdateApplicationScalingRuleResponseBody& setAppScalingRule(const UpdateApplicationScalingRuleResponseBodyAppScalingRule & appScalingRule) { DARABONBA_PTR_SET_VALUE(appScalingRule_, appScalingRule) };
    inline UpdateApplicationScalingRuleResponseBody& setAppScalingRule(UpdateApplicationScalingRuleResponseBodyAppScalingRule && appScalingRule) { DARABONBA_PTR_SET_RVALUE(appScalingRule_, appScalingRule) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateApplicationScalingRuleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateApplicationScalingRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApplicationScalingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the auto scaling policy.
    std::shared_ptr<UpdateApplicationScalingRuleResponseBodyAppScalingRule> appScalingRule_ = nullptr;
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
