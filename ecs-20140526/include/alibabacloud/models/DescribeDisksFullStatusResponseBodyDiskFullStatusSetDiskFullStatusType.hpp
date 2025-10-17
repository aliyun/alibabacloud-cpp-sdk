// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODYDISKFULLSTATUSSETDISKFULLSTATUSTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSFULLSTATUSRESPONSEBODYDISKFULLSTATUSSETDISKFULLSTATUSTYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeDiskEventSet.hpp>
#include <alibabacloud/models/DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeHealthStatus.hpp>
#include <alibabacloud/models/DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& obj) { 
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskEventSet, diskEventSet_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& obj) { 
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskEventSet, diskEventSet_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType() = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType(const DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType &) = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType(DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType &&) = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType() = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& operator=(const DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType &) = default ;
    DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& operator=(DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->device_ == nullptr
        && return this->diskEventSet_ == nullptr && return this->diskId_ == nullptr && return this->healthStatus_ == nullptr && return this->instanceId_ == nullptr && return this->status_ == nullptr; };
    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // diskEventSet Field Functions 
    bool hasDiskEventSet() const { return this->diskEventSet_ != nullptr;};
    void deleteDiskEventSet() { this->diskEventSet_ = nullptr;};
    inline const Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeDiskEventSet & diskEventSet() const { DARABONBA_PTR_GET_CONST(diskEventSet_, Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeDiskEventSet) };
    inline Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeDiskEventSet diskEventSet() { DARABONBA_PTR_GET(diskEventSet_, Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeDiskEventSet) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& setDiskEventSet(const Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeDiskEventSet & diskEventSet) { DARABONBA_PTR_SET_VALUE(diskEventSet_, diskEventSet) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& setDiskEventSet(Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeDiskEventSet && diskEventSet) { DARABONBA_PTR_SET_RVALUE(diskEventSet_, diskEventSet) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline const Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeHealthStatus & healthStatus() const { DARABONBA_PTR_GET_CONST(healthStatus_, Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeHealthStatus) };
    inline Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeHealthStatus healthStatus() { DARABONBA_PTR_GET(healthStatus_, Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeHealthStatus) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& setHealthStatus(const Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeHealthStatus & healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& setHealthStatus(Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeHealthStatus && healthStatus) { DARABONBA_PTR_SET_RVALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus & status() const { DARABONBA_PTR_GET_CONST(status_, Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus) };
    inline Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus status() { DARABONBA_PTR_GET(status_, Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& setStatus(const Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusType& setStatus(Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    // The name of the EBS device that is attached to an instance. Example: /dev/xvdb.
    // 
    // This parameter has a value only when the value of `Status` is `In_use`.
    // 
    // > This parameter will be deprecated in the future. To ensure future compatibility, we recommend that you do not use this parameter.
    std::shared_ptr<string> device_ = nullptr;
    // The events about the EBS device.
    std::shared_ptr<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeDiskEventSet> diskEventSet_ = nullptr;
    // The EBS device ID.
    std::shared_ptr<string> diskId_ = nullptr;
    // The health status of the EBS device.
    std::shared_ptr<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeHealthStatus> healthStatus_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The lifecycle status of the EBS device.
    std::shared_ptr<Models::DescribeDisksFullStatusResponseBodyDiskFullStatusSetDiskFullStatusTypeStatus> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
