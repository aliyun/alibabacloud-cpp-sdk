// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHLOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHLOADBALANCERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class AttachLoadBalancersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
    };
    AttachLoadBalancersResponseBody() = default ;
    AttachLoadBalancersResponseBody(const AttachLoadBalancersResponseBody &) = default ;
    AttachLoadBalancersResponseBody(AttachLoadBalancersResponseBody &&) = default ;
    AttachLoadBalancersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachLoadBalancersResponseBody() = default ;
    AttachLoadBalancersResponseBody& operator=(const AttachLoadBalancersResponseBody &) = default ;
    AttachLoadBalancersResponseBody& operator=(AttachLoadBalancersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->scalingActivityId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachLoadBalancersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string scalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline AttachLoadBalancersResponseBody& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the scaling activity.
    // 
    // This parameter is returned only if you set `Async` to `true`. You can call the DescribeScalingActivities operation to query the scaling activity IDs and status.
    std::shared_ptr<string> scalingActivityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
