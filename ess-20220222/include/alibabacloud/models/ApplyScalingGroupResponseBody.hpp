// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYSCALINGGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYSCALINGGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ApplyScalingGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyScalingGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyScalingGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    ApplyScalingGroupResponseBody() = default ;
    ApplyScalingGroupResponseBody(const ApplyScalingGroupResponseBody &) = default ;
    ApplyScalingGroupResponseBody(ApplyScalingGroupResponseBody &&) = default ;
    ApplyScalingGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyScalingGroupResponseBody() = default ;
    ApplyScalingGroupResponseBody& operator=(const ApplyScalingGroupResponseBody &) = default ;
    ApplyScalingGroupResponseBody& operator=(ApplyScalingGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->scalingGroupId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyScalingGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ApplyScalingGroupResponseBody& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the enabled scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
