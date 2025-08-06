// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATUSRESPONSEBODYINSTANCESTATUSESINSTANCESTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATUSRESPONSEBODYINSTANCESTATUSESINSTANCESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus() = default ;
    DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus(const DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus &) = default ;
    DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus(DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus &&) = default ;
    DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus() = default ;
    DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus& operator=(const DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus &) = default ;
    DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus& operator=(DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->status_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   Pending: The instance is being created.
    // *   Running: The instance is running.
    // *   Starting: The instance is being started.
    // *   Stopping: The instance is being stopped.
    // *   Stopped: The instance is stopped.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
