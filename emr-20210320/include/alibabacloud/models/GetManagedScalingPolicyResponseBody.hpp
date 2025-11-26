// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDSCALINGPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDSCALINGPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetManagedScalingPolicyResponseBodyScalingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetManagedScalingPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedScalingPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingPolicy, scalingPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedScalingPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicy, scalingPolicy_);
    };
    GetManagedScalingPolicyResponseBody() = default ;
    GetManagedScalingPolicyResponseBody(const GetManagedScalingPolicyResponseBody &) = default ;
    GetManagedScalingPolicyResponseBody(GetManagedScalingPolicyResponseBody &&) = default ;
    GetManagedScalingPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedScalingPolicyResponseBody() = default ;
    GetManagedScalingPolicyResponseBody& operator=(const GetManagedScalingPolicyResponseBody &) = default ;
    GetManagedScalingPolicyResponseBody& operator=(GetManagedScalingPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->scalingPolicy_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetManagedScalingPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline const GetManagedScalingPolicyResponseBodyScalingPolicy & scalingPolicy() const { DARABONBA_PTR_GET_CONST(scalingPolicy_, GetManagedScalingPolicyResponseBodyScalingPolicy) };
    inline GetManagedScalingPolicyResponseBodyScalingPolicy scalingPolicy() { DARABONBA_PTR_GET(scalingPolicy_, GetManagedScalingPolicyResponseBodyScalingPolicy) };
    inline GetManagedScalingPolicyResponseBody& setScalingPolicy(const GetManagedScalingPolicyResponseBodyScalingPolicy & scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };
    inline GetManagedScalingPolicyResponseBody& setScalingPolicy(GetManagedScalingPolicyResponseBodyScalingPolicy && scalingPolicy) { DARABONBA_PTR_SET_RVALUE(scalingPolicy_, scalingPolicy) };


  protected:
    // 请求ID。
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetManagedScalingPolicyResponseBodyScalingPolicy> scalingPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
