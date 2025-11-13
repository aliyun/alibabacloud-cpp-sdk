// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BRIDGERTCCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BRIDGERTCCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class BridgeRtcCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BridgeRtcCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ServiceProvider, serviceProvider_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VideoEnabled, videoEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, BridgeRtcCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceProvider, serviceProvider_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VideoEnabled, videoEnabled_);
    };
    BridgeRtcCallRequest() = default ;
    BridgeRtcCallRequest(const BridgeRtcCallRequest &) = default ;
    BridgeRtcCallRequest(BridgeRtcCallRequest &&) = default ;
    BridgeRtcCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BridgeRtcCallRequest() = default ;
    BridgeRtcCallRequest& operator=(const BridgeRtcCallRequest &) = default ;
    BridgeRtcCallRequest& operator=(BridgeRtcCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callee_ == nullptr
        && return this->caller_ == nullptr && return this->deviceId_ == nullptr && return this->instanceId_ == nullptr && return this->serviceProvider_ == nullptr && return this->tags_ == nullptr
        && return this->timeoutSeconds_ == nullptr && return this->userId_ == nullptr && return this->videoEnabled_ == nullptr; };
    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string callee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline BridgeRtcCallRequest& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline BridgeRtcCallRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BridgeRtcCallRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BridgeRtcCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // serviceProvider Field Functions 
    bool hasServiceProvider() const { return this->serviceProvider_ != nullptr;};
    void deleteServiceProvider() { this->serviceProvider_ = nullptr;};
    inline string serviceProvider() const { DARABONBA_PTR_GET_DEFAULT(serviceProvider_, "") };
    inline BridgeRtcCallRequest& setServiceProvider(string serviceProvider) { DARABONBA_PTR_SET_VALUE(serviceProvider_, serviceProvider) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline BridgeRtcCallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t timeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline BridgeRtcCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline BridgeRtcCallRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // videoEnabled Field Functions 
    bool hasVideoEnabled() const { return this->videoEnabled_ != nullptr;};
    void deleteVideoEnabled() { this->videoEnabled_ = nullptr;};
    inline bool videoEnabled() const { DARABONBA_PTR_GET_DEFAULT(videoEnabled_, false) };
    inline BridgeRtcCallRequest& setVideoEnabled(bool videoEnabled) { DARABONBA_PTR_SET_VALUE(videoEnabled_, videoEnabled) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> callee_ = nullptr;
    std::shared_ptr<string> caller_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> serviceProvider_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
    std::shared_ptr<int32_t> timeoutSeconds_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<bool> videoEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
