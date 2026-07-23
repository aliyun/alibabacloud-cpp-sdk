// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERATEPLANINSTANCESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERATEPLANINSTANCESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeRatePlanInstanceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRatePlanInstanceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRatePlanInstanceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
    };
    DescribeRatePlanInstanceStatusRequest() = default ;
    DescribeRatePlanInstanceStatusRequest(const DescribeRatePlanInstanceStatusRequest &) = default ;
    DescribeRatePlanInstanceStatusRequest(DescribeRatePlanInstanceStatusRequest &&) = default ;
    DescribeRatePlanInstanceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRatePlanInstanceStatusRequest() = default ;
    DescribeRatePlanInstanceStatusRequest& operator=(const DescribeRatePlanInstanceStatusRequest &) = default ;
    DescribeRatePlanInstanceStatusRequest& operator=(DescribeRatePlanInstanceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->resourceOwner_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRatePlanInstanceStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline int64_t getResourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, 0L) };
    inline DescribeRatePlanInstanceStatusRequest& setResourceOwner(int64_t resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


  protected:
    // The instance ID. You can obtain the ID by calling the [ListUserRatePlanInstances](~~ListUserRatePlanInstances~~) operation.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> resourceOwner_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
