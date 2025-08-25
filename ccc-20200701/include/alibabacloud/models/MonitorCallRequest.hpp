// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MONITORCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class MonitorCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MonitoredUserId, monitoredUserId_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MonitoredUserId, monitoredUserId_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    MonitorCallRequest() = default ;
    MonitorCallRequest(const MonitorCallRequest &) = default ;
    MonitorCallRequest(MonitorCallRequest &&) = default ;
    MonitorCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorCallRequest() = default ;
    MonitorCallRequest& operator=(const MonitorCallRequest &) = default ;
    MonitorCallRequest& operator=(MonitorCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceId_ != nullptr
        && this->instanceId_ != nullptr && this->monitoredUserId_ != nullptr && this->timeoutSeconds_ != nullptr && this->userId_ != nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline MonitorCallRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MonitorCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // monitoredUserId Field Functions 
    bool hasMonitoredUserId() const { return this->monitoredUserId_ != nullptr;};
    void deleteMonitoredUserId() { this->monitoredUserId_ = nullptr;};
    inline string monitoredUserId() const { DARABONBA_PTR_GET_DEFAULT(monitoredUserId_, "") };
    inline MonitorCallRequest& setMonitoredUserId(string monitoredUserId) { DARABONBA_PTR_SET_VALUE(monitoredUserId_, monitoredUserId) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline MonitorCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline MonitorCallRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> deviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> monitoredUserId_ = nullptr;
    std::shared_ptr<int32_t> timeoutSeconds_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
