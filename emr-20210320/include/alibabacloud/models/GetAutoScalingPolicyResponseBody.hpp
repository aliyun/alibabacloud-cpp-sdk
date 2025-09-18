// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAutoScalingPolicyResponseBodyScalingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetAutoScalingPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingPolicy, scalingPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicy, scalingPolicy_);
    };
    GetAutoScalingPolicyResponseBody() = default ;
    GetAutoScalingPolicyResponseBody(const GetAutoScalingPolicyResponseBody &) = default ;
    GetAutoScalingPolicyResponseBody(GetAutoScalingPolicyResponseBody &&) = default ;
    GetAutoScalingPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingPolicyResponseBody() = default ;
    GetAutoScalingPolicyResponseBody& operator=(const GetAutoScalingPolicyResponseBody &) = default ;
    GetAutoScalingPolicyResponseBody& operator=(GetAutoScalingPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->scalingPolicy_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoScalingPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline const GetAutoScalingPolicyResponseBodyScalingPolicy & scalingPolicy() const { DARABONBA_PTR_GET_CONST(scalingPolicy_, GetAutoScalingPolicyResponseBodyScalingPolicy) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicy scalingPolicy() { DARABONBA_PTR_GET(scalingPolicy_, GetAutoScalingPolicyResponseBodyScalingPolicy) };
    inline GetAutoScalingPolicyResponseBody& setScalingPolicy(const GetAutoScalingPolicyResponseBodyScalingPolicy & scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };
    inline GetAutoScalingPolicyResponseBody& setScalingPolicy(GetAutoScalingPolicyResponseBodyScalingPolicy && scalingPolicy) { DARABONBA_PTR_SET_RVALUE(scalingPolicy_, scalingPolicy) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The auto scaling policy.
    std::shared_ptr<GetAutoScalingPolicyResponseBodyScalingPolicy> scalingPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
