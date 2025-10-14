// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetricRuleTargetsResponseBodyTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    DescribeMetricRuleTargetsResponseBody() = default ;
    DescribeMetricRuleTargetsResponseBody(const DescribeMetricRuleTargetsResponseBody &) = default ;
    DescribeMetricRuleTargetsResponseBody(DescribeMetricRuleTargetsResponseBody &&) = default ;
    DescribeMetricRuleTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTargetsResponseBody() = default ;
    DescribeMetricRuleTargetsResponseBody& operator=(const DescribeMetricRuleTargetsResponseBody &) = default ;
    DescribeMetricRuleTargetsResponseBody& operator=(DescribeMetricRuleTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->targets_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMetricRuleTargetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricRuleTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricRuleTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricRuleTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const DescribeMetricRuleTargetsResponseBodyTargets & targets() const { DARABONBA_PTR_GET_CONST(targets_, DescribeMetricRuleTargetsResponseBodyTargets) };
    inline DescribeMetricRuleTargetsResponseBodyTargets targets() { DARABONBA_PTR_GET(targets_, DescribeMetricRuleTargetsResponseBodyTargets) };
    inline DescribeMetricRuleTargetsResponseBody& setTargets(const DescribeMetricRuleTargetsResponseBodyTargets & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline DescribeMetricRuleTargetsResponseBody& setTargets(DescribeMetricRuleTargetsResponseBodyTargets && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   true: The call was successful.
    // *   false: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The information about the resource for which alerts are triggered.
    std::shared_ptr<DescribeMetricRuleTargetsResponseBodyTargets> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
