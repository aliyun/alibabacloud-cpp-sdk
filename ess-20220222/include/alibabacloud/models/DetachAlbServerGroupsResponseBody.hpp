// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHALBSERVERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHALBSERVERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DetachAlbServerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachAlbServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachAlbServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
    };
    DetachAlbServerGroupsResponseBody() = default ;
    DetachAlbServerGroupsResponseBody(const DetachAlbServerGroupsResponseBody &) = default ;
    DetachAlbServerGroupsResponseBody(DetachAlbServerGroupsResponseBody &&) = default ;
    DetachAlbServerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachAlbServerGroupsResponseBody() = default ;
    DetachAlbServerGroupsResponseBody& operator=(const DetachAlbServerGroupsResponseBody &) = default ;
    DetachAlbServerGroupsResponseBody& operator=(DetachAlbServerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scalingActivityId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachAlbServerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string getScalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline DetachAlbServerGroupsResponseBody& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the scaling activity during which the ALB server group is detached from the scaling group and the existing ECS instances are removed from the ALB server group. This parameter has a return value only if you set `ForceDetach` to `true`.
    shared_ptr<string> scalingActivityId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
