// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHSERVERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHSERVERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class AttachServerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
    };
    AttachServerGroupsResponseBody() = default ;
    AttachServerGroupsResponseBody(const AttachServerGroupsResponseBody &) = default ;
    AttachServerGroupsResponseBody(AttachServerGroupsResponseBody &&) = default ;
    AttachServerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachServerGroupsResponseBody() = default ;
    AttachServerGroupsResponseBody& operator=(const AttachServerGroupsResponseBody &) = default ;
    AttachServerGroupsResponseBody& operator=(AttachServerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->scalingActivityId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachServerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string scalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline AttachServerGroupsResponseBody& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the scaling activity. During the scaling activity, the server group is attached to the scaling group and the existing ECS instances or elastic container instances in the scaling group are added to the server group.
    // 
    // >  This parameter is returned only if you set ForceAttach to true.
    std::shared_ptr<string> scalingActivityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
