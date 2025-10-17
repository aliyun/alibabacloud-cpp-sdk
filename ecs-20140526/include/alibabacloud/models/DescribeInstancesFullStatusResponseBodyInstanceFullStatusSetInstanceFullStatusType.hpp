// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSRESPONSEBODYINSTANCEFULLSTATUSSETINSTANCEFULLSTATUSTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSRESPONSEBODYINSTANCEFULLSTATUSSETINSTANCEFULLSTATUSTYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeHealthStatus.hpp>
#include <alibabacloud/models/DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSet.hpp>
#include <alibabacloud/models/DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& obj) { 
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScheduledSystemEventSet, scheduledSystemEventSet_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScheduledSystemEventSet, scheduledSystemEventSet_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType() = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType(const DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType &) = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType(DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType &&) = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType() = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& operator=(const DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType &) = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& operator=(DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->healthStatus_ == nullptr
        && return this->instanceId_ == nullptr && return this->scheduledSystemEventSet_ == nullptr && return this->status_ == nullptr; };
    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline const Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeHealthStatus & healthStatus() const { DARABONBA_PTR_GET_CONST(healthStatus_, Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeHealthStatus) };
    inline Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeHealthStatus healthStatus() { DARABONBA_PTR_GET(healthStatus_, Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeHealthStatus) };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& setHealthStatus(const Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeHealthStatus & healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& setHealthStatus(Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeHealthStatus && healthStatus) { DARABONBA_PTR_SET_RVALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scheduledSystemEventSet Field Functions 
    bool hasScheduledSystemEventSet() const { return this->scheduledSystemEventSet_ != nullptr;};
    void deleteScheduledSystemEventSet() { this->scheduledSystemEventSet_ = nullptr;};
    inline const Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSet & scheduledSystemEventSet() const { DARABONBA_PTR_GET_CONST(scheduledSystemEventSet_, Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSet) };
    inline Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSet scheduledSystemEventSet() { DARABONBA_PTR_GET(scheduledSystemEventSet_, Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSet) };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& setScheduledSystemEventSet(const Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSet & scheduledSystemEventSet) { DARABONBA_PTR_SET_VALUE(scheduledSystemEventSet_, scheduledSystemEventSet) };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& setScheduledSystemEventSet(Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSet && scheduledSystemEventSet) { DARABONBA_PTR_SET_RVALUE(scheduledSystemEventSet_, scheduledSystemEventSet) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeStatus & status() const { DARABONBA_PTR_GET_CONST(status_, Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeStatus) };
    inline Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeStatus status() { DARABONBA_PTR_GET(status_, Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeStatus) };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& setStatus(const Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType& setStatus(Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    // The health state of the instance.
    std::shared_ptr<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeHealthStatus> healthStatus_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The system events that are in the Scheduled or Inquiring state.
    std::shared_ptr<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSet> scheduledSystemEventSet_ = nullptr;
    // The lifecycle state of the instance.
    std::shared_ptr<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusTypeStatus> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
