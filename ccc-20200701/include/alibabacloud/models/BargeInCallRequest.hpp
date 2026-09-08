// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BARGEINCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BARGEINCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class BargeInCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BargeInCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BargedUserId, bargedUserId_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, BargeInCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BargedUserId, bargedUserId_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    BargeInCallRequest() = default ;
    BargeInCallRequest(const BargeInCallRequest &) = default ;
    BargeInCallRequest(BargeInCallRequest &&) = default ;
    BargeInCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BargeInCallRequest() = default ;
    BargeInCallRequest& operator=(const BargeInCallRequest &) = default ;
    BargeInCallRequest& operator=(BargeInCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bargedUserId_ == nullptr
        && this->deviceId_ == nullptr && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->timeoutSeconds_ == nullptr && this->userId_ == nullptr; };
    // bargedUserId Field Functions 
    bool hasBargedUserId() const { return this->bargedUserId_ != nullptr;};
    void deleteBargedUserId() { this->bargedUserId_ = nullptr;};
    inline string getBargedUserId() const { DARABONBA_PTR_GET_DEFAULT(bargedUserId_, "") };
    inline BargeInCallRequest& setBargedUserId(string bargedUserId) { DARABONBA_PTR_SET_VALUE(bargedUserId_, bargedUserId) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BargeInCallRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BargeInCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline BargeInCallRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline BargeInCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline BargeInCallRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Agent ID whose call was barged in on.
    // 
    // This parameter is required.
    shared_ptr<string> bargedUserId_ {};
    // Device ID. This parameter is meaningless and can be filled in with any value.
    shared_ptr<string> deviceId_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Call ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // Timeout for force insert, in seconds. If the force insert operation does not succeed within the specified time, it is canceled. Normally, the force insert operation succeeds immediately. The timeout setting is provided to handle abnormal scenarios. This field is optional and defaults to 30 seconds.
    shared_ptr<int32_t> timeoutSeconds_ {};
    // Agent ID initiating the force insert.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
