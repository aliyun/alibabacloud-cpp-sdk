// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONTARGETDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONTARGETDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInterceptionTargetDetailResponseBodyRuleTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionTargetDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionTargetDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleTarget, ruleTarget_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionTargetDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleTarget, ruleTarget_);
    };
    GetInterceptionTargetDetailResponseBody() = default ;
    GetInterceptionTargetDetailResponseBody(const GetInterceptionTargetDetailResponseBody &) = default ;
    GetInterceptionTargetDetailResponseBody(GetInterceptionTargetDetailResponseBody &&) = default ;
    GetInterceptionTargetDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionTargetDetailResponseBody() = default ;
    GetInterceptionTargetDetailResponseBody& operator=(const GetInterceptionTargetDetailResponseBody &) = default ;
    GetInterceptionTargetDetailResponseBody& operator=(GetInterceptionTargetDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleTarget_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInterceptionTargetDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleTarget Field Functions 
    bool hasRuleTarget() const { return this->ruleTarget_ != nullptr;};
    void deleteRuleTarget() { this->ruleTarget_ = nullptr;};
    inline const GetInterceptionTargetDetailResponseBodyRuleTarget & ruleTarget() const { DARABONBA_PTR_GET_CONST(ruleTarget_, GetInterceptionTargetDetailResponseBodyRuleTarget) };
    inline GetInterceptionTargetDetailResponseBodyRuleTarget ruleTarget() { DARABONBA_PTR_GET(ruleTarget_, GetInterceptionTargetDetailResponseBodyRuleTarget) };
    inline GetInterceptionTargetDetailResponseBody& setRuleTarget(const GetInterceptionTargetDetailResponseBodyRuleTarget & ruleTarget) { DARABONBA_PTR_SET_VALUE(ruleTarget_, ruleTarget) };
    inline GetInterceptionTargetDetailResponseBody& setRuleTarget(GetInterceptionTargetDetailResponseBodyRuleTarget && ruleTarget) { DARABONBA_PTR_SET_RVALUE(ruleTarget_, ruleTarget) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the network object.
    std::shared_ptr<GetInterceptionTargetDetailResponseBodyRuleTarget> ruleTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
