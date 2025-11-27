// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCCLOUDASSISTANTSTATUSRESPONSEBODYINSTANCECLOUDASSISTANTSTATUSSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCCLOUDASSISTANTSTATUSRESPONSEBODYINSTANCECLOUDASSISTANTSTATUSSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveTaskCount, activeTaskCount_);
      DARABONBA_PTR_TO_JSON(CloudAssistantStatus, cloudAssistantStatus_);
      DARABONBA_PTR_TO_JSON(CloudAssistantVersion, cloudAssistantVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvocationCount, invocationCount_);
      DARABONBA_PTR_TO_JSON(LastHeartbeatTime, lastHeartbeatTime_);
      DARABONBA_PTR_TO_JSON(LastInvokedTime, lastInvokedTime_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(SupportSessionManager, supportSessionManager_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveTaskCount, activeTaskCount_);
      DARABONBA_PTR_FROM_JSON(CloudAssistantStatus, cloudAssistantStatus_);
      DARABONBA_PTR_FROM_JSON(CloudAssistantVersion, cloudAssistantVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvocationCount, invocationCount_);
      DARABONBA_PTR_FROM_JSON(LastHeartbeatTime, lastHeartbeatTime_);
      DARABONBA_PTR_FROM_JSON(LastInvokedTime, lastInvokedTime_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(SupportSessionManager, supportSessionManager_);
    };
    DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet() = default ;
    DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet(const DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet &) = default ;
    DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet(DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet &&) = default ;
    DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet() = default ;
    DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& operator=(const DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet &) = default ;
    DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& operator=(DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeTaskCount_ == nullptr
        && return this->cloudAssistantStatus_ == nullptr && return this->cloudAssistantVersion_ == nullptr && return this->instanceId_ == nullptr && return this->invocationCount_ == nullptr && return this->lastHeartbeatTime_ == nullptr
        && return this->lastInvokedTime_ == nullptr && return this->OSType_ == nullptr && return this->supportSessionManager_ == nullptr; };
    // activeTaskCount Field Functions 
    bool hasActiveTaskCount() const { return this->activeTaskCount_ != nullptr;};
    void deleteActiveTaskCount() { this->activeTaskCount_ = nullptr;};
    inline int32_t activeTaskCount() const { DARABONBA_PTR_GET_DEFAULT(activeTaskCount_, 0) };
    inline DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setActiveTaskCount(int32_t activeTaskCount) { DARABONBA_PTR_SET_VALUE(activeTaskCount_, activeTaskCount) };


    // cloudAssistantStatus Field Functions 
    bool hasCloudAssistantStatus() const { return this->cloudAssistantStatus_ != nullptr;};
    void deleteCloudAssistantStatus() { this->cloudAssistantStatus_ = nullptr;};
    inline string cloudAssistantStatus() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantStatus_, "") };
    inline DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setCloudAssistantStatus(string cloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(cloudAssistantStatus_, cloudAssistantStatus) };


    // cloudAssistantVersion Field Functions 
    bool hasCloudAssistantVersion() const { return this->cloudAssistantVersion_ != nullptr;};
    void deleteCloudAssistantVersion() { this->cloudAssistantVersion_ = nullptr;};
    inline string cloudAssistantVersion() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantVersion_, "") };
    inline DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setCloudAssistantVersion(string cloudAssistantVersion) { DARABONBA_PTR_SET_VALUE(cloudAssistantVersion_, cloudAssistantVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invocationCount Field Functions 
    bool hasInvocationCount() const { return this->invocationCount_ != nullptr;};
    void deleteInvocationCount() { this->invocationCount_ = nullptr;};
    inline int32_t invocationCount() const { DARABONBA_PTR_GET_DEFAULT(invocationCount_, 0) };
    inline DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setInvocationCount(int32_t invocationCount) { DARABONBA_PTR_SET_VALUE(invocationCount_, invocationCount) };


    // lastHeartbeatTime Field Functions 
    bool hasLastHeartbeatTime() const { return this->lastHeartbeatTime_ != nullptr;};
    void deleteLastHeartbeatTime() { this->lastHeartbeatTime_ = nullptr;};
    inline string lastHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartbeatTime_, "") };
    inline DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setLastHeartbeatTime(string lastHeartbeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartbeatTime_, lastHeartbeatTime) };


    // lastInvokedTime Field Functions 
    bool hasLastInvokedTime() const { return this->lastInvokedTime_ != nullptr;};
    void deleteLastInvokedTime() { this->lastInvokedTime_ = nullptr;};
    inline string lastInvokedTime() const { DARABONBA_PTR_GET_DEFAULT(lastInvokedTime_, "") };
    inline DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setLastInvokedTime(string lastInvokedTime) { DARABONBA_PTR_SET_VALUE(lastInvokedTime_, lastInvokedTime) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // supportSessionManager Field Functions 
    bool hasSupportSessionManager() const { return this->supportSessionManager_ != nullptr;};
    void deleteSupportSessionManager() { this->supportSessionManager_ = nullptr;};
    inline bool supportSessionManager() const { DARABONBA_PTR_GET_DEFAULT(supportSessionManager_, false) };
    inline DescribeRCCloudAssistantStatusResponseBodyInstanceCloudAssistantStatusSet& setSupportSessionManager(bool supportSessionManager) { DARABONBA_PTR_SET_VALUE(supportSessionManager_, supportSessionManager) };


  protected:
    // The number of tasks that Cloud Assistant was running on the instance.
    std::shared_ptr<int32_t> activeTaskCount_ = nullptr;
    // Indicates whether Cloud Assistant is running on the instance. Valid values:
    // 
    // *   **true**: Heartbeats are detected in the last 2 minutes.
    // *   **false**: No heartbeat is detected in the last 2 minutes.
    std::shared_ptr<string> cloudAssistantStatus_ = nullptr;
    // The version number of Cloud Assistant Agent. This parameter is empty if Cloud Assistant Agent is not installed or is not running on the instance.
    std::shared_ptr<string> cloudAssistantVersion_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of tasks that Cloud Assistant completed on the instance.
    std::shared_ptr<int32_t> invocationCount_ = nullptr;
    // The last heartbeat time of Cloud Assistant. The value is updated every minute on average. The interval can be 55, 60, or 65 seconds.
    std::shared_ptr<string> lastHeartbeatTime_ = nullptr;
    // The time when commands were last run.
    std::shared_ptr<string> lastInvokedTime_ = nullptr;
    // The operating system type of the instance.
    std::shared_ptr<string> OSType_ = nullptr;
    // Indicates whether Cloud Assistant supports Session Manager on the instance. If Session Manager is not supported, the version of Cloud Assistant Agent is outdated. Update Cloud Assistant Agent to the latest version.
    // 
    // To support Session Manager, the version of Cloud Assistant Agent cannot be earlier than 2.2.3.189.
    std::shared_ptr<bool> supportSessionManager_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
