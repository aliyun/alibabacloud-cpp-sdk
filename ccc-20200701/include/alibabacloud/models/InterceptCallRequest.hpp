// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTERCEPTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTERCEPTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class InterceptCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InterceptCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InterceptedUserId, interceptedUserId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, InterceptCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InterceptedUserId, interceptedUserId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    InterceptCallRequest() = default ;
    InterceptCallRequest(const InterceptCallRequest &) = default ;
    InterceptCallRequest(InterceptCallRequest &&) = default ;
    InterceptCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InterceptCallRequest() = default ;
    InterceptCallRequest& operator=(const InterceptCallRequest &) = default ;
    InterceptCallRequest& operator=(InterceptCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->instanceId_ == nullptr && this->interceptedUserId_ == nullptr && this->jobId_ == nullptr && this->timeoutSeconds_ == nullptr && this->userId_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline InterceptCallRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InterceptCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interceptedUserId Field Functions 
    bool hasInterceptedUserId() const { return this->interceptedUserId_ != nullptr;};
    void deleteInterceptedUserId() { this->interceptedUserId_ = nullptr;};
    inline string getInterceptedUserId() const { DARABONBA_PTR_GET_DEFAULT(interceptedUserId_, "") };
    inline InterceptCallRequest& setInterceptedUserId(string interceptedUserId) { DARABONBA_PTR_SET_VALUE(interceptedUserId_, interceptedUserId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline InterceptCallRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline InterceptCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline InterceptCallRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Device ID. This parameter is meaningless and can be filled in with any value.
    shared_ptr<string> deviceId_ {};
    // 实例 ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The agent ID that is forcibly disconnected.
    // 
    // This parameter is required.
    shared_ptr<string> interceptedUserId_ {};
    // The call ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // 强拆超时时间，经过指定的时间强拆仍未成功，则取消强拆，正常情况下，强拆操作会马上成功，设置超时时间是为了防止异常发生，此字段选填，默认 30，单位秒。
    shared_ptr<int32_t> timeoutSeconds_ {};
    // 发起强拆的坐席。
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
